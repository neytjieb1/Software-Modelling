cmake_minimum_required(VERSION 3.17)
project(IteratorImplement)

set(CMAKE_CXX_STANDARD 20)

add_executable(IteratorImplement main.cpp Iterator.cpp Iterator.h RaceIterator.cpp RaceIterator.h Aggregate.h RacesList.cpp RacesList.h Race.cpp Race.h enums.h)