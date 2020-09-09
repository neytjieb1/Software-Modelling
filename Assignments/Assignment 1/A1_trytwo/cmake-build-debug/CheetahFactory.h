//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_CHEETAHFACTORY_H
#define A1_TRYTWO_CHEETAHFACTORY_H
#include "PredatorFactory.h"
#include "Cheetah.h"

class CheetahFactory: public PredatorFactory {
public:
    CheetahFactory();
    Predator* createPredator(string huntingMethod, string speciality);
    ~CheetahFactory();


};


#endif //A1_TRYTWO_CHEETAHFACTORY_H
