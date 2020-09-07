cmake_minimum_required(VERSION 3.17)
project(A)

set(CMAKE_CXX_STANDARD 14)

add_executable(A main.cpp Pandemic.cpp Pandemic.h LevelState.cpp LevelState.h LevelOneState.cpp LevelOneState.h LevelTwoState.cpp LevelTwoState.h LevelThreeState.cpp LevelThreeState.h LevelFourState.cpp LevelFourState.h LevelFiveState.cpp LevelFiveState.h NoLevelState.cpp NoLevelState.h PandemicStrategy.cpp PandemicStrategy.h levelOneStrategy.cpp levelOneStrategy.h levelTwoStrategy.cpp levelTwoStrategy.h levelThreeStrategy.cpp levelThreeStrategy.h levelFourStrategy.cpp levelFourStrategy.h levelFiveStrategy.cpp levelFiveStrategy.h ImageElement.cpp ImageElement.h BaseImage.cpp BaseImage.h ImageAddOns.cpp ImageAddOns.h Mask.cpp Mask.h TemperatureCheck.cpp TemperatureCheck.h UseHandSanitiser.cpp UseHandSanitiser.h WashHands.cpp WashHands.h Poster.cpp Poster.h termcolor.h)