//
// Created by jo on 2020/08/26.
//

#ifndef A_LEVELONESTATE_H
#define A_LEVELONESTATE_H
#include "LevelState.h"

class LevelOneState: public LevelState {
public:
    LevelOneState();
    virtual void handle() override;
    virtual LevelState* changePandemicLevel(bool increase) override;
};


#endif //A_LEVELONESTATE_H
