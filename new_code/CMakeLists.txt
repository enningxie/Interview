cmake_minimum_required(VERSION 3.8)
project(new_code)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TreePrinter.cpp Rotation.cpp)
add_executable(new_code ${SOURCE_FILES})