cmake_minimum_required(VERSION 3.17)
project(A1)

set(CMAKE_CXX_STANDARD 14)

add_executable(A1 cmake-build-debug/Task1/main.cpp cmake-build-debug/Task1/Predator.cpp cmake-build-debug/Task1/Predator.h cmake-build-debug/Task1/Prey.cpp cmake-build-debug/Task1/Prey.h cmake-build-debug/Task1/Lion.cpp cmake-build-debug/Task1/Lion.h cmake-build-debug/Task1/Cheetah.cpp cmake-build-debug/Task1/Cheetah.h cmake-build-debug/Task1/Wolf.cpp cmake-build-debug/Task1/Wolf.h cmake-build-debug/Task1/WildDog.cpp cmake-build-debug/Task1/WildDog.h PredatorFactory.cpp PredatorFactory.h LionFactory.cpp LionFactory.h CheetahFactory.cpp CheetahFactory.h WolfFactory.cpp WolfFactory.h WildDogFactory.cpp WildDogFactory.h)