//
// Created by jo-anne on 2020/10/22.
//

#ifndef LOGISTICS_RACESLIST_H
#define LOGISTICS_RACESLIST_H

#include "Aggregate.h"
#include "RaceIterator.h"

class RacesList : public Aggregate {
    //friend class RaceIterator;
public:
    RaceIterator createIterator() override;
    void addRace(Race* );
    //Race* removeRace();
    Race * getHeadRace() const;
    bool isEmpty();
    RaceIterator begin();
    RaceIterator end();

private:
    Race* headRace; //ie. head
};



#endif //LOGISTICS_RACESLIST_H