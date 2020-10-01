//
// Created by jo on 2020/08/26.
//
#include "LevelTwoState.h"
#include "LevelThreeState.h"
#include "LevelFourState.h"

#include <iostream>
using namespace std;

LevelThreeState::LevelThreeState() : LevelState("level3") {}

void LevelThreeState::handle() {
    cout << "The country is at level3: Moderate amount of cases, make sure you are wearing a mask" << endl;
}

LevelState *LevelThreeState::changePandemicLevel(bool increase) {
    if (increase==1) {
        return new LevelFourState();
    }
    else {
        return new LevelTwoState();
    }
}
