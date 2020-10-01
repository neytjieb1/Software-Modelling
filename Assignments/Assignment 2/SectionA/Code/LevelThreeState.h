//
// Created by jo on 2020/08/26.
//

#ifndef A_LEVELTHREESTATE_H
#define A_LEVELTHREESTATE_H
#include "LevelState.h"

class LevelThreeState: public LevelState {
public:
    LevelThreeState();
    virtual void handle() override;
    virtual LevelState* changePandemicLevel(bool increase) override;
};


#endif //A_LEVELTHREESTATE_H
