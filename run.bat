@echo off
title SDK Exporter
if not exist "SDKExporter.exe" (
    echo [*] SDKExporter.exe not found. Building first...
    call build.bat
    if not exist "SDKExporter.exe" (
        echo [ERROR] Build failed.
        pause
        exit /b 1
    )
)

SDKExporter.exe %*
pause
