//
// Created by jo-anne on 2020/10/22.
//

#ifndef LOGISTICS_RACEITERATOR_H
#define LOGISTICS_RACEITERATOR_H

#include "Iterator.h"

class RacesList;
class Race;

class RaceIterator: public Iterator {
    friend class RacesList;
public:
    RaceIterator();
    RaceIterator(const RacesList& source, Race *pRace);

    void first() override;
    virtual Iterator operator ++() override;  //void next() override;
    virtual Iterator operator --() override;  //void prev() override;
    virtual bool operator ==(const RaceIterator&) const;
    bool isLast() override;
    RaceIterator * currentItem() override;

protected:
    Race* head;
    Race* current;
};


#endif //LOGISTICS_RACEITERATOR_H
