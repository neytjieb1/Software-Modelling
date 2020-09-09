//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_LIONFACTORY_H
#define A1_TRYTWO_LIONFACTORY_H
#include "PredatorFactory.h"
#include "Lion.h"

class LionFactory: public PredatorFactory {
public:
    LionFactory();
    ~LionFactory();
    Predator* createPredator(string huntingMethod, string speciality);
};


#endif //A1_TRYTWO_LIONFACTORY_H
