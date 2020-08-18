//
// Created by jo on 2020/08/12.
//

#include "WildDogFactory.h"

Predator *WildDogFactory::createPredator(string huntingMethod, string speciality) {
    return new WildDog(6,3.0, huntingMethod, speciality);
}
