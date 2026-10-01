#include "Parser.hpp"
#include <fstream>
#include <sstream>
#include <thread>
#include <mutex>
#include <algorithm>
#include <cctype>
#include <charconv>

namespace UEExporter
{
    // Helper string utilities
    static inline std::string_view Trim(std::string_view str)
    {
        while (!str.empty() && (std::isspace(static_cast<unsigned char>(str.front())) || str.front() == '\t'))
        {
            str.remove_prefix(1);
        }
        while (!str.empty() && (std::isspace(static_cast<unsigned char>(str.back())) || str.back() == '\r' || str.back() == '\n' || str.back() == '\t'))
        {
            str.remove_suffix(1);
        }
        return str;
    }

    static inline bool StartsWith(std::string_view str, std::string_view prefix)
    {
        return str.size() >= prefix.size() && str.substr(0, prefix.size()) == prefix;
    }

    static inline bool EndsWith(std::string_view str, std::string_view suffix)
    {
        return str.size() >= suffix.size() && str.substr(str.size() - suffix.size()) == suffix;
    }

    static uint64_t ParseHex(std::string_view str)
    {
        str = Trim(str);
        if (StartsWith(str, "0x") || StartsWith(str, "0X"))
        {
            str.remove_prefix(2);
        }
        uint64_t val = 0;
        std::from_chars(str.data(), str.data() + str.size(), val, 16);
        return val;
    }

    bool SdkParser::DiscoverSdkFiles(const std::filesystem::path& startPath, SdkFiles& outFiles)
    {
        outFiles.classHeaders.clear();
        outFiles.structHeaders.clear();

        std::vector<std::filesystem::path> candidates = {
            startPath,
            startPath / "SDK",
            startPath / "CppSDK",
            startPath / "CppSDK" / "SDK"
        };

        std::filesystem::path targetDir;
        for (const auto& dir : candidates)
        {
            if (std::filesystem::exists(dir) && std::filesystem::is_directory(dir))
            {
                // Check if this dir or child has *_classes.hpp
                bool hasClasses = false;
                for (const auto& entry : std::filesystem::directory_iterator(dir))
                {
                    if (entry.is_regular_file())
                    {
                        std::string fn = entry.path().filename().string();
                        if (EndsWith(fn, "_classes.hpp") || fn == "Basic.hpp" || fn == "SDK.hpp")
                        {
                            hasClasses = true;
                            break;
                        }
                    }
                }
                if (hasClasses)
                {
                    targetDir = dir;
                    break;
                }
            }
        }

        if (targetDir.empty())
        {
            return false;
        }

        outFiles.sdkRoot = targetDir;

        // Scan target directory and parent (to find SDK.hpp / Basic.hpp if placed one level up)
        auto scanDir = [&](const std::filesystem::path& p) {
            if (!std::filesystem::exists(p)) return;
            for (const auto& entry : std::filesystem::directory_iterator(p))
            {
                if (!entry.is_regular_file()) continue;
                std::string fn = entry.path().filename().string();
                if (fn == "Basic.hpp" && outFiles.basicHpp.empty())
                {
                    outFiles.basicHpp = entry.path();
                }
                else if (fn == "SDK.hpp" && outFiles.sdkHpp.empty())
                {
                    outFiles.sdkHpp = entry.path();
                }
                else if (EndsWith(fn, "_classes.hpp"))
                {
                    outFiles.classHeaders.push_back(entry.path());
                }
                else if (EndsWith(fn, "_structs.hpp"))
                {
                    outFiles.structHeaders.push_back(entry.path());
                }
            }
        };

        scanDir(targetDir);

        // Also check targetDir's subfolder "SDK" if we were at CppSDK root
        if (std::filesystem::exists(targetDir / "SDK"))
        {
            scanDir(targetDir / "SDK");
        }
        // Also check targetDir's parent folder if we were inside "SDK"
        if (targetDir.has_parent_path())
        {
            auto parent = targetDir.parent_path();
            if (outFiles.sdkHpp.empty() && std::filesystem::exists(parent / "SDK.hpp"))
            {
                outFiles.sdkHpp = parent / "SDK.hpp";
            }
            if (outFiles.basicHpp.empty() && std::filesystem::exists(parent / "Basic.hpp"))
            {
                outFiles.basicHpp = parent / "Basic.hpp";
            }
        }

        return !outFiles.classHeaders.empty();
    }

