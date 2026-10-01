#pragma once
#include <string>
#include <vector>
#include <map>
#include <filesystem>
#include <cstdint>

namespace UEExporter
{
    // Information about a single member property in a class/struct
    struct PropertyDef
    {
        std::string type;            // e.g. "class ULevel*", "uint8", "struct FVector"
        std::string name;            // e.g. "PersistentLevel", "bAreConstraintsDirty"
        uint32_t offset = 0;         // e.g. 0x0030
        uint32_t size = 0;           // e.g. 0x0008
        bool isBitfield = false;     // true if bitfield (e.g. uint8 bFlag : 1)
        uint8_t bitIndex = 0;        // e.g. 2
        uint8_t bitCount = 1;        // e.g. 1
        bool isPadding = false;      // true if Pad_XX / BitPad_XX
        std::string flags;           // e.g. "Transient, ZeroConstructor"
        std::string inheritedFrom;   // Empty if direct, or parent class name if inherited
    };

    // Information about a class or struct
    struct ClassDef
    {
        std::string kind;            // "class" or "struct"
        std::string name;            // e.g. "UWorld", "ABP_Player_C", "FVector"
        std::string superName;       // e.g. "UObject", "AActor"
        std::string packageName;     // e.g. "Engine", "CoreUObject", "SurrounDead"
        uint32_t deltaSize = 0;      // Size added by this class
        uint32_t totalSize = 0;      // Full size of class
        uint32_t superSize = 0;      // Size of super class
        bool isStruct = false;       // true if struct, false if class
        std::vector<PropertyDef> properties;

        bool HasNonPaddingProperties() const
        {
            for (const auto& prop : properties)
            {
                if (!prop.isPadding) return true;
            }
            return false;
        }

        size_t NonPaddingCount() const
        {
            size_t count = 0;
            for (const auto& prop : properties)
            {
                if (!prop.isPadding) count++;
            }
            return count;
        }
    };

    // Global engine offsets from Basic.hpp / SDK.hpp
    struct GlobalOffsets
    {
        std::string gameName = "Unknown Unreal Game";
        std::string engineVersion = "UE5";
        std::string dumperVersion = "Dumper-7";
        std::map<std::string, uint64_t> offsets; // Name -> Offset (GWorld, GObjects, GNames, ProcessEvent, etc.)
    };

    // Export options configuration
    struct ExportOptions
    {
        bool includePads = false;          // Include Pad_... fields in output
        bool includeInherited = false;     // Include inherited properties from parent classes
        bool generateBitmasks = true;      // Generate Bit & Mask constants for bitfields
        bool onlyWithProps = true;         // Only include classes that have properties
        std::string preset = "all";        // "all", "core", "game", "custom"
        std::vector<std::string> filterKeywords;
        std::filesystem::path outputPath = "Offsets.h";
        std::filesystem::path jsonPath = "";
        std::filesystem::path cePath = "";
    };

    // Discovered SDK files
    struct SdkFiles
    {
        std::filesystem::path sdkRoot;
        std::filesystem::path basicHpp;
        std::filesystem::path sdkHpp;
        std::vector<std::filesystem::path> classHeaders;
        std::vector<std::filesystem::path> structHeaders;
    };
}
