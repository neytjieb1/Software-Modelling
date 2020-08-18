//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_PREDATORFACTORY_H
#define A1_TRYTWO_PREDATORFACTORY_H
#include <string>
#include "Predator.h"
using namespace std;

class PredatorFactory {
public:
    PredatorFactory() {}
    virtual ~PredatorFactory(){}
    virtual Predator* createPredator(string, string) = 0;
};


#endif //A1_TRYTWO_PREDATORFACTORY_H