    bool SdkParser::ParseSdkHpp(const std::filesystem::path& path, GlobalOffsets& outGlobals)
    {
        std::ifstream file(path);
        if (!file.is_open()) return false;

        std::string line;
        bool inCommentBlock = false;
        bool blockEnded = false;
        std::vector<std::string> postCommentLines;

        while (std::getline(file, line))
        {
            std::string_view sv = Trim(line);
            if (sv.empty()) continue;

            if (sv.find("/*") != std::string_view::npos)
            {
                inCommentBlock = true;
            }

            if (inCommentBlock)
            {
                if (sv.find("Dumper-") != std::string_view::npos)
                {
                    auto pos = sv.find("Dumper-");
                    outGlobals.dumperVersion = std::string(sv.substr(pos, 8));
                }
                if (sv.find("*/") != std::string_view::npos)
                {
                    inCommentBlock = false;
                    blockEnded = true;
                    continue;
                }
            }
            else if (blockEnded)
            {
                if (StartsWith(sv, "//"))
                {
                    sv.remove_prefix(2);
                    sv = Trim(sv);
                    if (!sv.empty() && !StartsWith(sv, "Includes the entire SDK"))
                    {
                        postCommentLines.push_back(std::string(sv));
                    }
                }
                else if (StartsWith(sv, "#include"))
                {
                    break;
                }
            }
        }

        if (postCommentLines.size() >= 1)
        {
            outGlobals.gameName = postCommentLines[0];
        }
        if (postCommentLines.size() >= 2)
        {
            outGlobals.engineVersion = postCommentLines[1];
        }

        return true;
    }

    bool SdkParser::ParseBasicHpp(const std::filesystem::path& path, GlobalOffsets& outGlobals)
    {
        std::ifstream file(path);
        if (!file.is_open()) return false;

        std::string line;
        bool inOffsets = false;

        while (std::getline(file, line))
        {
            std::string_view sv = Trim(line);
            if (sv.empty()) continue;

            if (sv.find("namespace Offsets") != std::string_view::npos)
            {
                inOffsets = true;
                continue;
            }

            if (inOffsets)
            {
                if (sv.find('}') != std::string_view::npos)
                {
                    inOffsets = false;
                    break;
                }

                // Look for lines like: constexpr int32 GObjects = 0x06EFE170;
                auto eqPos = sv.find('=');
                if (eqPos != std::string_view::npos && sv.find("constexpr") != std::string_view::npos)
                {
                    std::string_view left = Trim(sv.substr(0, eqPos));
                    std::string_view right = Trim(sv.substr(eqPos + 1));

                    // Get variable name (last word in left)
                    auto lastSpace = left.find_last_of(" \t");
                    std::string varName = (lastSpace != std::string_view::npos) 
                        ? std::string(Trim(left.substr(lastSpace + 1))) 
                        : std::string(left);

                    // Get hex offset in right
                    auto semiPos = right.find(';');
                    if (semiPos != std::string_view::npos)
                    {
                        right = Trim(right.substr(0, semiPos));
                    }
                    // Strip any trailing comments
                    auto commentPos = right.find("//");
                    if (commentPos != std::string_view::npos)
                    {
                        right = Trim(right.substr(0, commentPos));
                    }

                    uint64_t offsetVal = ParseHex(right);
                    outGlobals.offsets[varName] = offsetVal;
                }
            }
        }

        return !outGlobals.offsets.empty();
    }

