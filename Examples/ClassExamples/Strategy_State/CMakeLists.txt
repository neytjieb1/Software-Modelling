cmake_minimum_required(VERSION 3.17)
project(Strategy_State)

set(CMAKE_CXX_STANDARD 17)

add_executable(Strategy_State main.cpp State/State.cpp State/State.h State/Context.cpp State/Context.h)