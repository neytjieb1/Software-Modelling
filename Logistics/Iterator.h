//
// Created by jo on 2020/10/17.
//

#ifndef PREMODELLING_ITERATOR_H
#define PREMODELLING_ITERATOR_H

class Race;

class Iterator {
public:
    virtual void first() = 0;
    virtual void operator ++() = 0; //virtual void next() = 0;
    virtual void operator --() = 0;//virtual void prev() = 0;
    virtual bool isLast() = 0;
    virtual Iterator* currentItem()  = 0;
};
class RaceIterator: public Iterator {
public:
    void first() override;
    virtual void operator ++() override;//void next() override;
    virtual void operator --() override;//void prev() override;
    bool isLast() override;
    RaceIterator * currentItem() override;
};


class Aggregate {
public:
    virtual Iterator* createIterator() = 0;
};
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


#endif //PREMODELLING_ITERATOR_H
