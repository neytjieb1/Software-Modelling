cmake_minimum_required(VERSION 3.17)
project(Mediator_Chatroom)

set(CMAKE_CXX_STANDARD 14)

add_executable(Mediator_Chatroom main.cpp Chatroom.cpp Chatter.cpp ModuleChatroom.h Student.h)