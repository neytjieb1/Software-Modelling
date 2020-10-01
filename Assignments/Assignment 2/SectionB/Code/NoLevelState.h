//
// Created by jo on 2020/08/26.
//

#ifndef A_NOLEVELSTATE_H
#define A_NOLEVELSTATE_H
#include "LevelState.h"

class NoLevelState: public LevelState {
public:
    NoLevelState();
    virtual void handle() override;
    virtual LevelState* changePandemicLevel(bool increase) override;

};


#endif //A_NOLEVELSTATE_H
