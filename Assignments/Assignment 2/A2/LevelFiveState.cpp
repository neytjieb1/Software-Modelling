//
// Created by jo on 2020/08/26.
//
#include "LevelFourState.h"
#include "LevelFiveState.h"
#include <iostream>
using namespace std;

LevelFiveState::LevelFiveState() : LevelState("level5") {}

void LevelFiveState::handle() {
    cout << "The country is at level5: Don't go outside unless you have to"<<endl;
}

LevelState *LevelFiveState::changePandemicLevel(bool increase) {
    if (increase==1) {
        return new LevelFiveState();
    }
    else {
        return new LevelFourState;
    }
}
