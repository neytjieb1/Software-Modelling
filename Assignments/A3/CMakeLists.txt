cmake_minimum_required(VERSION 3.17)
project(A3)

set(CMAKE_CXX_STANDARD 17)

add_executable(A3 Task2/main.cpp Task1/marks.cpp Task1/capture.cpp Task2/Human.cpp Task2/Human.h Task2/Subject.cpp Task2/Subject.h Task2/Observers.cpp Task2/Observers.h Task2/Prisoner.cpp Task2/Prisoner.h Task2/PrisonArea.cpp Task2/PrisonArea.h Task2/BorderGuard.cpp Task2/BorderGuard.h)