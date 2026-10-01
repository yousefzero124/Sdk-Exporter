#include "Model.hpp"
#include "Parser.hpp"
#include "Hierarchy.hpp"
#include "Generator.hpp"
#include "UI.hpp"
#include <iostream>
#include <chrono>
#include <mutex>


using namespace UEExporter;

static void PrintHelp()
{
    std::cout << "Usage: SDKExporter [SDK_PATH] [OPTIONS]\n\n"
              << "Options:\n"
              << "  -o, --output <file>       Output header file (default: Offsets.h)\n"
              << "  --preset <preset>         Export preset: core, game, all (default: all)\n"
              << "  --filter <keyword>        Filter classes containing keyword\n"
              << "  --json <file>             Export structured JSON file\n"
              << "  --ce <file>               Export Cheat Engine table (.CT)\n"
              << "  --search <query>          Instant terminal search for class or member\n"
              << "  --include-pads            Include Pad_XX padding members in output\n"
              << "  --include-inherited       Flatten inherited properties into subclasses\n"
              << "  --no-bitmasks             Disable generating bitmask constants\n"
              << "  -h, --help                Show this help message\n\n"
              << "Examples:\n"
              << "  SDKExporter.exe\n"
              << "  SDKExporter.exe CppSDK -o Offsets.h --preset core\n"
              << "  SDKExporter.exe CppSDK --json Offsets.json --preset game\n"
              << "  SDKExporter.exe CppSDK --search Health\n";
}

