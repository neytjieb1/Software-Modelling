//
// Created by jo on 2020/08/12.
//

#ifndef A1_WOLFFACTORY_H
#define A1_WOLFFACTORY_H
#include "cmake-build-debug/Task1/Predator.h"
#include "PredatorFactory.h"

class WolfFactory: public PredatorFactory {
    Predator* createPredator(string huntingMethod, string speciality);
};


#endif //A1_WOLFFACTORY_H
