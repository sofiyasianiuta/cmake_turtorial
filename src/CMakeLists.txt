cmake_minimum_required(VERSION 3.13)

# Name your project - will be name of executable
project(CMake_Tutorial-lib
    VERSION 1.0.0
    LANGUAGES CXX)

set(lib_name
    CMake_Tutorial_lib
    )

# Can make groups of files that have different names, way to structure files
set(src_functions
    functionmod.cpp
    )
set(src_parameters
    WPmod.cpp
    )
set(lib_headers
    functionmod.h
    )


# Make these a library for use when building the program
add_library(
    ${lib_name}
    #${lib_headers}
    ${src_functions}
    ${src_parameters}
    )
