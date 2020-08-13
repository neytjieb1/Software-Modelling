//
// Created by jo on 2020/08/12.
//

#ifndef A1_CHEETAHFACTORY_H
#define A1_CHEETAHFACTORY_H
#include "Predator.h"

class CheetahFactory {
    Predator* createPredator(string huntingMethod, string speciality);
};


#endif //A1_CHEETAHFACTORY_H
