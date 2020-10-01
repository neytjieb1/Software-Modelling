//
// Created by jo on 2020/08/26.
//

#include "LevelOneState.h"
#include "NoLevelState.h"
#include <iostream>
using namespace std;

NoLevelState::NoLevelState() : LevelState("none") {}

void NoLevelState::handle() {
    cout << "The country is at no level: Normal Living" << endl;
}

LevelState *NoLevelState::changePandemicLevel(bool increase) {
    if (increase==1) {
        return new LevelOneState();
    }
    else {
        return new NoLevelState;
    }
}
