//
// Created by jo on 2020/08/26.
//

#include "levelFiveStrategy.h"
#include "levelFourStrategy.h"

string levelFiveStrategy::takeAction() {
    return " is extremely dangerous. Deploying the army. Shutting down the economy";
}

PandemicStrategy *levelFiveStrategy::changePandemicLevel(bool increase) {
    if (increase==1) {
        return new levelFiveStrategy();
    }
    else {
        return new levelFourStrategy();
    }
}

levelFiveStrategy::levelFiveStrategy() : PandemicStrategy(){
    //cout << "Constructor: levelFiveStrategy" << endl;
}
