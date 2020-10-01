//
// Created by jo on 2020/08/26.
//

#ifndef A_LEVELFOURSTATE_H
#define A_LEVELFOURSTATE_H
#include "LevelState.h"

class LevelFourState: public LevelState {
public:
    LevelFourState();
    virtual void handle() override;
    virtual LevelState* changePandemicLevel(bool increase) override;
};


#endif //A_LEVELFOURSTATE_H
