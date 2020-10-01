//
// Created by jo on 2020/08/26.
//

#include "NoLevelState.h"
#include "LevelOneState.h"
#include "LevelTwoState.h"
#include <iostream>
using namespace std;

LevelOneState::LevelOneState() : LevelState("level1") {}

void LevelOneState::handle() {
    cout << "The country is at level1: Very few cases" << endl;
}

LevelState *LevelOneState::changePandemicLevel(bool increase) {
    if (increase==1) {
        return new LevelTwoState();
    }
    else {
        return new NoLevelState;
    }
}



