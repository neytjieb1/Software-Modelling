//
// Created by jo on 2020/08/12.
//

#ifndef A1_LIONFACTORY_H
#define A1_LIONFACTORY_H
#include "PredatorFactory.h"

class LionFactory: public PredatorFactory {
    Predator* createPredator(string huntingMethod, string speciality);
};



#endif //A1_LIONFACTORY_H
