//
// Created by jo on 2020/08/26.
//

#ifndef A_LEVELSTATE_H
#define A_LEVELSTATE_H
#include <string>
#include <iostream>

using namespace std;

class LevelState {
private:
    string pandemicLevel; //or enum?

public:
    LevelState(string level);
    virtual void handle() = 0;
    virtual LevelState*  changePandemicLevel(bool) = 0;
    string getPandemicState() ;
    virtual ~LevelState();
};


#endif //A_LEVELSTATE_H
