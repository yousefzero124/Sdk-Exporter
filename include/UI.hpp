#pragma once
#include "Model.hpp"
#include "Hierarchy.hpp"
#include <string>

namespace UEExporter
{
    namespace UI
    {
        // Setup console for UTF-8 and ANSI colors
        void InitializeConsole();

        // Print header logo & banner
        void PrintBanner();

        // Draw animated progress bar
        void PrintProgressBar(size_t current, size_t total, double elapsedSeconds);

        // Print summary card of parsed SDK
        void PrintSummary(const GlobalOffsets& globals, 
                          size_t totalFiles, 
                          size_t totalClasses, 
                          size_t totalStructs, 
                          size_t totalProps, 
                          double elapsedMs);

        // Display interactive menu
        void PrintMenu(const ExportOptions& options);

        // Display search results
        void PrintSearchResults(const std::vector<ClassHierarchy::SearchResult>& results, size_t maxDisplay = 20);

        // Display configuration options
        void PrintConfigMenu(const ExportOptions& options);

        // Colors
        namespace Colors
        {
            inline const char* Reset   = "\033[0m";
            inline const char* Bold    = "\033[1m";
            inline const char* Dim     = "\033[2m";

            inline const char* Red     = "\033[31m";
            inline const char* Green   = "\033[32m";
            inline const char* Yellow  = "\033[33m";
            inline const char* Blue    = "\033[34m";
            inline const char* Magenta = "\033[35m";
            inline const char* Cyan    = "\033[36m";
            inline const char* White   = "\033[37m";

            inline const char* BRed    = "\033[91m";
            inline const char* BGreen  = "\033[92m";
            inline const char* BYellow = "\033[93m";
            inline const char* BBlue   = "\033[94m";
            inline const char* BMagenta= "\033[95m";
            inline const char* BCyan   = "\033[96m";
            inline const char* BWhite  = "\033[97m";
        }
    }
}
