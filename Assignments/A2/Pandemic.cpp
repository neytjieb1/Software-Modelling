//
// Created by jo on 2020/08/26.
//

#include "Pandemic.h"

#include "NoLevelState.h"
#include "LevelOneState.h"
#include "LevelTwoState.h"
#include "LevelThreeState.h"
#include "LevelFourState.h"
#include "LevelFiveState.h"

#include "PandemicStrategy.h"
#include "levelOneStrategy.h"
#include "levelTwoStrategy.h"
#include "levelThreeStrategy.h"
#include "levelFourStrategy.h"
#include "levelFiveStrategy.h"

#include <iostream>

using namespace std;

Pandemic::Pandemic() {
    cout << "Pandemic Constructor" << endl;
}

Pandemic::Pandemic(string name, int level) {
    this->name = name;
    setInitialStrategy_State(level);
}

void Pandemic::increaseLevel() {
    if (this->levelState->getPandemicState() == "level5") {
        cout << "If we need state 6, we're really in a National State of Disaster. Let's stay at 5" << endl;
    } else {
        changeLevel(1);
    }
}


void Pandemic::decreaseLevel() {
    if (this->levelState->getPandemicState() == "none") {
        cout << "If we need a level below 0, South Africa can take its place on the world stage. Let's stay at 0" << endl;
    } else {
        changeLevel(0);
    }
}

void Pandemic::changeLevel(int i) {
    LevelState *tempState = this->levelState->changePandemicLevel(i);
    delete this->levelState;
    this->levelState = tempState;
    this->levelState->handle();

    PandemicStrategy* tempStrategy = nullptr;
    if (this->levelStrategy!= nullptr) {
        tempStrategy = this->levelStrategy->changePandemicLevel(i);
        delete this->levelStrategy;
        this->levelStrategy = tempStrategy;
    } else {
        this->levelStrategy = new levelOneStrategy();
    }

}


string Pandemic::getLevel() {
    return this->levelState->getPandemicState();
}

string Pandemic::getName() {
    return this->name;
}

void Pandemic::takeAction() {
    if (this->levelState->getPandemicState()=="none") {
        cout << "We can't take action; we're not on an alert level!" << endl;
    }
    else {
        cout << this->getName() << this->levelStrategy->takeAction() << endl;
    }
}

void Pandemic::setInitialStrategy_State(int level) {
    switch (level) {
        case 0:
            this->levelState = new NoLevelState();
            this->levelStrategy = nullptr;
            break;
        case 1:
            this->levelState = new LevelOneState();
            this->levelStrategy = new levelOneStrategy();
            break;
        case 2:
            this->levelState = new LevelTwoState();
            this->levelStrategy = new levelTwoStrategy();
            break;
        case 3:
            this->levelState = new LevelThreeState();
            this->levelStrategy = new levelThreeStrategy();
            break;
        case 4:
            this->levelState = new LevelFourState();
            this->levelStrategy = new levelFourStrategy();
            break;
        case 5:
            this->levelState = new LevelFiveState();
            this->levelStrategy = new levelFiveStrategy();
            break;
        default:
            cout << "You got it all wrong if you want the country to be at level " << level << endl;
    }
}
