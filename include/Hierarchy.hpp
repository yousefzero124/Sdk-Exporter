#pragma once
#include "Model.hpp"
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <vector>
#include <algorithm>

namespace UEExporter
{
    class ClassHierarchy
    {
    public:
        void Build(const std::vector<ClassDef>& classes)
        {
            m_classMap.clear();
            m_classes.clear();
            m_classes.reserve(classes.size());

            std::unordered_map<std::string, size_t> seen;
            for (const auto& c : classes)
            {
                auto it = seen.find(c.name);
                if (it == seen.end())
                {
                    seen[c.name] = m_classes.size();
                    m_classes.push_back(c);
                }
                else
                {
                    // If the existing one had no properties, but this one does, replace it
                    if (m_classes[it->second].properties.empty() && !c.properties.empty())
                    {
                        m_classes[it->second] = c;
                    }
                }
            }

            // Rebuild map with unique classes
            for (size_t i = 0; i < m_classes.size(); ++i)
            {
                m_classMap[m_classes[i].name] = &m_classes[i];
            }
        }


        const ClassDef* FindClass(const std::string& name) const
        {
            auto it = m_classMap.find(name);
            return (it != m_classMap.end()) ? it->second : nullptr;
        }

        // Returns inheritance chain from superclass to root (e.g. APawn -> AActor -> UObject)
        std::vector<const ClassDef*> GetAncestors(const std::string& className) const
        {
            std::vector<const ClassDef*> ancestors;
            std::unordered_set<std::string> visited;

            const ClassDef* current = FindClass(className);
            while (current && !current->superName.empty() && visited.find(current->superName) == visited.end())
            {
                visited.insert(current->superName);
                const ClassDef* parent = FindClass(current->superName);
                if (parent)
                {
                    ancestors.push_back(parent);
                    current = parent;
                }
                else
                {
                    break;
                }
            }
            return ancestors;
        }

        // Flattens properties including inherited ones
        std::vector<PropertyDef> GetFlattenedProperties(const ClassDef& cls, bool includePads) const
        {
            std::vector<PropertyDef> result;

            // First add inherited properties (from base to direct parent)
            auto ancestors = GetAncestors(cls.name);
            for (auto it = ancestors.rbegin(); it != ancestors.rend(); ++it)
            {
                const ClassDef* parent = *it;
                for (const auto& prop : parent->properties)
                {
                    if (!includePads && prop.isPadding) continue;
                    PropertyDef copy = prop;
                    copy.inheritedFrom = parent->name;
                    result.push_back(std::move(copy));
                }
            }

            // Then add direct properties
            for (const auto& prop : cls.properties)
            {
                if (!includePads && prop.isPadding) continue;
                result.push_back(prop);
            }

            return result;
        }

        // Filter classes according to preset
        std::vector<const ClassDef*> GetFilteredClasses(const ExportOptions& options) const
        {
            std::vector<const ClassDef*> filtered;

            static const std::unordered_set<std::string> coreClassNames = {
                // World & Engine
                "UWorld", "UEngine", "UGameInstance", "ULocalPlayer", "UPlayer", "ULevel", "AGameStateBase", "AGameModeBase",
                // Controllers & Pawns
                "APlayerController", "AController", "APawn", "ACharacter", "APlayerState",
                // Components
                "UActorComponent", "USceneComponent", "UPrimitiveComponent", "USkeletalMeshComponent", "USkinnedMeshComponent", 
                "UStaticMeshComponent", "UCharacterMovementComponent", "UMovementComponent", "UCameraComponent",
                // Camera & HUD
                "APlayerCameraManager", "AHUD", "UCanvas", "UUserWidget",
                // Base
                "AActor", "UObject", "UClass", "UField", "UStruct",
                // Essential Structs
                "FVector", "FRotator", "FTransform", "FQuat", "FVector2D", "FHitResult", "FMinimalViewInfo", "FCameraCacheEntry"
            };

            for (const auto& cls : m_classes)
            {
                // Check if class has properties
                if (options.onlyWithProps && !options.includePads && !cls.HasNonPaddingProperties())
                {
                    continue;
                }
                if (options.onlyWithProps && options.includePads && cls.properties.empty())
                {
                    continue;
                }

                if (options.preset == "core")
                {
                    if (coreClassNames.find(cls.name) != coreClassNames.end())
                    {
                        filtered.push_back(&cls);
                    }
                }
                else if (options.preset == "game")
                {
                    // Blueprint classes or game gameplay
                    if (cls.name.rfind("BP_", 0) == 0 || cls.name.rfind("ABP_", 0) == 0 ||
                        cls.name.rfind("BPI_", 0) == 0 || cls.name.rfind("BPC_", 0) == 0 ||
                        coreClassNames.find(cls.name) != coreClassNames.end())
                    {
                        filtered.push_back(&cls);
                    }
                }
                else if (options.preset == "custom")
                {
                    bool match = false;
                    for (const auto& kw : options.filterKeywords)
                    {
                        std::string kwLower = kw;
                        std::transform(kwLower.begin(), kwLower.end(), kwLower.begin(), ::tolower);

                        std::string nameLower = cls.name;
                        std::transform(nameLower.begin(), nameLower.end(), nameLower.begin(), ::tolower);

                        if (nameLower.find(kwLower) != std::string::npos)
                        {
                            match = true;
                            break;
                        }
                    }
                    if (match) filtered.push_back(&cls);
                }
                else // "all"
                {
                    filtered.push_back(&cls);
                }
            }

            // Sort alphabetically by name
            std::sort(filtered.begin(), filtered.end(), [](const ClassDef* a, const ClassDef* b) {
                return a->name < b->name;
            });

            return filtered;
        }

        // Live search across all classes and properties
        struct SearchResult
        {
            const ClassDef* classDef = nullptr;
            std::vector<PropertyDef> matchedProperties;
            bool matchedClassName = false;
        };

        std::vector<SearchResult> Search(const std::string& query, bool includePads = false) const
        {
            std::string qLower = query;
            std::transform(qLower.begin(), qLower.end(), qLower.begin(), ::tolower);

            std::vector<SearchResult> results;

            for (const auto& cls : m_classes)
            {
                std::string clsLower = cls.name;
                std::transform(clsLower.begin(), clsLower.end(), clsLower.begin(), ::tolower);

                bool classMatch = (clsLower.find(qLower) != std::string::npos);
                std::vector<PropertyDef> matchedProps;

                for (const auto& prop : cls.properties)
                {
                    if (!includePads && prop.isPadding) continue;

                    std::string propLower = prop.name;
                    std::transform(propLower.begin(), propLower.end(), propLower.begin(), ::tolower);

                    std::string typeLower = prop.type;
                    std::transform(typeLower.begin(), typeLower.end(), typeLower.begin(), ::tolower);

                    if (propLower.find(qLower) != std::string::npos || typeLower.find(qLower) != std::string::npos)
                    {
                        matchedProps.push_back(prop);
                    }
                }

                if (classMatch || !matchedProps.empty())
                {
                    results.push_back({ &cls, std::move(matchedProps), classMatch });
                }
            }

            return results;
        }

        const std::vector<ClassDef>& GetAllClasses() const { return m_classes; }

    private:
        std::vector<ClassDef> m_classes;
        std::unordered_map<std::string, const ClassDef*> m_classMap;
    };
}
