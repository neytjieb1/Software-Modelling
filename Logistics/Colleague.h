//
// Created by jo on 2020/10/17.
//

#ifndef PREMODELLING_SUBJECT_H
#define PREMODELLING_SUBJECT_H

#include "Car.h"
#include "Container.h"

class Mediator;

class Colleague{
public:
    ~Colleague();
    void addObserver(Mediator *obs);
    void notify(Car* car);
    void notify(Container* container);
    void notify(bool isEuropeanRace);
    virtual void HireEmployees(int) = 0;

private:
    Mediator* observer;
};

/*class Logistics;
#include "Container.h"
#include "Logistics.h"

class Colleague {
private:
    Logistics* observeringLogisticsDept;
public:
    virtual void registerForSeason(Logistics* observer) {
        observeringLogisticsDept = observer;
    };
    virtual void notify(auto*) ;
    //virtual void notify(Car*, TyresCompounds ); //pre-Season strategy planned
    //virtual void notify(Car*, Driver*, Container*); //postRacePackup
    virtual void HireEmployees(int budget) = 0;// die groot indiensnemingsproses
    virtual void requestContainerChangeState(bool EuropeanRace) { //type of notify
        if (EuropeanRace) {
            Container* temp = observeringLogisticsDept->getEuropeanContainer();
            //temp.changeState();
        }
        else {
            Container* temp = observeringLogisticsDept->getNextNonEuropeanContainer();
            //temp.changeState();
        }
    };
};*/


#endif //PREMODELLING_SUBJECT_H
