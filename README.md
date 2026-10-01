# ⚡ Unreal Engine Dumper-7 SDK Offset Exporter



<p align="center">
  <strong>A high-performance, intelligent, multi-threaded C++20 tool to extract, categorize, and generate clean offsets from any Dumper-7 SDK.</strong>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B20-blue.svg" alt="C++20" />
  <img src="https://img.shields.io/badge/Platform-Windows%20x64-0078D6.svg" alt="Windows" />
  <img src="https://img.shields.io/badge/Compiler-MSVC%20%2F%20Clang-green.svg" alt="Compiler" />
  <img src="https://img.shields.io/badge/Author-Yousef__Zero-red.svg" alt="Author" />
  <img src="https://img.shields.io/badge/License-MIT-brightgreen.svg" alt="License" />
</p>

---

## 📖 Overview

When dumping an Unreal Engine game with **Dumper-7** (or its variants like **Dumper-8** and **Dumper-9**), the resulting `CppSDK` contains thousands of huge C++ header files. Finding specific member offsets or reconstructing a clean `Offsets.h` manually is tedious and error-prone.

**SDK Exporter** solves this completely. Written from scratch in modern **C++20**, it parses an entire SDK (over 2,500 header files) in **under 50 milliseconds** using hardware concurrency across all CPU cores. It automatically extracts:
- **Global Engine Offsets** (`GWorld`, `GObjects`, `GNames`, `ProcessEvent`, `AppendString`, etc.)
- **All Classes & Structs** with their exact member variable offsets, types, and sizes
- **Bitfields & Bitmasks** (calculates exact bit indices and bitwise masks)
- **Inheritance Trees** (resolves ancestors so you can view inherited offsets in derived classes)
- Multiple export formats: **Modern C++ (`Offsets.h`)**, **JSON (`Offsets.json`)**, and **Cheat Engine Table (`Offsets.CT`)**

---

## 👨‍💻 Developer & Copyright

- **Lead Developer**: **Yousef_Zero**
- **Copyright**: &copy; 2026 **Yousef_Zero**. All rights reserved.
- **Icon / Mascot**: Custom Cat Logo (embedded directly into executable)

---

## 🛠️ Technologies & Languages Used

| Technology | Purpose |
| :--- | :--- |
| **C++20** | Core programming language leveraging modern features (`std::string_view`, `std::filesystem`, `std::jthread`, `std::from_chars`, etc.) |
| **Multi-Threading** | Parallel parsing across all CPU threads via work-stealing / atomic queues for maximum speed |
| **Win32 API** | Console UTF-8 initialization and ANSI virtual terminal processing for modern CLI styling |
| **Windows Resource Compiler (`rc.exe`)** | Embedding application icon (`Cat.ico`) and version metadata into `SDKExporter.exe` |
| **Zero External Dependencies** | 100% self-contained standard C++ (no Boost, no Qt, no runtime DLL requirements) |
| **MSVC / CMake** | Fully compatible with Visual Studio 2019/2022/2026 compiler and CMake build systems |

---

## ✨ Key Features

### ⚡ 1. Ultra-Fast Parallel Parsing
Parses **2,460+ header files** containing **10,000+ classes/structs** and **40,000+ member properties** in **~20 to 60 milliseconds** (~0.05 seconds) on modern multi-core processors.

### 🧠 2. Smart Inheritance Resolution (`--include-inherited`)
Dumper-7 does not duplicate inherited properties in subclass headers. If you inspect `ACharacter`, `RootComponent` is in `AActor` and `PlayerState` is in `APawn`. SDK Exporter builds an internal Abstract Syntax Tree (AST) of the class hierarchy, allowing you to flatten parent properties into child classes with proper provenance comments:
```cpp
namespace ACharacter
{
    // --- Inherited from AActor (0x0298) ---
    constexpr uintptr_t RootComponent     = 0x0198; // class USceneComponent*
    
    // --- Inherited from APawn (0x0330) ---
    constexpr uintptr_t PlayerState       = 0x02B0; // class APlayerState*
    
    // --- Direct Members ---
    constexpr uintptr_t Mesh              = 0x0338; // class USkeletalMeshComponent*
    constexpr uintptr_t CharacterMovement = 0x0340; // class UCharacterMovementComponent*
}
```

### 🎯 3. Bitfield & Bitmask Extraction
Extracts Unreal bitfields (`uint8 bFlag : 1`), determines their exact `BitIndex`, calculates the bitmask (`1 << BitIndex`), and generates helper constants:
```cpp
constexpr uintptr_t bAreConstraintsDirty     = 0x013E; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
constexpr uint8_t   bAreConstraintsDirty_Bit = 2;
constexpr uint8_t   bAreConstraintsDirty_Mask = 0x04;
```

### 🔍 4. Live Terminal Inspector
Search for any class, struct, or variable name right from the command line or interactive prompt with instant colored results (type, offset, bitmask, inheritance).

### 📦 5. Multiple Export Presets
- **Preset Core (`Offsets_Core.h`)**: Compact file with essential Unreal classes (`UWorld`, `UGameInstance`, `APlayerController`, `ACharacter`, `USkeletalMeshComponent`, etc.)
- **Preset Game (`Offsets_Game.h`)**: All gameplay and Blueprint classes (`BP_*`)
- **Preset All (`Offsets.h`)**: Full dump of all classes and structs
- **JSON Export (`Offsets.json`)**: Machine-readable JSON for external Python/Rust tools
- **Cheat Engine Table (`Offsets.CT`)**: Ready-to-load XML table for Cheat Engine

---

## 🚀 How to Use

