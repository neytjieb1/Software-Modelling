//
// Created by jo on 2020/08/12.
//

#ifndef A1_PREDATORFACTORY_H
#define A1_PREDATORFACTORY_H
#include <string>
#include "cmake-build-debug/Task1/Predator.h"
using namespace std;

class PredatorFactory {
public:
    PredatorFactory() {}
    virtual ~PredatorFactory(){}
    virtual Predator* createPredator(string, string) = 0;
};


#endif //A1_PREDATORFACTORY_H
