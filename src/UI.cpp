#include "UI.hpp"
#include <iostream>
#include <iomanip>

#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#endif

namespace UEExporter
{
    namespace UI
    {
        void InitializeConsole()
        {
#if defined(_WIN32)
            SetConsoleOutputCP(CP_UTF8);
            SetConsoleCP(CP_UTF8);

            HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
            if (hOut != INVALID_HANDLE_VALUE)
            {
                DWORD dwMode = 0;
                if (GetConsoleMode(hOut, &dwMode))
                {
                    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
                    SetConsoleMode(hOut, dwMode);
                }
            }
#endif
        }

        void PrintBanner()
        {
            std::cout << Colors::BCyan;
            std::cout << R"(
  ███████╗██████╗ ██╗  ██╗    ███████╗██╗  ██╗██████╗  ██████╗ ██████╗ ████████╗███████╗██████╗ 
  ██╔════╝██╔══██╗██║ ██╔╝    ██╔════╝╚██╗██╔╝██╔══██╗██╔═══██╗██╔══██╗╚══██╔══╝██╔════╝██╔══██╗
  ███████╗██║  ██║█████═╝     █████╗   ╚███╔╝ ██████╔╝██║   ██║██████╔╝   ██║   █████╗  ██████╔╝
  ╚════██║██║  ██║██╔═██╗     ██╔══╝   ██╔██╗ ██╔═══╝ ██║   ██║██╔══██╗   ██║   ██╔══╝  ██╔══██╗
  ███████║██████╔╝██║ ╚██╗    ███████╗██╔╝ ██╗██║     ╚██████╔╝██║  ██║   ██║   ███████╗██║  ██║
  ╚══════╝╚═════╝ ╚═╝  ╚═╝    ╚══════╝╚═╝  ╚═╝╚═╝      ╚═════╝ ╚═╝  ╚═╝   ╚═╝   ╚══════╝╚═╝  ╚═╝
)" << Colors::Reset;
            std::cout << Colors::BMagenta << "                 [ Unreal Engine Dumper-7/8/9 SDK Offset Exporter v2.0 ]\n" << Colors::Reset;
            std::cout << Colors::BYellow  << "                            Developed by: Yousef_Zero\n" << Colors::Reset;
            std::cout << Colors::Dim      << "                     Fast, Intelligent & Multi-threaded Offset Generator\n\n" << Colors::Reset;
        }

        void PrintProgressBar(size_t current, size_t total, double elapsedSeconds)
        {
            if (total == 0) return;
            const int barWidth = 35;
            float progress = static_cast<float>(current) / total;
            int pos = static_cast<int>(barWidth * progress);

            // \033[2K clears current line, \r returns cursor to beginning
            std::cout << "\033[2K\r  " << Colors::BCyan << "[" << Colors::BGreen;
            for (int i = 0; i < barWidth; ++i)
            {
                if (i < pos) std::cout << "█";
                else if (i == pos) std::cout << "▓";
                else std::cout << " ";
            }
            std::cout << Colors::BCyan << "] " 
                      << Colors::BWhite << std::setw(3) << static_cast<int>(progress * 100.0f) << "% "
                      << Colors::Dim << "(" << current << "/" << total << " files) "
                      << Colors::BYellow << std::fixed << std::setprecision(1) << elapsedSeconds << "s"
                      << Colors::Reset << std::flush;
        }

