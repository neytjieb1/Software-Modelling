cmake_minimum_required(VERSION 3.17)
project(Logistics)

set(CMAKE_CXX_STANDARD 20)

add_executable(Logistics main.cpp Logistics.cpp Logistics.h Race.h enums.h Container.cpp Container.h TransportHandler.cpp TransportHandler.h Colleague.cpp Colleague.h RacingDept.cpp RacingDept.h EngDept.cpp EngDept.h Car.h Iterator.h Driver.cpp Driver.h Strategy.h Mediator.h Car.cpp ContainerState.cpp ContainerState.h ContainerParts.cpp ContainerParts.h RaceIterator.cpp RaceIterator.h Aggregate.h RacesList.cpp RacesList.h TransportMethods.cpp TransportMethods.h Race.cpp Iterator.h Race.cpp Race.h RaceIterator.cpp RaceIterator.h Aggregate.h RacesList.cpp RacesList.h SubStates.cpp SubStates.h)