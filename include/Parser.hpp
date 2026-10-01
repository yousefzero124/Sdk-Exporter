#pragma once
#include "Model.hpp"
#include <functional>
#include <string_view>

namespace UEExporter
{
    class SdkParser
    {
    public:
        // Automatically discovers SDK files in standard folders
        static bool DiscoverSdkFiles(const std::filesystem::path& startPath, SdkFiles& outFiles);

        // Parses SDK.hpp for Game Name, Engine Version, Dumper Version
        static bool ParseSdkHpp(const std::filesystem::path& path, GlobalOffsets& outGlobals);

        // Parses Basic.hpp for Global Engine Offsets (GWorld, GObjects, GNames, ProcessEvent)
        static bool ParseBasicHpp(const std::filesystem::path& path, GlobalOffsets& outGlobals);

        // Fast parsing of a single header file's contents into ClassDefs
        static void ParseHeaderContent(std::string_view content, 
                                       std::vector<ClassDef>& outClasses, 
                                       bool isStructHeader);

        // Multi-threaded parsing of all discovered header files
        static std::vector<ClassDef> ParseAll(const SdkFiles& files, 
                                              std::function<void(size_t current, size_t total)> onProgress = nullptr);

    private:
        static void ParseLineForProperty(std::string_view line, PropertyDef& outProp);
    };
}