        void PrintSummary(const GlobalOffsets& globals, 
                          size_t totalFiles, 
                          size_t totalClasses, 
                          size_t totalStructs, 
                          size_t totalProps, 
                          double elapsedMs)
        {
            std::cout << "\n  " << Colors::BCyan << "===========================================================================" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BWhite << Colors::Bold << "  SDK PARSER SUMMARY" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BCyan << "===========================================================================" << Colors::Reset << "\n";

            auto printRow = [](const std::string& label, const std::string& val, const char* valColor) {
                std::cout << "    " << Colors::White << std::left << std::setw(22) << label 
                          << ": " << valColor << val << Colors::Reset << "\n";
            };

            printRow("Developer", "Yousef_Zero", Colors::BYellow);
            printRow("Game Title", globals.gameName, Colors::BGreen);

            printRow("Engine Version", globals.engineVersion, Colors::BYellow);
            printRow("Dumper Engine", globals.dumperVersion, Colors::BMagenta);
            printRow("Discovered Files", std::to_string(totalFiles) + " header files", Colors::White);
            printRow("Classes Found", std::to_string(totalClasses), Colors::BCyan);
            printRow("Structs Found", std::to_string(totalStructs), Colors::BCyan);
            printRow("Total Properties", std::to_string(totalProps) + " member offsets", Colors::BGreen);

            std::ostringstream timeSs;
            timeSs << std::fixed << std::setprecision(1) << elapsedMs << " ms (" 
                   << std::setprecision(2) << (elapsedMs / 1000.0) << " seconds)";
            printRow("Execution Time", timeSs.str(), Colors::BYellow);

            std::cout << "  " << Colors::BCyan << "---------------------------------------------------------------------------" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BWhite << "  Global Engine Offsets Discovered:" << Colors::Reset << "\n";
            for (const auto& [name, val] : globals.offsets)
            {
                std::ostringstream ss;
                ss << "0x" << std::hex << std::uppercase << val;
                std::cout << "    " << Colors::White << "  • " << std::left << std::setw(20) << name 
                          << ": " << Colors::BGreen << ss.str() << Colors::Reset << "\n";
            }

            std::cout << "  " << Colors::BCyan << "===========================================================================" << Colors::Reset << "\n\n";
        }



        void PrintMenu(const ExportOptions& options)
        {
            std::cout << "  " << Colors::BWhite << Colors::Bold << "SELECT AN ACTION:" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BCyan  << "───────────────────────────────────────────────────────────────────────────" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BGreen << "[1] " << Colors::BWhite << "Quick Export: Essential Offsets  " 
                      << Colors::Dim << "-> Offsets_Core.h (Core Engine Only)" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BGreen << "[2] " << Colors::BWhite << "Complete Export: All SDK Offsets " 
                      << Colors::Dim << "-> Offsets.h (Full Dump - All Classes)" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BGreen << "[3] " << Colors::BWhite << "Game-Specific Blueprint Export   " 
                      << Colors::Dim << "-> Offsets_Game.h (All BP_* Gameplay classes)" << Colors::Reset << "\n";

            std::cout << "  " << Colors::BYellow<< "[4] " << Colors::BWhite << "Live Interactive Inspector       " 
                      << Colors::Dim << "-> Search Class, Struct or Property name" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BMagenta<< "[5] " << Colors::BWhite << "Export to JSON Format            " 
                      << Colors::Dim << "-> Offsets.json" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BMagenta<< "[6] " << Colors::BWhite << "Export Cheat Engine Table        " 
                      << Colors::Dim << "-> Offsets.CT" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BCyan  << "[7] " << Colors::BWhite << "Configure Options & Toggles      " 
                      << Colors::Dim << "(Pads: " << (options.includePads ? "ON" : "OFF") 
                      << " | Inherited: " << (options.includeInherited ? "ON" : "OFF") << ")" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BRed   << "[0] " << Colors::BWhite << "Exit" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BCyan  << "───────────────────────────────────────────────────────────────────────────" << Colors::Reset << "\n";
            std::cout << "  " << Colors::Bold << "Enter choice: " << Colors::Reset;
        }

