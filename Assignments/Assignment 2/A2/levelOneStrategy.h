//
// Created by jo on 2020/08/26.
//

#ifndef A_LEVELONESTRATEGY_H
#define A_LEVELONESTRATEGY_H
#include "PandemicStrategy.h"

class levelOneStrategy: public PandemicStrategy {
public:
    levelOneStrategy();
    virtual string takeAction() override;
    PandemicStrategy * changePandemicLevel(bool) override;
};


#endif //A_LEVELONESTRATEGY_H
