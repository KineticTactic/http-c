cmake_minimum_required(VERSION 3.16)

project(http-c C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB_RECURSE SOURCES src/*.c)

add_executable(http-c ${SOURCES})

target_include_directories(http-c PRIVATE include)