        void PrintConfigMenu(const ExportOptions& options)
        {
            std::cout << "\n  " << Colors::BWhite << Colors::Bold << "CONFIGURATION OPTIONS:" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BCyan  << "───────────────────────────────────────────────────────────────────────────" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BGreen << "[1] " << Colors::White << "Toggle Include Padding Fields  : " 
                      << (options.includePads ? Colors::BGreen : Colors::BRed) << (options.includePads ? "ENABLED" : "DISABLED") << Colors::Reset << "\n";
            std::cout << "  " << Colors::BGreen << "[2] " << Colors::White << "Toggle Inherited Properties    : " 
                      << (options.includeInherited ? Colors::BGreen : Colors::BRed) << (options.includeInherited ? "ENABLED" : "DISABLED") << Colors::Reset << "\n";
            std::cout << "  " << Colors::BGreen << "[3] " << Colors::White << "Toggle Bitmask Helpers Constants: " 
                      << (options.generateBitmasks ? Colors::BGreen : Colors::BRed) << (options.generateBitmasks ? "ENABLED" : "DISABLED") << Colors::Reset << "\n";
            std::cout << "  " << Colors::BGreen << "[4] " << Colors::White << "Change Output File Name (Current: " << options.outputPath.string() << ")" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BRed   << "[0] " << Colors::White << "Back to Main Menu" << Colors::Reset << "\n";
            std::cout << "  " << Colors::BCyan  << "───────────────────────────────────────────────────────────────────────────" << Colors::Reset << "\n";
            std::cout << "  " << Colors::Bold << "Enter choice: " << Colors::Reset;
        }

        static std::string FormatHex(uint64_t val, int width = 4)
        {
            std::ostringstream ss;
            ss << "0x" << std::hex << std::uppercase << std::setfill('0') << std::setw(width) << val;
            return ss.str();
        }

        void PrintSearchResults(const std::vector<ClassHierarchy::SearchResult>& results, size_t maxDisplay)
        {
            if (results.empty())
            {
                std::cout << "\n  " << Colors::BRed << "No matching classes or properties found!" << Colors::Reset << "\n\n";
                return;
            }

            size_t displayed = 0;
            size_t totalProps = 0;
            for (const auto& r : results) totalProps += r.matchedProperties.size();

            std::cout << "\n  " << Colors::BGreen << "Found " << results.size() << " classes/structs with " 
                      << totalProps << " matching properties:\n" << Colors::Reset;

            for (const auto& r : results)
            {
                if (displayed++ >= maxDisplay)
                {
                    std::cout << "  " << Colors::Dim << "... and " << (results.size() - maxDisplay) 
                              << " more classes (refine query to narrow down) ...\n" << Colors::Reset;
                    break;
                }

                std::cout << "\n  " << Colors::BCyan << Colors::Bold 
                          << (r.classDef->isStruct ? "[Struct] " : "[Class] ") << r.classDef->name
                          << Colors::Reset << Colors::Dim << " (" << r.classDef->packageName << ")"
                          << " | Size: " << FormatHex(r.classDef->totalSize, 4);
                if (!r.classDef->superName.empty())
                {
                    std::cout << " | Super: " << r.classDef->superName;
                }
                std::cout << Colors::Reset << "\n";

                // Print properties
                if (!r.matchedProperties.empty())
                {
                    for (const auto& p : r.matchedProperties)
                    {
                        std::cout << "    " << Colors::BWhite << "• " 
                                  << Colors::BGreen << std::left << std::setw(28) << p.name 
                                  << Colors::Reset << " @ " 
                                  << Colors::BMagenta << FormatHex(p.offset, 4) 
                                  << Colors::Reset << "  " 
                                  << Colors::BYellow << "(" << p.type << ")" << Colors::Reset;

                        if (p.isBitfield)
                        {
                            uint32_t mask = (1 << p.bitIndex);
                            std::cout << Colors::BCyan << " [Bit: " << (int)p.bitIndex 
                                      << ", Mask: " << FormatHex(mask, 2) << "]" << Colors::Reset;
                        }
                        if (!p.inheritedFrom.empty())
                        {
                            std::cout << Colors::Dim << " (from " << p.inheritedFrom << ")" << Colors::Reset;
                        }
                        std::cout << "\n";
                    }
                }
                else if (r.matchedClassName)
                {
                    std::cout << "    " << Colors::Dim << "(Class matched by name - " 
                              << r.classDef->properties.size() << " total properties)\n" << Colors::Reset;
                }
            }
            std::cout << "\n";
        }

    }
}
