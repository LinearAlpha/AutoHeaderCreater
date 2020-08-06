cmake_minimum_required (VERSION 3.10)
project(AutoHeaderCreater
    VERSION 0.5
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 11)

if (NOT CMAKE_BUILD_TYPE)
 set(CMAKE_BUILD_TYPE "Release")
else()
 set(CMAKE_BUILD_TYPE "Debug")
endif (NOT CMAKE_BUILD_TYPE)

if (MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -O2)
endif()

# Include sub-projects.
add_subdirectory(lib)
add_subdirectory(AutoHeaderCreater)