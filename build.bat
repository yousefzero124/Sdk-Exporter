@echo off
set "VCVARS=D:\Visual Studio\VC\Auxiliary\Build\vcvars64.bat"

if not exist "%VCVARS%" (
    if exist "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat" (
        set "VCVARS=C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
    )
)

echo [*] Using MSVC Environment: "%VCVARS%"
call "%VCVARS%" >nul 2>&1

echo [*] Compiling Windows Resources (Cat.ico + metadata)...
rc /fo resource.res resource.rc >nul 2>&1

echo [*] Compiling SDKExporter.exe by Yousef_Zero...
cl /std:c++20 /O2 /EHsc /utf-8 /W3 /DNDEBUG /I include src\main.cpp src\Parser.cpp src\Generator.cpp src\UI.cpp resource.res /Fe:SDKExporter.exe /link /SUBSYSTEM:CONSOLE

if %ERRORLEVEL% equ 0 (
    echo [SUCCESS] SDKExporter.exe successfully built with Cat.ico icon!
    del *.obj >nul 2>&1
    del resource.res >nul 2>&1
) else (
    echo [FAILED] Compilation failed!
)
