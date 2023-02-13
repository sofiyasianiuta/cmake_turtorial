cmake_minimum_required(VERSION 3.13)

# Name your project - will be name of executable
project(CMake_Tutorial-prog
    VERSION 1.0.0
    LANGUAGES CXX)


set(prog_name
    MyExe
    )

set(lib_name
    CMake_Tutorial_lib
    )

add_executable(${prog_name} main.cpp)

target_include_directories(
    ${prog_name}
    PRIVATE 
    ${PROJECT_SOURCE_DIR}/../src
    )

if(TARGET ${lib_name})
   message(STATUS "it found target " ${lib_name})
   message(STATUS "Project source dir is " ${PROJECT_SOURCE_DIR})
else()
   message(SEND_ERROR "Attempt to link to non-existent library: " ${lib_name})
endif()

target_link_libraries(
    ${prog_name}
    #${PROJECT_SOURCE_DIR}/../src/${lib_name}
    ${lib_name}
    )
