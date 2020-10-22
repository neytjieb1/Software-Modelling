#include <iostream>

#include "Logistics.h"

int main() {

    RacingDept* racingDept = new RacingDept();
    EngDept* engDept = new EngDept();
    Logistics* a = new Logistics;

    a->registerNotifier(racingDept);
    a->registerNotifier(engDept);

    a->doYearPlanning();
    a->preSeasonPreparation();
    a->raceSeason();
    a->postSeasonDebrief();

    delete a;
    delete engDept;
    delete racingDept;

    //choose team
    //Colleague* racingDept = new RacingDept();
    //EngDept* engDept = new EngDept();
    //Logistics* log = new Logistics();
    /*engDept->registerForSeason(log);
    racingDept->registerForSeason(log);
    log->doYearPlanning();
    log->preSeasonPreparation();
    log->raceSeason();
    log->postSeasonDebrief();*/
    return 0;
}
