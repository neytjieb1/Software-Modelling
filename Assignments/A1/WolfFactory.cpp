//
// Created by jo on 2020/08/12.
//

#include "WolfFactory.h"
#include "Wolf.h"

Predator *WolfFactory::createPredator(string huntingMethod, string speciality) {
    return new Wolf(8,2.0, huntingMethod, speciality);
}
