# Minimal version of cmake
cmake_minimum_required(VERSION 3.10)

# Name of Project and version
project(AutoHeaderCreater)
set(major 0)
set(minor 5)

include(CTest)
enable_testing()

# set build type
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_VERBOSE_MAKEFILE true)

# set language and compiler
enable_language(CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER clang++)
# Commen compile option
add_compile_options(-m64 -Wall)

# output name format
set(OUTPUT_FL
    "${CMAKE_PROJECT_NAME}-V${major}.${minor}.out"
)

# lib list, compile only onece
add_library(mylib
    STATIC
    source/libs/BulletProof/BulletProof.cpp
    source/libs/DateTime/DateTime.cpp
    source/libs/MultyOSCom/MultyOSCom.cpp
)

# source file list
set(SRC_LIST
    source/main.cpp
    source/Authors.cpp
    source/AllInfo.cpp
)

# output dir
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BUILD_TYPE})

# Build
add_executable(${OUTPUT_FL} ${SRC_LIST})
# linking output anc lib
target_link_libraries(${OUTPUT_FL} mylib)