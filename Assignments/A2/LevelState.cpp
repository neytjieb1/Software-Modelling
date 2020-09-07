//
// Created by jo on 2020/08/26.
//

#include "LevelState.h"

LevelState::LevelState(string level) {
     this->pandemicLevel = level;
}

string LevelState::getPandemicState() {
    return pandemicLevel;
}

LevelState::~LevelState() {
}
