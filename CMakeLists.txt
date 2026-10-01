cmake_minimum_required(VERSION 3.20)
project(SDKExporter VERSION 2.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.hpp")

if (WIN32)
    set(RESOURCES resource.rc)
endif()

add_executable(SDKExporter ${SOURCES} ${HEADERS} ${RESOURCES})

if (MSVC)
    target_compile_options(SDKExporter PRIVATE /utf-8 /W3 /O2 /EHsc)
else()
    target_compile_options(SDKExporter PRIVATE -O3 -Wall -Wextra)
endif()
