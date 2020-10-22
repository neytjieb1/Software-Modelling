//
// Created by jo-anne on 2020/10/22.
//

#include "RacesList.h"

RaceIterator RacesList::createIterator() {
    return RaceIterator(*this, headRace);
}


//IS DONE?
void RacesList::addRace(Race *race) {
    if (isEmpty()) {
        headRace = race;
    } else {
        Race *temp = headRace;
        while (temp->nextRace() != nullptr) {
            temp = temp->nextRace();
        }
        temp->setNextRace(race);
        race->setPrevRace(temp);
    }
}

/*Race *RacesList::removeRace() {
    return nullptr;
}*/

bool RacesList::isEmpty() {
    return (headRace== nullptr);
}

RaceIterator RacesList::begin() {
    RaceIterator temp(*this, headRace);
    return temp;
}

RaceIterator RacesList::end() {
    Race* tail = headRace;
    while (tail->nextRace()!= nullptr) {
        tail = tail->nextRace();
    }
    return new RaceIterator(*this, tail);
}

const Race * RacesList::getHeadRace() const {
    return headRace;
}
