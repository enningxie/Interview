cmake_minimum_required(VERSION 3.8)
project(Utilities)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Array.cpp List.cpp Tree.cpp BinaryTree.cpp StringUtil.cpp)
add_executable(Utilities ${SOURCE_FILES})