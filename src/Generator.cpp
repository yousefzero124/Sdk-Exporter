#include "Generator.hpp"
#include <fstream>
#include <iomanip>
#include <sstream>
#include <chrono>
#include <ctime>

namespace UEExporter
{
    static std::string ToHex(uint64_t val, int width = 4)
    {
        std::ostringstream ss;
        ss << "0x" << std::hex << std::uppercase << std::setfill('0') << std::setw(width) << val;
        return ss.str();
    }

    static std::string CurrentDateTime()
    {
        auto now = std::chrono::system_clock::now();
        std::time_t now_time = std::chrono::system_clock::to_time_t(now);
        std::tm tm{};
#if defined(_WIN32)
        localtime_s(&tm, &now_time);
#else
        localtime_r(&now_time, &tm);
#endif
        char buf[64];
        std::strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", &tm);
        return buf;
    }

    bool Generator::GenerateHeader(const std::filesystem::path& outputPath,
                                   const GlobalOffsets& globals,
                                   const std::vector<const ClassDef*>& classes,
                                   const ClassHierarchy& hierarchy,
                                   const ExportOptions& options)
    {
        std::ofstream out(outputPath);
        if (!out.is_open()) return false;

        size_t totalProps = 0;
        for (const auto* cls : classes)
        {
            if (options.includeInherited)
            {
                totalProps += hierarchy.GetFlattenedProperties(*cls, options.includePads).size();
            }
            else
            {
                for (const auto& prop : cls->properties)
                {
                    if (options.includePads || !prop.isPadding) totalProps++;
                }
            }
        }

        // Header Banner
        out << "#pragma once\n";
        out << "/*\n";
        out << " * =========================================================================\n";
        out << " *  UNREAL ENGINE OFFSET EXPORTER - AUTO GENERATED OFFSETS\n";
        out << " * =========================================================================\n";
        out << " *  Developer       : Yousef_Zero\n";
        out << " *  Game Name       : " << globals.gameName << "\n";
        out << " *  Engine Version  : " << globals.engineVersion << "\n";
        out << " *  Dumper Version  : " << globals.dumperVersion << "\n";
        out << " *  Generated On    : " << CurrentDateTime() << "\n";
        out << " *  Total Classes   : " << classes.size() << "\n";
        out << " *  Total Offsets   : " << totalProps << "\n";
        out << " *  Preset Used     : " << options.preset << "\n";
        out << " *  Copyright (C) 2026 Yousef_Zero. All rights reserved.\n";
        out << " * =========================================================================\n";
        out << " */\n\n";

        out << "#include <cstdint>\n\n";
        out << "namespace Offsets\n";
        out << "{\n";

        // Global Offsets
        if (!globals.offsets.empty())
        {
            out << "    // =========================================================================\n";
            out << "    // GLOBAL ENGINE OFFSETS\n";
            out << "    // =========================================================================\n";
            out << "    namespace Global\n";
            out << "    {\n";
            for (const auto& [name, val] : globals.offsets)
            {
                out << "        constexpr uintptr_t " << std::left << std::setw(24) << name 
                    << " = " << ToHex(val, 8) << ";\n";
            }
            out << "    }\n\n";
        }

        // Classes & Structs
        out << "    // =========================================================================\n";
        out << "    // CLASSES & STRUCTS OFFSETS\n";
        out << "    // =========================================================================\n\n";

        for (const auto* cls : classes)
        {
            std::vector<PropertyDef> props;
            if (options.includeInherited)
            {
                props = hierarchy.GetFlattenedProperties(*cls, options.includePads);
            }
            else
            {
                for (const auto& p : cls->properties)
                {
                    if (options.includePads || !p.isPadding)
                    {
                        props.push_back(p);
                    }
                }
            }

            if (options.onlyWithProps && props.empty()) continue;

            out << "    // -------------------------------------------------------------------------\n";
            out << "    // " << (cls->isStruct ? "Struct: " : "Class: ") << cls->name << "\n";
            out << "    // Package: " << (cls->packageName.empty() ? "None" : cls->packageName)
                << " | Size: " << ToHex(cls->totalSize, 4);
            if (!cls->superName.empty())
            {
                out << " | Super: " << cls->superName << " (" << ToHex(cls->superSize, 4) << ")";
            }
            out << "\n";
            out << "    // -------------------------------------------------------------------------\n";
            out << "    namespace " << cls->name << "\n";
            out << "    {\n";

            std::string lastParent = "";
            for (const auto& prop : props)
            {
                if (!prop.inheritedFrom.empty() && prop.inheritedFrom != lastParent)
                {
                    lastParent = prop.inheritedFrom;
                    out << "        // --- Inherited from " << lastParent << " ---\n";
                }
                else if (prop.inheritedFrom.empty() && !lastParent.empty())
                {
                    lastParent = "";
                    out << "        // --- Direct Members ---\n";
                }

                out << "        constexpr uintptr_t " << std::left << std::setw(32) << prop.name
                    << " = " << ToHex(prop.offset, 4) << "; // " << prop.type;

                if (prop.isBitfield)
                {
                    uint32_t mask = (1 << prop.bitIndex);
                    out << " : " << (int)prop.bitCount << " (BitIndex: " << (int)prop.bitIndex 
                        << ", Mask: " << ToHex(mask, 2) << ")";
                }
                else
                {
                    out << " (Size: " << ToHex(prop.size, 4) << ")";
                }
                out << "\n";

                // Generate extra bitmask helpers for bitfields if requested
                if (prop.isBitfield && options.generateBitmasks)
                {
                    uint32_t mask = (1 << prop.bitIndex);
                    out << "        constexpr uint8_t   " << std::left << std::setw(32) 
                        << (prop.name + "_Bit") << " = " << (int)prop.bitIndex << ";\n";
                    out << "        constexpr uint8_t   " << std::left << std::setw(32) 
                        << (prop.name + "_Mask") << " = " << ToHex(mask, 2) << ";\n";
                }
            }

            out << "    }\n\n";
        }

        out << "}\n";
        return true;
    }

