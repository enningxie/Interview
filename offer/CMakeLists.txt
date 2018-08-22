cmake_minimum_required(VERSION 3.8)
project(offer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp 03_01/FindDuplication.cpp 03_02/FindDuplicationNoEdit.cpp)
add_executable(offer ${SOURCE_FILES})