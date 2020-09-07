//
// Created by jo on 2020/08/26.
//

#ifndef A_PANDEMIC_H
#define A_PANDEMIC_H
#include <string>
#include "LevelState.h"
#include "PandemicStrategy.h"

using namespace std;

class LevelState;       //Forward Declaration
class PandemicStrategy;

class Pandemic {
private:
    string name;
    LevelState* levelState;
    PandemicStrategy* levelStrategy;
    void changeLevel(int);     //function to abstract functionality from increase- and decreaseLevel


public:
    Pandemic();
    Pandemic(string name, int level);

    void increaseLevel();
    void decreaseLevel();
    void takeAction();
    void setInitialStrategy_State(int level);

    string getLevel(); // to facilitate testing output
    string getName();  // to facilitate testing output

};

#endif //A_PANDEMIC_H
