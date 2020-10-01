//
// Created by jo on 2020/08/26.
//

#ifndef A_LEVELTWOSTATE_H
#define A_LEVELTWOSTATE_H
#include "LevelState.h"

class LevelTwoState: public LevelState{
public:
    LevelTwoState();
    virtual void handle() override;
    virtual LevelState* changePandemicLevel(bool increase) override;
};


#endif //A_LEVELTWOSTATE_H
