//
// Created by jo-anne on 2020/10/22.
//

#ifndef LOGISTICS_RACESLIST_H
#define LOGISTICS_RACESLIST_H

#include "Aggregate.h"

class RacesList : public Aggregate {
public:
    RaceIterator* createIterator() override;
    void addRace(Race* );
    Race* removeRace();
    bool isEmpty();
    RaceIterator* begin();
    RaceIterator* end();

private:
    Race* firstRaceOfSeason; //ie. head
};



#endif //LOGISTICS_RACESLIST_H
