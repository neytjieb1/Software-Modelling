//
// Created by jo on 2020/08/26.
//

#ifndef A_LEVELTHREESTRATEGY_H
#define A_LEVELTHREESTRATEGY_H
#include "PandemicStrategy.h"

class levelThreeStrategy : public PandemicStrategy {
public:
    levelThreeStrategy();
    virtual string takeAction() override;
    PandemicStrategy * changePandemicLevel(bool) override;
};


#endif //A_LEVELTHREESTRATEGY_H
