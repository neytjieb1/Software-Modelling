//
// Created by jo on 2020/10/17.
//

#include "RacingDept.h"

void RacingDept::HireEmployees(int budget) {

}

Strategy *RacingDept::PlanSeasonStrategy(int budget) {
    return new Strategy(budget);
}

Driver *RacingDept::trainDriver(Driver *) {
    return nullptr;
}

void RacingDept::preRaceArrival(Car *c, Driver *d, Race *r, Container *con) {
    cout << "arrive at destination" << endl;
    car  = c;
    driver = d;
    race = r;
    container = con;
}

int RacingDept::RacingWeekend() {
    cout << "Let's start"<<endl;
    notify(new Car);
    cout << "strat packing up" << endl;
    notify(new Container);
    cout << "smoke a cigarette" << endl;

    return 5;
}

void RacingDept::postRacePackUp() {
    cout << container->getState();
    container->takeStock();
    container->advanceState();
    cout << container->getState();


}
