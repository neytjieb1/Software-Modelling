//
// Created by jo on 2020/08/26.
//

#include "levelTwoStrategy.h"
#include "levelThreeStrategy.h"
#include "levelFourStrategy.h"

string levelThreeStrategy::takeAction() {
    return "  is getting a bit more dangerous. Stopping all domestic flights. Banning the sale of alcohol and tobacco(shutting down the strip)";
}

PandemicStrategy *levelThreeStrategy::changePandemicLevel(bool increase) {
    if (increase==1) {
        return new levelFourStrategy();
    }
    else {
        return new levelTwoStrategy();
    }
}

levelThreeStrategy::levelThreeStrategy() : PandemicStrategy(){
    //cout << "Constructor: levelThreeStrategy" << endl;
}
