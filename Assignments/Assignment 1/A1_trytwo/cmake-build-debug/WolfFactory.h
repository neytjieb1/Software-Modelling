//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_WOLFFACTORY_H
#define A1_TRYTWO_WOLFFACTORY_H
#include "PredatorFactory.h"
#include "Wolf.h"

class WolfFactory: public PredatorFactory {
public:
    WolfFactory();
    ~WolfFactory();
    Predator* createPredator(string huntingMethod, string speciality);
};



#endif //A1_TRYTWO_WOLFFACTORY_H
