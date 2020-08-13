//
// Created by jo on 2020/08/12.
//

#ifndef A1_WOLFFACTORY_H
#define A1_WOLFFACTORY_H
#include "Predator.h"

class WolfFactory {
    Predator* createPredator(string huntingMethod, string speciality);
};


#endif //A1_WOLFFACTORY_H
