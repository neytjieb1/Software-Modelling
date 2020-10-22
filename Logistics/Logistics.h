//
// Created by jo on 2020/10/09.
//

#ifndef PREMODELLING_LOGISTICSDEPT_H
#define PREMODELLING_LOGISTICSDEPT_H

#include <map>
#include <vector>

#include "Strategy.h"
#include "Driver.h"
#include "RaceIterator.h"
#include "RacesList.h"

#include "RacingDept.h"
#include "EngDept.h"
#include "TransportMethods.h"
#include "Mediator.h"

class Logistics : public Mediator {
public:
    Logistics();
    void registerNotifier(Colleague*);
    void doYearPlanning();
    void preSeasonPreparation();
    void raceSeason();
    void postSeasonDebrief();

protected:
    void sendCarToFactory(Car*) override;
    void containerHasBeenPacked(Container *) override;
    void requestContainerStateChange(bool isEuropeanRace) override;
    Container* getEuropeanContainer();
    Container* getNextNonEuropean();
    void packContainers();
    void SimulateEvent(Race*);
    void putRacesIntoCalender();

private:
    RacingDept* callRacingDept();
    EngDept* callEngDept();

    map<char, Colleague*> departments;
    Driver* driver;
    TransportHandler* transportManager;
    //Won't be holding a handle to car as will always be passing directly from one place to another
    RaceIterator* raceIterator;
    RacesList* racingCalendar;
    vector<int> carsInSeasonIDs;
    vector<Container*> nonEuropeanContainers; //lots of containers for non-European
    Container* europeanContainer;   //1 container for European
    Strategy* currentTeamStrategy;

    int seasonPointTally;
    int budget;

};





#endif //PREMODELLING_LOGISTICSDEPT_H
