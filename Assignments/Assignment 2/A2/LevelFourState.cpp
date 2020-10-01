//
// Created by jo on 2020/08/26.
//
#include "LevelThreeState.h"
#include "LevelFourState.h"
#include "LevelFiveState.h"
#include <iostream>

LevelFourState::LevelFourState() : LevelState("level4") {}

void LevelFourState::handle() {
    cout << "The country is at level4: There are quite a bit of cases, take all necessary precautions." << endl;
}

LevelState *LevelFourState::changePandemicLevel(bool increase) {
    if (increase==1) {
        return new LevelFiveState();
    }
    else {
        return new LevelThreeState;
    }
}
