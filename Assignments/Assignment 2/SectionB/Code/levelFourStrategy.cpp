//
// Created by jo on 2020/08/26.
//

#include "levelThreeStrategy.h"
#include "levelFourStrategy.h"
#include "levelFiveStrategy.h"

string levelFourStrategy::takeAction() {
    return " is dangerous.  Enforcing a strict lockdown.";
}

PandemicStrategy *levelFourStrategy::changePandemicLevel(bool increase) {
    if (increase==1) {
        return new levelFiveStrategy();
    }
    else {
        return new levelThreeStrategy();
    }
}

levelFourStrategy::levelFourStrategy() {
    //cout << "Constructor: levelFourStrategy" << endl;
}
