cmake_minimum_required(VERSION 3.17)
project(A1)

set(CMAKE_CXX_STANDARD 14)

add_executable(A1 main.cpp Predator.cpp Predator.h Prey.cpp Prey.h Lion.cpp Lion.h Cheetah.cpp Cheetah.h Wolf.cpp Wolf.h WildDog.cpp WildDog.h PredatorFactory.cpp PredatorFactory.h LionFactory.cpp LionFactory.h CheetahFactory.cpp CheetahFactory.h WolfFactory.cpp WolfFactory.h WildDogFactory.cpp WildDogFactory.h)