### Method 1: Drag & Drop (Easiest)
Simply drag any `CppSDK` or `SDK` folder from any game and **drop it onto `SDKExporter.exe`** (or `run.bat`). The tool automatically detects everything and launches the interactive dashboard.

### Method 2: Interactive Menu
Double-click `run.bat` or `SDKExporter.exe`:
1. If the SDK is in the same directory, it detects it automatically.
2. If the SDK is located elsewhere, it will prompt you to enter or drag-and-drop the path into the window.
3. Choose an option from the menu:
```text
  SELECT AN ACTION:
  ───────────────────────────────────────────────────────────────────────────
  [1] Quick Export: Essential Offsets  -> Offsets_Core.h (Core Engine Only)
  [2] Complete Export: All SDK Offsets -> Offsets.h (Full Dump - All Classes)
  [3] Game-Specific Blueprint Export   -> Offsets_Game.h (All BP_* Gameplay classes)
  [4] Live Interactive Inspector       -> Search Class, Struct or Property name
  [5] Export to JSON Format            -> Offsets.json
  [6] Export Cheat Engine Table        -> Offsets.CT
  [7] Configure Options & Toggles      (Pads: OFF | Inherited: OFF)
  [0] Exit
  ───────────────────────────────────────────────────────────────────────────
```

### Method 3: Command Line (CLI)
You can automate or script extraction using CLI flags:
```cmd
:: Export Core Engine offsets
SDKExporter.exe "D:\Games\MyGame\CppSDK" --preset core -o Offsets_Core.h

:: Export ALL classes and structs
SDKExporter.exe "D:\Games\MyGame\CppSDK" --preset all -o Offsets.h

:: Export with inherited properties flattened into derived classes
SDKExporter.exe "D:\Games\MyGame\CppSDK" --preset game -o Offsets_Game.h --include-inherited

:: Search for variables or classes instantly
SDKExporter.exe "D:\Games\MyGame\CppSDK" --search Health
SDKExporter.exe "D:\Games\MyGame\CppSDK" --search Weapon

:: Filter specific classes
SDKExporter.exe "D:\Games\MyGame\CppSDK" --filter PlayerCharacter -o PlayerOffsets.h

:: Export to JSON and Cheat Engine Table
SDKExporter.exe "D:\Games\MyGame\CppSDK" --json Offsets.json --ce Offsets.CT
```

---

## 🔨 Building from Source

### Quick Build (Windows / MSVC)
Run the included build script:
```cmd
build.bat
```
This automatically configures MSVC x64, compiles `resource.rc` with `Cat.ico`, and compiles `SDKExporter.exe` with `/O2` optimization and C++20 standard.

### CMake Build
```bash
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

---

## 📄 Sample Generated `Offsets.h`

```cpp
#pragma once
/*
 * =========================================================================
 *  UNREAL ENGINE OFFSET EXPORTER - AUTO GENERATED OFFSETS
 * =========================================================================
 *  Developer       : Yousef_Zero
 *  Game Name       : SurrounDead
 *  Engine Version  : 5.3.2-29314046+++UE5+Release-5.3
 *  Dumper Version  : Dumper-9
 *  Generated On    : 2026-10-01 10:38:08
 *  Total Classes   : 3741
 *  Total Offsets   : 48552
 *  Preset Used     : all
 *  Copyright (C) 2026 Yousef_Zero. All rights reserved.
 * =========================================================================
 */

#include <cstdint>

namespace Offsets
{
    // =========================================================================
    // GLOBAL ENGINE OFFSETS
    // =========================================================================
    namespace Global
    {
        constexpr uintptr_t GWorld                   = 0x0706B048;
        constexpr uintptr_t GObjects                 = 0x06EFE170;
        constexpr uintptr_t GNames                   = 0x06E57DC0;
        constexpr uintptr_t AppendString             = 0x00C886C0;
        constexpr uintptr_t ProcessEvent             = 0x00E42C10;
        constexpr uintptr_t ProcessEventIdx          = 0x0000004D;
    }

    // =========================================================================
    // CLASSES & STRUCTS OFFSETS
    // =========================================================================

    // Class: UWorld
    // Package: Engine | Size: 0x08E8 | Super: UObject (0x0028)
    namespace UWorld
    {
        constexpr uintptr_t PersistentLevel          = 0x0030; // class ULevel* (Size: 0x0008)
        constexpr uintptr_t NetDriver                = 0x0038; // class UNetDriver* (Size: 0x0008)
        constexpr uintptr_t GameState                = 0x0158; // class AGameStateBase* (Size: 0x0008)
        constexpr uintptr_t Levels                   = 0x0170; // TArray<class ULevel*> (Size: 0x0010)
        constexpr uintptr_t OwningGameInstance       = 0x01B8; // class UGameInstance* (Size: 0x0008)

        // Bitfields with precomputed masks
        constexpr uintptr_t bAreConstraintsDirty     = 0x013E; // uint8 : 1 (BitIndex: 2, Mask: 0x04)
        constexpr uint8_t   bAreConstraintsDirty_Bit = 2;
        constexpr uint8_t   bAreConstraintsDirty_Mask = 0x04;
    }

    // Class: ACharacter
    // Package: Engine | Size: 0x0670 | Super: APawn (0x0330)
    namespace ACharacter
    {
        constexpr uintptr_t Mesh                     = 0x0338; // class USkeletalMeshComponent* (Size: 0x0008)
        constexpr uintptr_t CharacterMovement        = 0x0340; // class UCharacterMovementComponent* (Size: 0x0008)
    }
}
```

---

## 📜 License

Created and maintained by **Yousef_Zero**. Released under the **MIT License**.