    bool Generator::GenerateJson(const std::filesystem::path& outputPath,
                                 const GlobalOffsets& globals,
                                 const std::vector<const ClassDef*>& classes,
                                 const ClassHierarchy& hierarchy,
                                 const ExportOptions& options)
    {
        std::ofstream out(outputPath);
        if (!out.is_open()) return false;

        out << "{\n";
        out << "  \"metadata\": {\n";
        out << "    \"author\": \"Yousef_Zero\",\n";
        out << "    \"game\": \"" << globals.gameName << "\",\n";
        out << "    \"engine\": \"" << globals.engineVersion << "\",\n";
        out << "    \"dumper\": \"" << globals.dumperVersion << "\",\n";
        out << "    \"generated_on\": \"" << CurrentDateTime() << "\"\n";
        out << "  },\n";


        // Globals
        out << "  \"globals\": {\n";
        size_t gIdx = 0;
        for (const auto& [name, val] : globals.offsets)
        {
            out << "    \"" << name << "\": \"" << ToHex(val, 8) << "\"";
            if (++gIdx < globals.offsets.size()) out << ",";
            out << "\n";
        }
        out << "  },\n";

        // Classes
        out << "  \"classes\": [\n";
        for (size_t i = 0; i < classes.size(); ++i)
        {
            const auto* cls = classes[i];
            auto props = options.includeInherited 
                ? hierarchy.GetFlattenedProperties(*cls, options.includePads)
                : cls->properties;

            out << "    {\n";
            out << "      \"name\": \"" << cls->name << "\",\n";
            out << "      \"kind\": \"" << cls->kind << "\",\n";
            out << "      \"super\": \"" << cls->superName << "\",\n";
            out << "      \"package\": \"" << cls->packageName << "\",\n";
            out << "      \"total_size\": \"" << ToHex(cls->totalSize, 4) << "\",\n";
            out << "      \"properties\": [\n";

            size_t pIdx = 0;
            for (const auto& p : props)
            {
                if (!options.includePads && p.isPadding) continue;

                if (pIdx > 0) out << ",\n";
                out << "        {\n";
                out << "          \"name\": \"" << p.name << "\",\n";
                out << "          \"type\": \"" << p.type << "\",\n";
                out << "          \"offset\": \"" << ToHex(p.offset, 4) << "\",\n";
                out << "          \"size\": \"" << ToHex(p.size, 4) << "\",\n";
                out << "          \"is_bitfield\": " << (p.isBitfield ? "true" : "false") << ",\n";
                out << "          \"bit_index\": " << (int)p.bitIndex << ",\n";
                out << "          \"is_padding\": " << (p.isPadding ? "true" : "false") << "\n";
                out << "        }";
                pIdx++;
            }
            out << "\n      ]\n";
            out << "    }";
            if (i + 1 < classes.size()) out << ",";
            out << "\n";
        }
        out << "  ]\n";
        out << "}\n";

        return true;
    }

    bool Generator::GenerateCheatEngineTable(const std::filesystem::path& outputPath,
                                            const GlobalOffsets& globals,
                                            const std::vector<const ClassDef*>& classes)
    {
        std::ofstream out(outputPath);
        if (!out.is_open()) return false;

        out << "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n";
        out << "<CheatTable CheatEngineTableVersion=\"42\">\n";
        out << "  <CheatEntries>\n";

        int id = 0;
        // Add Global entries
        for (const auto& [name, val] : globals.offsets)
        {
            out << "    <CheatEntry>\n";
            out << "      <ID>" << id++ << "</ID>\n";
            out << "      <Description>\"[Global] " << name << "\"</Description>\n";
            out << "      <ShowAsHex>1</ShowAsHex>\n";
            out << "      <ShowAsSigned>0</ShowAsSigned>\n";
            out << "      <VariableType>8 Bytes</VariableType>\n";
            out << "      <Address>\"" << globals.gameName << ".exe\"+" << ToHex(val, 8) << "</Address>\n";
            out << "    </CheatEntry>\n";
        }

        // Add some essential classes if present
        for (const auto* cls : classes)
        {
            if (cls->name == "UWorld" || cls->name == "APlayerController" || cls->name == "ACharacter")
            {
                out << "    <CheatEntry>\n";
                out << "      <ID>" << id++ << "</ID>\n";
                out << "      <Description>\"[" << cls->name << " Group]\"</Description>\n";
                out << "      <GroupHeader>1</GroupHeader>\n";
                out << "      <CheatEntries>\n";

                for (const auto& p : cls->properties)
                {
                    if (p.isPadding) continue;
                    out << "        <CheatEntry>\n";
                    out << "          <ID>" << id++ << "</ID>\n";
                    out << "          <Description>\"" << p.name << " (" << p.type << ")\"</Description>\n";
                    out << "          <ShowAsHex>1</ShowAsHex>\n";
                    out << "          <VariableType>8 Bytes</VariableType>\n";
                    out << "          <Address>+" << ToHex(p.offset, 4) << "</Address>\n";
                    out << "        </CheatEntry>\n";
                }
                out << "      </CheatEntries>\n";
                out << "    </CheatEntry>\n";
            }
        }

        out << "  </CheatEntries>\n";
        out << "</CheatTable>\n";

        return true;
    }
}
