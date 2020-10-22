cmake_minimum_required(VERSION 3.17)
project(Logistics)

set(CMAKE_CXX_STANDARD 20)

add_executable(Logistics main.cpp Logistics.cpp Logistics.h Race.h enums.h Container.cpp Container.h TransportHandler.cpp TransportHandler.h Colleague.cpp Colleague.h RacingDept.cpp RacingDept.h EngDept.cpp EngDept.h Car.h Iterator.cpp Iterator.h Driver.cpp Driver.h Strategy.h Mediator.cpp Mediator.h)