    void SdkParser::ParseLineForProperty(std::string_view line, PropertyDef& outProp)
    {
        // Line format:
        // [Type] [Name]; // 0xXXXX(0xYYYY)(Flags...)
        // or
        // [Type] [Name] : [Bits]; // 0xXXXX(0xYYYY)(BitIndex: 0xZZ, PropSize: 0xWW...)

        auto commentPos = line.find("//");
        if (commentPos == std::string_view::npos) return;

        std::string_view codePart = Trim(line.substr(0, commentPos));
        std::string_view commentPart = Trim(line.substr(commentPos + 2));

        // Parse offset and size from commentPart: "0x0030(0x0008)..."
        auto parenOpen = commentPart.find('(');
        auto parenClose = commentPart.find(')', parenOpen != std::string_view::npos ? parenOpen : 0);

        if (parenOpen != std::string_view::npos && parenClose != std::string_view::npos)
        {
            std::string_view offsetStr = Trim(commentPart.substr(0, parenOpen));
            std::string_view sizeStr = Trim(commentPart.substr(parenOpen + 1, parenClose - parenOpen - 1));

            outProp.offset = static_cast<uint32_t>(ParseHex(offsetStr));
            outProp.size = static_cast<uint32_t>(ParseHex(sizeStr));

            // Extract flags and bit info
            std::string_view flagsPart = Trim(commentPart.substr(parenClose + 1));
            outProp.flags = std::string(flagsPart);

            // Check for bitfield info
            auto bitIndexPos = flagsPart.find("BitIndex:");
            if (bitIndexPos != std::string_view::npos)
            {
                outProp.isBitfield = true;
                std::string_view bitSub = flagsPart.substr(bitIndexPos + 9);
                bitSub = Trim(bitSub);
                auto commaPos = bitSub.find(',');
                if (commaPos != std::string_view::npos)
                {
                    bitSub = bitSub.substr(0, commaPos);
                }
                outProp.bitIndex = static_cast<uint8_t>(ParseHex(bitSub));
            }
        }

        // Parse codePart:
        // Strip trailing ';'
        if (EndsWith(codePart, ";"))
        {
            codePart.remove_suffix(1);
            codePart = Trim(codePart);
        }

        // Check if bitfield declaration: Name : Bits
        auto colonPos = codePart.rfind(':');
        if (colonPos != std::string_view::npos)
        {
            // Verify it's not part of '::'
            if (colonPos > 0 && codePart[colonPos - 1] != ':' && (colonPos + 1 < codePart.size() && codePart[colonPos + 1] != ':'))
            {
                outProp.isBitfield = true;
                std::string_view bitStr = Trim(codePart.substr(colonPos + 1));
                uint32_t bits = 1;
                std::from_chars(bitStr.data(), bitStr.data() + bitStr.size(), bits);
                outProp.bitCount = static_cast<uint8_t>(bits);
                codePart = Trim(codePart.substr(0, colonPos));
            }
        }

        // Last token is name
        auto lastSpace = codePart.find_last_of(" \t");
        if (lastSpace != std::string_view::npos)
        {
            outProp.name = std::string(Trim(codePart.substr(lastSpace + 1)));
            outProp.type = std::string(Trim(codePart.substr(0, lastSpace)));
        }
        else
        {
            outProp.name = std::string(codePart);
        }

        // Check if padding field
        if (StartsWith(outProp.name, "Pad_") || StartsWith(outProp.name, "BitPad_") || StartsWith(outProp.name, "Fixing Size"))
        {
            outProp.isPadding = true;
        }
    }

