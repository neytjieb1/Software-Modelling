cmake_minimum_required(VERSION 3.17)
project(Composite_Decorator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Composite_Decorator main.cpp SomeClass.h Component.h SalesOrder.h SalesTicket.h GraphicMemory.h Pizza.cpp Pizza.h)