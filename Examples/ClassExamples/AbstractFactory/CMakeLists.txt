cmake_minimum_required(VERSION 3.17)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 17)

add_executable(AbstractFactory main.cpp Sweet.h Factory.h Sweet.cpp ShapesAbstractFactory.cpp ShapesAbstractFactory.h Shape.h)