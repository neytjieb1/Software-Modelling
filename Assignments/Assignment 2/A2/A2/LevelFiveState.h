//
// Created by jo on 2020/08/26.
//

#ifndef A_LEVELFIVESTATE_H
#define A_LEVELFIVESTATE_H
#include "LevelState.h"

class LevelFiveState: public LevelState {
public:
    LevelFiveState();
    virtual void handle() override;
    virtual LevelState* changePandemicLevel(bool increase) override;
};


#endif //A_LEVELFIVESTATE_H
