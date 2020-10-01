//
// Created by jo on 2020/08/26.
//

#ifndef A_PANDEMICSTRATEGY_H
#define A_PANDEMICSTRATEGY_H
#include <string>
#include <iostream>
using namespace std;

class PandemicStrategy {
public:
    PandemicStrategy() ;
    virtual ~PandemicStrategy();
    virtual string takeAction() = 0;
    virtual PandemicStrategy*  changePandemicLevel(bool) = 0;
};


#endif //A_PANDEMICSTRATEGY_H
