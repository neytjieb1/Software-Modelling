cmake_minimum_required(VERSION 3.17)
project(Tut1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Tut1 main.cpp cmake-build-debug/Beer.cpp cmake-build-debug/Beer.h cmake-build-debug/Lager.cpp cmake-build-debug/Lager.h cmake-build-debug/BeerProductionStation.cpp cmake-build-debug/BeerProductionStation.h cmake-build-debug/Bottle.cpp cmake-build-debug/Bottle.h)