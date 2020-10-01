//
// Created by jo on 2020/08/26.
//

#include "levelOneStrategy.h"
#include "levelTwoStrategy.h"
#include "levelThreeStrategy.h"

string levelTwoStrategy::takeAction() {
    return "  spreading faster.  We are forced to close public spaces.";
}

PandemicStrategy *levelTwoStrategy::changePandemicLevel(bool increase) {
    if (increase==1) {
        return new levelThreeStrategy();
    }
    else {
        return new levelOneStrategy();
    }
}

levelTwoStrategy::levelTwoStrategy() : PandemicStrategy(){
    //cout << "Constructor: levelTwoStrategy " << endl;
}
