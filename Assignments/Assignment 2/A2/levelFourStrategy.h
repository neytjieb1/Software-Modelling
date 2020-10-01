//
// Created by jo on 2020/08/26.
//

#ifndef A_LEVELFOURSTRATEGY_H
#define A_LEVELFOURSTRATEGY_H
#include "PandemicStrategy.h"

class levelFourStrategy : public PandemicStrategy {
public:
    levelFourStrategy();
    virtual string takeAction() override;
    PandemicStrategy * changePandemicLevel(bool) override;
};


#endif //A_LEVELFOURSTRATEGY_H
