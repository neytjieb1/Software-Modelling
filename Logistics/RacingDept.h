//
// Created by jo on 2020/10/17.
//

#ifndef PREMODELLING_RACINGDEPT_H
#define PREMODELLING_RACINGDEPT_H

#include "Car.h"
#include "Race.h"
#include "Driver.h"
#include "Strategy.h"
#include "Colleague.h"

class RacingDept : public Colleague {
public:
    void HireEmployees(int budget) override;
    Strategy* PlanSeasonStrategy(int budget);
    Driver* trainDriver(Driver*);
    void preRaceArrival(Car*, Driver*, Race*, Container*);
    int RacingWeekend();
    void postRacePackUp();

private:
    Car* car;
    Driver* driver;
    Container* container;
    Race* race;


};

#endif //PREMODELLING_RACINGDEPT_H
