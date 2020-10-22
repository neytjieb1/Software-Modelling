//
// Created by jo on 2020/10/09.
//

#ifndef PREMODELLING_LOGISTICSDEPT_H
#define PREMODELLING_LOGISTICSDEPT_H

#include <map>
#include "Iterator.h"
#include "Race.h"
#include "Strategy.h"

class Logistics : public Mediator {
public:
    void registerNotifier(Colleague*);
    void doYearPlanning();
    void preSeasonPreparation();
    void raceSeason();
    void postSeasonDebrief();

protected:
    void sendCarToFactory(Car*) override;
    void flyContainerBack(Container *) override;
    void requestContainerStateChange(bool isEuropeanRace) override;
    Container* getEuropeanContainer();
    Container* getNextNonEuropean();
    void packContainers();
    void SimulateEvent(Race*);
    void putRacesIntoCalender();

private:
    map<char, Colleague*> departments;
    RacingDept* callRacingDept;
    EngDept* callEngDept;
    Driver* driver;
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
/*
class Logistics {
private:
    vector<Colleague*> departments; //ie racingDept and engDept
    Driver* driver;
    //Won't be holding a handle to car as will always be passing directly from one place to another
    RaceIterator* raceIterator;
    RacesList* racingCalendar;
    vector<int> carsInSeasonIDs;
    vector<Container*> nonEuropeanContainers; //lots of containers for non-European
    Container* europeanContainer;   //1 container for European
    Strategy* currentTeamStrategy;

    int seasonPointTally;
    int budget;

public:
    Logistics() {
        driver= nullptr;
        raceIterator = nullptr;
        racingCalendar=nullptr;
        currentTeamStrategy = nullptr;
        seasonPointTally = 0;
        budget=0;
    }


    //void update(); //wil ons iets hier he?

    void doYearPlanning();

    void putRacesIntoCalender() ;
    void preSeasonPreparation();
    void packContainers() ;
    void raceSeason() ;
    void simulateEvent(Race* r) ;
    void postSeasonDebrief();

    Container* getEuropeanContainer() ;
    Container* getNextNonEuropeanContainer() ;
    //must be changed a lot here
    EngDept* callEngDepartment() ;
    RacingDept* callRacingDept() ;

};

*/





#endif //PREMODELLING_LOGISTICSDEPT_H