    void SdkParser::ParseHeaderContent(std::string_view content, 
                                       std::vector<ClassDef>& outClasses, 
                                       bool isStructHeader)
    {
        std::string currentPackage;
        uint32_t currentDeltaSize = 0;
        uint32_t currentTotalSize = 0;
        uint32_t currentSuperSize = 0;

        bool insideClass = false;
        ClassDef* currentClass = nullptr;

        size_t pos = 0;
        while (pos < content.size())
        {
            size_t nextPos = content.find('\n', pos);
            if (nextPos == std::string_view::npos) nextPos = content.size();

            std::string_view line = Trim(content.substr(pos, nextPos - pos));
            pos = nextPos + 1;

            if (line.empty()) continue;

            // Check metadata comments:
            // // Class ModuleName.ClassName
            // // ScriptStruct ModuleName.StructName
            // // BlueprintGeneratedClass ModuleName.ClassName
            if (StartsWith(line, "// Class ") || StartsWith(line, "// ScriptStruct ") || StartsWith(line, "// BlueprintGeneratedClass "))
            {
                auto lastSpace = line.rfind(' ');
                if (lastSpace != std::string_view::npos)
                {
                    std::string_view fullIdent = line.substr(lastSpace + 1);
                    auto dotPos = fullIdent.find('.');
                    if (dotPos != std::string_view::npos)
                    {
                        currentPackage = std::string(fullIdent.substr(0, dotPos));
                    }
                }
                continue;
            }

            // Check size comment:
            // // 0x08C0 (0x08E8 - 0x0028)
            if (StartsWith(line, "// 0x") && line.find('(') != std::string_view::npos && line.find('-') != std::string_view::npos)
            {
                auto parenOpen = line.find('(');
                auto dashPos = line.find('-');
                auto parenClose = line.find(')');

                if (parenOpen != std::string_view::npos && dashPos != std::string_view::npos && parenClose != std::string_view::npos)
                {
                    std::string_view deltaStr = Trim(line.substr(5, parenOpen - 5));
                    std::string_view totalStr = Trim(line.substr(parenOpen + 1, dashPos - parenOpen - 1));
                    std::string_view superStr = Trim(line.substr(dashPos + 1, parenClose - dashPos - 1));

                    currentDeltaSize = static_cast<uint32_t>(ParseHex(deltaStr));
                    currentTotalSize = static_cast<uint32_t>(ParseHex(totalStr));
                    currentSuperSize = static_cast<uint32_t>(ParseHex(superStr));
                }
                continue;
            }

            // Check class or struct declaration
            // class UWorld final : public UObject
            // class alignas(0x08) UObject
            // struct FVector
            // struct FVector2MaterialInput final : public FMaterialInput
            if (!insideClass && (StartsWith(line, "class ") || StartsWith(line, "struct ")))
            {
                // Verify this is not a forward declaration ending with ';'
                if (!EndsWith(line, ";") && line.find('(') == std::string_view::npos || StartsWith(line, "class alignas(") || StartsWith(line, "struct alignas("))
                {
                    bool isClass = StartsWith(line, "class ");
                    std::string_view decl = line.substr(isClass ? 6 : 7);
                    decl = Trim(decl);

                    // Skip alignas(...) if present
                    if (StartsWith(decl, "alignas("))
                    {
                        auto closeParen = decl.find(')');
                        if (closeParen != std::string_view::npos)
                        {
                            decl = Trim(decl.substr(closeParen + 1));
                        }
                    }

                    // Extract name and superclass
                    std::string className;
                    std::string superName;

                    auto colonPos = decl.find(':');
                    if (colonPos != std::string_view::npos)
                    {
                        std::string_view left = Trim(decl.substr(0, colonPos));
                        std::string_view right = Trim(decl.substr(colonPos + 1));

                        // Left might have 'final': e.g. "UWorld final"
                        auto finalPos = left.find(" final");
                        if (finalPos != std::string_view::npos)
                        {
                            left = Trim(left.substr(0, finalPos));
                        }
                        className = std::string(left);

                        // Right: "public UObject"
                        auto pubPos = right.find("public ");
                        if (pubPos != std::string_view::npos)
                        {
                            right = right.substr(pubPos + 7);
                        }
                        auto bracePos = right.find('{');
                        if (bracePos != std::string_view::npos)
                        {
                            right = right.substr(0, bracePos);
                        }
                        superName = std::string(Trim(right));
                    }
                    else
                    {
                        // No superclass
                        auto bracePos = decl.find('{');
                        if (bracePos != std::string_view::npos)
                        {
                            decl = decl.substr(0, bracePos);
                        }
                        auto finalPos = decl.find(" final");
                        if (finalPos != std::string_view::npos)
                        {
                            decl = decl.substr(0, finalPos);
                        }
                        className = std::string(Trim(decl));
                    }

                    if (!className.empty())
                    {
                        ClassDef cdef;
                        cdef.kind = isClass ? "class" : "struct";
                        cdef.name = className;
                        cdef.superName = superName;
                        cdef.packageName = currentPackage;
                        cdef.deltaSize = currentDeltaSize;
                        cdef.totalSize = currentTotalSize;
                        cdef.superSize = currentSuperSize;
                        cdef.isStruct = !isClass || isStructHeader;

                        outClasses.push_back(std::move(cdef));
                        currentClass = &outClasses.back();
                        insideClass = true;

                        currentDeltaSize = 0;
                        currentTotalSize = 0;
                        currentSuperSize = 0;
                        continue;
                    }
                }
            }

            // Inside class body
            if (insideClass && currentClass != nullptr)
            {
                // Check if class closing: starts with "};" or has "};"
                if (StartsWith(line, "};") || line == "};")
                {
                    insideClass = false;
                    currentClass = nullptr;
                    continue;
                }

                // Check for property line: contains "// 0x" and "(0x"
                auto commentPos = line.find("// 0x");
                if (commentPos != std::string_view::npos)
                {
                    // Verify it's not a pure comment line (starts with //)
                    if (!StartsWith(line, "//") && line.find("(0x", commentPos) != std::string_view::npos)
                    {
                        PropertyDef prop;
                        ParseLineForProperty(line, prop);
                        if (!prop.name.empty())
                        {
                            currentClass->properties.push_back(std::move(prop));
                        }
                    }
                }
            }
        }
    }

