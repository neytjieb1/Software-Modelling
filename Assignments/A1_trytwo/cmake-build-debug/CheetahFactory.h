//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_CHEETAHFACTORY_H
#define A1_TRYTWO_CHEETAHFACTORY_H
#include "PredatorFactory.h"
#include "Cheetah.h"

class CheetahFactory: public PredatorFactory {
    Predator* createPredator(string huntingMethod, string speciality);
};


#endif //A1_TRYTWO_CHEETAHFACTORY_H
