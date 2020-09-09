//
// Created by jo on 2020/08/18.
//

#ifndef A1_TRYTWO_PREYMEMENTO_H
#define A1_TRYTWO_PREYMEMENTO_H
#include "PreyState.h"

class PreyMemento {
private:
    PreyState* state;
    PreyState* getState();
    void setState(PreyState* state);
    PreyMemento();
public:
    friend class Prey;
};


#endif //A1_TRYTWO_PREYMEMENTO_H
