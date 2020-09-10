cmake_minimum_required(VERSION 3.17)
project(A2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(A2
        BaseImage.cpp
        BaseImage.h
        ImageAddOns.cpp
        ImageAddOns.h
        ImageElement.h
        LevelFiveState.cpp
        LevelFiveState.h
        levelFiveStrategy.cpp
        levelFiveStrategy.h
        LevelFourState.cpp
        LevelFourState.h
        levelFourStrategy.cpp
        levelFourStrategy.h
        LevelOneState.cpp
        LevelOneState.h
        levelOneStrategy.cpp
        levelOneStrategy.h
        LevelState.cpp
        LevelState.h
        LevelThreeState.cpp
        LevelThreeState.h
        levelThreeStrategy.cpp
        levelThreeStrategy.h
        LevelTwoState.cpp
        LevelTwoState.h
        levelTwoStrategy.cpp
        levelTwoStrategy.h
        main.cpp
        Mask.cpp
        Mask.h
        NoLevelState.cpp
        NoLevelState.h
        Pandemic.cpp
        Pandemic.h
        PandemicStrategy.cpp
        PandemicStrategy.h
        Poster.h
        TemperatureCheck.cpp
        TemperatureCheck.h
        termcolor.h
        UseHandSanitiser.cpp
        UseHandSanitiser.h
        WashHands.cpp
        WashHands.h PosterPrototype.h)
