#pragma once
#include "Model.hpp"
#include "Hierarchy.hpp"
#include <string>
#include <filesystem>

namespace UEExporter
{
    class Generator
    {
    public:
        // Generates the primary C++ Offsets.h file
        static bool GenerateHeader(const std::filesystem::path& outputPath,
                                   const GlobalOffsets& globals,
                                   const std::vector<const ClassDef*>& classes,
                                   const ClassHierarchy& hierarchy,
                                   const ExportOptions& options);

        // Generates structured Offsets.json
        static bool GenerateJson(const std::filesystem::path& outputPath,
                                 const GlobalOffsets& globals,
                                 const std::vector<const ClassDef*>& classes,
                                 const ClassHierarchy& hierarchy,
                                 const ExportOptions& options);

        // Generates Cheat Engine Table (.CT)
        static bool GenerateCheatEngineTable(const std::filesystem::path& outputPath,
                                            const GlobalOffsets& globals,
                                            const std::vector<const ClassDef*>& classes);
    };
}
