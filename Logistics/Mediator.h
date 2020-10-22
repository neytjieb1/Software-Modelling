//
// Created by jo-anne on 2020/10/22.
//

#ifndef LOGISTICS_MEDIATOR_H
#define LOGISTICS_MEDIATOR_H

#include "Car.h"
#include "Container.h"
#include "enums.h"

class Mediator {
protected:
    virtual void sendCarToFactory(Car *) = 0;
    virtual void flyContainerBack(Container*) =0;
    virtual void requestContainerStateChange(bool isEuropeanRace) = 0;

public:
    friend class Colleague;
};


#endif //LOGISTICS_MEDIATOR_H