int main(int argc, char* argv[])
{
    UI::InitializeConsole();

    std::filesystem::path sdkPath = ".";
    ExportOptions options;
    std::string searchQuery = "";
    bool isCliAction = false;

    // Parse CLI arguments
    for (int i = 1; i < argc; ++i)
    {
        std::string arg = argv[i];

        if (arg == "-h" || arg == "--help")
        {
            PrintHelp();
            return 0;
        }
        else if (arg == "-o" || arg == "--output")
        {
            if (i + 1 < argc) options.outputPath = argv[++i];
        }
        else if (arg == "--preset")
        {
            if (i + 1 < argc) { options.preset = argv[++i]; isCliAction = true; }
        }
        else if (arg == "--filter")
        {
            if (i + 1 < argc) { options.preset = "custom"; options.filterKeywords.push_back(argv[++i]); isCliAction = true; }
        }
        else if (arg == "--json")
        {
            if (i + 1 < argc) { options.jsonPath = argv[++i]; isCliAction = true; }
        }
        else if (arg == "--ce")
        {
            if (i + 1 < argc) { options.cePath = argv[++i]; isCliAction = true; }
        }
        else if (arg == "--search")
        {
            if (i + 1 < argc) { searchQuery = argv[++i]; isCliAction = true; }
        }
        else if (arg == "--include-pads")
        {
            options.includePads = true;
        }
        else if (arg == "--include-inherited")
        {
            options.includeInherited = true;
        }
        else if (arg == "--no-bitmasks")
        {
            options.generateBitmasks = false;
        }
        else if (arg[0] != '-')
        {
            sdkPath = arg;
        }
    }

    if (!isCliAction)
    {
        UI::PrintBanner();
    }

    // Step 1: Discover SDK files
    SdkFiles files;
    if (!SdkParser::DiscoverSdkFiles(sdkPath, files))
    {
        // Try searching in current directory
        if (sdkPath != "." && SdkParser::DiscoverSdkFiles(".", files))
        {
            sdkPath = ".";
        }
        else if (isCliAction)
        {
            std::cout << UI::Colors::BRed 
                      << "[-] Error: Could not find Unreal Engine SDK files in: " 
                      << sdkPath.string() << UI::Colors::Reset << "\n";
            std::cout << "    Ensure the path contains 'CppSDK' or 'SDK', or pass it directly: SDKExporter.exe \"path/to/CppSDK\"\n\n";
            return 1;
        }
        else
        {
            while (!SdkParser::DiscoverSdkFiles(sdkPath, files))
            {
                std::cout << "\n  " << UI::Colors::BYellow 
                          << "[!] Could not find 'CppSDK' or 'SDK' folder in the current directory." << UI::Colors::Reset << "\n";
                std::cout << "  Please enter the path to the CppSDK folder\n"
                          << "  " << UI::Colors::Dim << "(or simply Drag & Drop the folder here and press Enter, or '0' to exit):" << UI::Colors::Reset << "\n\n";
                std::cout << "  " << UI::Colors::BCyan << "SDK Path > " << UI::Colors::Reset;

                std::string inputPath;
                if (!std::getline(std::cin, inputPath) || inputPath == "0" || inputPath == "exit" || inputPath == "q")
                {
                    return 0;
                }

                // Clean input (strip whitespace and surrounding quotes from Windows drag & drop)
                while (!inputPath.empty() && (inputPath.front() == ' ' || inputPath.front() == '\t')) inputPath.erase(0, 1);
                while (!inputPath.empty() && (inputPath.back() == ' ' || inputPath.back() == '\t' || inputPath.back() == '\r')) inputPath.pop_back();

                if (inputPath.size() >= 2 && ((inputPath.front() == '"' && inputPath.back() == '"') || (inputPath.front() == '\'' && inputPath.back() == '\'')))
                {
                    inputPath = inputPath.substr(1, inputPath.size() - 2);
                }

                if (!inputPath.empty())
                {
                    sdkPath = inputPath;
                }
            }
        }
    }


    // Step 2: Parse SDK Metadata & Global Offsets
    GlobalOffsets globals;
    if (!files.sdkHpp.empty())
    {
        SdkParser::ParseSdkHpp(files.sdkHpp, globals);
    }
    if (!files.basicHpp.empty())
    {
        SdkParser::ParseBasicHpp(files.basicHpp, globals);
    }

    size_t totalFiles = files.classHeaders.size() + files.structHeaders.size();

    // Step 3: Multi-threaded parsing of all classes and structs
    auto startTime = std::chrono::high_resolution_clock::now();

    if (!isCliAction)
    {
        std::cout << "  " << UI::Colors::BWhite << "Scanning SDK directory: " 
                  << UI::Colors::BCyan << files.sdkRoot.string() << UI::Colors::Reset << "\n";
        std::cout << "  " << UI::Colors::BWhite << "Parsing " << totalFiles << " header files across CPU cores...\n" << UI::Colors::Reset;
    }

    std::mutex progressMutex;
    auto lastProgressTime = std::chrono::steady_clock::now();

    auto onProgress = [&](size_t current, size_t total) {
        if (!isCliAction)
        {
            std::lock_guard<std::mutex> lock(progressMutex);
            auto now = std::chrono::steady_clock::now();
            auto msDiff = std::chrono::duration_cast<std::chrono::milliseconds>(now - lastProgressTime).count();
            if (msDiff >= 40 || current >= total)
            {
                lastProgressTime = now;
                auto nowHr = std::chrono::high_resolution_clock::now();
                double elapsed = std::chrono::duration<double>(nowHr - startTime).count();
                UI::PrintProgressBar(current, total, elapsed);
            }
        }
    };


    std::vector<ClassDef> parsedClasses = SdkParser::ParseAll(files, onProgress);

    auto endTime = std::chrono::high_resolution_clock::now();
    double elapsedMs = std::chrono::duration<double, std::milli>(endTime - startTime).count();

    // Step 4: Build Class Hierarchy
    ClassHierarchy hierarchy;
    hierarchy.Build(parsedClasses);

    // Calculate stats
    size_t totalClassesCount = 0;
    size_t totalStructsCount = 0;
    size_t totalPropsCount = 0;

    for (const auto& cls : hierarchy.GetAllClasses())
    {
        if (cls.isStruct) totalStructsCount++;
        else totalClassesCount++;
        totalPropsCount += cls.properties.size();
    }

    // Handle CLI Action mode
    if (isCliAction)
    {
        if (!searchQuery.empty())
        {
            auto results = hierarchy.Search(searchQuery, options.includePads);
            UI::PrintSearchResults(results, 50);
            return 0;
        }

        auto filtered = hierarchy.GetFilteredClasses(options);

        if (!options.jsonPath.empty())
        {
            if (Generator::GenerateJson(options.jsonPath, globals, filtered, hierarchy, options))
            {
                std::cout << "[+] JSON successfully exported to: " << options.jsonPath.string() << "\n";
            }
        }

        if (!options.cePath.empty())
        {
            if (Generator::GenerateCheatEngineTable(options.cePath, globals, filtered))
            {
                std::cout << "[+] Cheat Engine Table successfully exported to: " << options.cePath.string() << "\n";
            }
        }

        if (options.jsonPath.empty() && options.cePath.empty())
        {
            if (Generator::GenerateHeader(options.outputPath, globals, filtered, hierarchy, options))
            {
                std::cout << "[+] Header successfully generated: " << options.outputPath.string() 
                          << " (" << filtered.size() << " classes)\n";
            }
        }
        return 0;
    }

    // Step 5: Interactive Mode
    UI::PrintSummary(globals, totalFiles, totalClassesCount, totalStructsCount, totalPropsCount, elapsedMs);

    bool running = true;
    while (running)
    {
        UI::PrintMenu(options);

        std::string choice;
        if (!(std::cin >> choice))
        {
            break;
        }


        if (choice == "1")
        {
            // Quick Export: Core Engine
            options.preset = "core";
            std::filesystem::path outPath = (options.outputPath == "Offsets.h") ? "Offsets_Core.h" : options.outputPath;
            auto filtered = hierarchy.GetFilteredClasses(options);
            if (Generator::GenerateHeader(outPath, globals, filtered, hierarchy, options))
            {
                auto sz = std::filesystem::file_size(outPath);
                std::cout << "\n  " << UI::Colors::BGreen << "✔ SUCCESS: Generated " 
                          << outPath.string() << " (" << filtered.size() 
                          << " Core Engine classes, " << (sz / 1024) << " KB)" << UI::Colors::Reset << "\n\n";
            }
        }
        else if (choice == "2")
        {
            // Complete Export: All Classes
            options.preset = "all";
            std::filesystem::path outPath = options.outputPath;
            auto filtered = hierarchy.GetFilteredClasses(options);
            if (Generator::GenerateHeader(outPath, globals, filtered, hierarchy, options))
            {
                auto sz = std::filesystem::file_size(outPath);
                std::cout << "\n  " << UI::Colors::BGreen << "✔ SUCCESS: Generated " 
                          << outPath.string() << " (ALL " << filtered.size() 
                          << " classes and structs, " << (sz / 1024) << " KB)" << UI::Colors::Reset << "\n\n";
            }
        }
        else if (choice == "3")
        {
            // Game-Specific Blueprint Export
            options.preset = "game";
            std::filesystem::path outPath = (options.outputPath == "Offsets.h") ? "Offsets_Game.h" : options.outputPath;
            auto filtered = hierarchy.GetFilteredClasses(options);
            if (Generator::GenerateHeader(outPath, globals, filtered, hierarchy, options))
            {
                auto sz = std::filesystem::file_size(outPath);
                std::cout << "\n  " << UI::Colors::BGreen << "✔ SUCCESS: Generated " 
                          << outPath.string() << " (" << filtered.size() 
                          << " Gameplay & Blueprint classes, " << (sz / 1024) << " KB)" << UI::Colors::Reset << "\n\n";
            }
        }

        else if (choice == "4")
        {
            // Live Search & Inspector
            std::cout << "\n  " << UI::Colors::BYellow << "Type a class or property name to search (or 'back' to return):\n" << UI::Colors::Reset;
            while (true)
            {
                std::cout << "  " << UI::Colors::BCyan << "Search > " << UI::Colors::Reset;
                std::string q;
                if (!(std::cin >> q) || q == "back" || q == "exit" || q == "0") break;


                auto results = hierarchy.Search(q, options.includePads);
                UI::PrintSearchResults(results, 25);
            }
        }
        else if (choice == "5")
        {
            // Export to JSON
            std::filesystem::path jsonOut = "Offsets.json";
            auto filtered = hierarchy.GetFilteredClasses(options);
            if (Generator::GenerateJson(jsonOut, globals, filtered, hierarchy, options))
            {
                std::cout << "\n  " << UI::Colors::BGreen << "✔ SUCCESS: Exported " 
                          << jsonOut.string() << " (" << filtered.size() << " classes)" 
                          << UI::Colors::Reset << "\n\n";
            }
        }
        else if (choice == "6")
        {
            // Export Cheat Engine Table
            std::filesystem::path ceOut = "Offsets.CT";
            auto filtered = hierarchy.GetFilteredClasses(options);
            if (Generator::GenerateCheatEngineTable(ceOut, globals, filtered))
            {
                std::cout << "\n  " << UI::Colors::BGreen << "✔ SUCCESS: Exported Cheat Engine table to " 
                          << ceOut.string() << UI::Colors::Reset << "\n\n";
            }
        }
        else if (choice == "7")
        {
            // Config menu
            bool inConfig = true;
            while (inConfig)
            {
                UI::PrintConfigMenu(options);
                std::string cfgChoice;
                if (!(std::cin >> cfgChoice) || cfgChoice == "0") break;


                if (cfgChoice == "1") options.includePads = !options.includePads;
                else if (cfgChoice == "2") options.includeInherited = !options.includeInherited;
                else if (cfgChoice == "3") options.generateBitmasks = !options.generateBitmasks;
                else if (cfgChoice == "4")
                {
                    std::cout << "  Enter new output filename (e.g. MyOffsets.h): ";
                    std::string newName;
                    std::cin >> newName;
                    if (!newName.empty()) options.outputPath = newName;
                }
                else if (cfgChoice == "0") inConfig = false;
            }
        }
        else if (choice == "0" || choice == "exit" || choice == "q")
        {
            running = false;
            std::cout << "\n  " << UI::Colors::BGreen << "Goodbye!\n" << UI::Colors::Reset;
        }
        else
        {
            std::cout << "\n  " << UI::Colors::BRed << "Invalid option! Please enter a number between 0 and 7.\n\n" << UI::Colors::Reset;
        }
    }

    return 0;
}
