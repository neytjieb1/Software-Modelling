//
// Created by jo on 2020/08/26.
//
#include "LevelOneState.h"
#include "LevelTwoState.h"
#include "LevelThreeState.h"
#include <iostream>
using namespace std;

LevelTwoState::LevelTwoState() : LevelState("level2"){

}

void LevelTwoState::handle() {
    cout << "The country is at level2: Take caution" << endl;

}

LevelState *LevelTwoState::changePandemicLevel(bool increase) {
    if (increase==1) {
        return new LevelThreeState();
    }
    else {
        return new LevelOneState();
    }
}
