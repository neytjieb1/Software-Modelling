#include <iostream>

#include "RacesList.h"
#include "RaceIterator.h"

using namespace std;

int main() {
    string names[5] = {"malibu", "florence", "florida", "vermont","venice"};
    TrackComplexity complexity[5] = {Difficult, Easy, Extreme, Average, Easy};
    bool european[5] = {1,0,1,1,0};
    RacesList* raceList = new RacesList;
    for (int i = 0; i < 5; ++i) {
        raceList->addRace(new Race(names[i], complexity[i], european[i]));
    }

    Race* temp = raceList->getHeadRace();
    while (temp!= NULL) {
        cout << temp->getLocation() << endl;
        temp = temp->nextRace();
    }
    cout << endl;

    for (RaceIterator t = raceList->begin(); !(t==raceList->end()) ; ++t) {
        cout << t.currentItem()->getLocation() << endl;
    }
    cout << endl;

    raceList->addRace(new Race("vantance", Easy, 0));
    for (RaceIterator t = raceList->begin(); !(t==raceList->end()) ; ++t) {
        cout << t.currentItem()->getLocation() << endl;
    }



}
