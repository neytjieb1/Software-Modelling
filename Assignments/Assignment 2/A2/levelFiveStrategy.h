//
// Created by jo on 2020/08/26.
//

#ifndef A_LEVELFIVESTRATEGY_H
#define A_LEVELFIVESTRATEGY_H
#include "PandemicStrategy.h"

class levelFiveStrategy : public PandemicStrategy{
public:
    levelFiveStrategy();
    virtual string takeAction() override;
    PandemicStrategy * changePandemicLevel(bool) override;
};


#endif //A_LEVELFIVESTRATEGY_H
