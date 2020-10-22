//
// Created by jo-anne on 2020/10/22.
//

#ifndef LOGISTICS_RACEITERATOR_H
#define LOGISTICS_RACEITERATOR_H

#include "Iterator.h"

class RaceIterator: public Iterator {
public:
    void first() override;
    virtual void operator ++() override;//void next() override;
    virtual void operator --() override;//void prev() override;
    bool isLast() override;
    RaceIterator * currentItem() override;
};


#endif //LOGISTICS_RACEITERATOR_H