    std::vector<ClassDef> SdkParser::ParseAll(const SdkFiles& files, 
                                             std::function<void(size_t current, size_t total)> onProgress)
    {
        std::vector<std::pair<std::filesystem::path, bool>> allHeaders;
        allHeaders.reserve(files.classHeaders.size() + files.structHeaders.size());

        for (const auto& p : files.classHeaders)
        {
            allHeaders.push_back({ p, false });
        }
        for (const auto& p : files.structHeaders)
        {
            allHeaders.push_back({ p, true });
        }

        const size_t totalFiles = allHeaders.size();
        if (totalFiles == 0) return {};

        unsigned int threadCount = std::thread::hardware_concurrency();
        if (threadCount == 0) threadCount = 4;
        if (threadCount > totalFiles) threadCount = static_cast<unsigned int>(totalFiles);

        std::vector<std::vector<ClassDef>> threadResults(threadCount);
        std::atomic<size_t> fileIndex(0);
        std::atomic<size_t> completedFiles(0);

        auto worker = [&](unsigned int tid) {
            std::string buffer;
            while (true)
            {
                size_t idx = fileIndex.fetch_add(1);
                if (idx >= totalFiles) break;

                const auto& [filePath, isStruct] = allHeaders[idx];

                std::ifstream ifs(filePath, std::ios::binary | std::ios::ate);
                if (ifs.is_open())
                {
                    auto fileSize = ifs.tellg();
                    ifs.seekg(0, std::ios::beg);
                    buffer.resize(static_cast<size_t>(fileSize));
                    ifs.read(buffer.data(), fileSize);

                    ParseHeaderContent(buffer, threadResults[tid], isStruct);
                }

                size_t done = completedFiles.fetch_add(1) + 1;
                if (onProgress && (done % 50 == 0 || done == totalFiles))
                {
                    onProgress(done, totalFiles);
                }
            }
        };

        std::vector<std::thread> threads;
        for (unsigned int i = 0; i < threadCount; ++i)
        {
            threads.emplace_back(worker, i);
        }

        for (auto& t : threads)
        {
            if (t.joinable()) t.join();
        }



        // Merge all results
        size_t totalClasses = 0;
        for (const auto& vec : threadResults)
        {
            totalClasses += vec.size();
        }

        std::vector<ClassDef> merged;
        merged.reserve(totalClasses);
        for (auto& vec : threadResults)
        {
            merged.insert(merged.end(), std::make_move_iterator(vec.begin()), std::make_move_iterator(vec.end()));
        }

        return merged;
    }
}
