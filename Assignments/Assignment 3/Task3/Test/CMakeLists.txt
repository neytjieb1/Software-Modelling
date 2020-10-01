cmake_minimum_required(VERSION 3.17)
project(Test)

set(CMAKE_CXX_STANDARD 14)

add_executable(Test main.cpp ClassDefinitions.cpp LinearStructure.cpp DynamicArray.cpp DynamicArray.h)