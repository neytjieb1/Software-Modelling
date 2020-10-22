//
// Created by jo on 2020/10/09.
//

#include "Logistics.h"

void Logistics::doYearPlanning() {
    //1. getBudget from "Sponsors"
    //2. Hire for all departments
    for (Colleague* dept: departments) {
        dept->HireEmployees(budget);
    }
    //3. putRacesIntoCalender();
    //4. hire driver
    //5. hire transportManager
}

void Logistics::putRacesIntoCalender() {
        //user interactive
        //read from file and instantiate race objects as well as putting into a linked list.
        //

}

void Logistics::preSeasonPreparation() {
    currentTeamStrategy = callRacingDept()->PlanSeasonStrategy(budget);
    //depts[0] -> planSeasonStrategy(); //of wil ons chain gebruik hierso
    //as genotify word, sal ons binne notify() die bande bestel;
    //print: tyres arrived

    //trainDriver();
    carsInSeasonIDs.push_back(callEngDepartment()->buildCar(budget,currentTeamStrategy->getRiskLevel()));
    //carsInSeason.push(buildCar()); //ons gaan bou die kar
    //testCar();
    //getRaceIterator();
    //packContainers();

}

void Logistics::raceSeason() {
    /* while (iter.hasNext()) {
         * simulateEvent(iter.current); <- this could be a command
         * //we could have raceHandlers(one for European and one for non-European?)
         * iter++;
         */

}

void Logistics::packContainers() {
    //create all container objects with regards to races
    //store them accordingly

}

void Logistics::simulateEvent(Race *r) {
        //ship container to location (cout accordingly) transportHandler -> transport(start, end, nullptr)
        //transportHandler
        //fly car to location
        //preRaceArrival();
        //tally += racingWeekend();
        //get Car back <- this has to happen immediately so that the car can get into good shape
        //fly car to factory
        //postRacePackUp <- kry driver terug en dalk container
        //fix_UpdateCar <- accordingly

}

void Logistics::postSeasonDebrief() {
        //maybe do some analysis?
        //start building a new car
        //let driver take holiday
        //let transportHandler take holiday

}

Container *Logistics::getEuropeanContainer() {
        return europeanContainer;
}

Container *Logistics::getNextNonEuropeanContainer() {
        Container* c = nonEuropeanContainers.back();
        nonEuropeanContainers.pop_back();
        return c;
}

EngDept* Logistics::callEngDepartment() {
        return static_cast<EngDept*>(departments[0]); //subject to change
}

RacingDept* Logistics::callRacingDept() {
        return static_cast<RacingDept*>(departments[1]);
}



