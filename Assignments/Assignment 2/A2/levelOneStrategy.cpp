//
// Created by jo on 2020/08/26.
//

#include "levelOneStrategy.h"
#include "levelTwoStrategy.h"
#include <iostream>
using namespace std;

string levelOneStrategy::takeAction() {
    return " has started to spread. We are making all citizens wear masks and social distancing. Stopping all international flights";
}

PandemicStrategy *levelOneStrategy::changePandemicLevel(bool increase) {
    if (increase==1) {
        return new levelTwoStrategy();
    }
    else {
        return nullptr;
    }
}

levelOneStrategy::levelOneStrategy() : PandemicStrategy() {
    //cout << "Constructor: levelOneStrategy" << endl;
}
