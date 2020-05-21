# Minimal version of cmake
cmake_minimum_required(VERSION 3.10)

# Name of Project
project(CodeHeaderCreader)
set(major 0)
set(minor 5)

include(CTest)
enable_testing()

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_VERBOSE_MAKEFILE true)

enable_language(CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER clang++)

# Source file list and output filename
set(OUTPUT_FL
    "${CMAKE_PROJECT_NAME}-${major}.${minor}.out"
)

add_library(mylib
    STATIC
    source/libs/BulletProof/BulletProof.cpp
    source/libs/DateTime/DateTime.cpp
    source/libs/MultyOSCom/MultyOSCom.cpp
)

set(SRC_LIST
    source/main.cpp
)

# Commen compile option
add_compile_options(-m64 -Wall)

# output dir
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BUILD_TYPE})

# Build
add_executable(${OUTPUT_FL} ${SRC_LIST})
target_link_libraries(${OUTPUT_FL} mylib)