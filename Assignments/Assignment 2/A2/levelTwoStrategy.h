//
// Created by jo on 2020/08/26.
//

#ifndef A_LEVELTWOSTRATEGY_H
#define A_LEVELTWOSTRATEGY_H
#include "PandemicStrategy.h"

class levelTwoStrategy: public PandemicStrategy {
public:
    levelTwoStrategy();
    virtual string takeAction() override;
    PandemicStrategy * changePandemicLevel(bool) override;
};


#endif //A_LEVELTWOSTRATEGY_H
