//
// Created by jo on 2020/10/17.
//

#include "Colleague.h"
#include "Mediator.h"

Colleague::~Colleague() {

}

void Colleague::addObserver(Mediator *obs) {
    observer = obs;
}

void Colleague::notify(Car *car) {
    observer->sendCarToFactory(car);
}

void Colleague::notify(Container *container) {
    observer->flyContainerBack(container);
}

void Colleague::notify(bool isEuropeanRace) {
    observer->requestContainerStateChange(isEuropeanRace);
}
