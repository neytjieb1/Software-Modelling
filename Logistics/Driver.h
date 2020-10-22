//
// Created by jo on 2020/10/17.
//

#ifndef PREMODELLING_DRIVER_H
#define PREMODELLING_DRIVER_H

#include <list>
using namespace std;

class Person {};
class Driver : public Person {
private:
    int xp;
    list<int> homeTracks;
public:
    bool isHomeTrack(int trackID);
    int getXP();
    void setXP(int);
};


#endif //PREMODELLING_DRIVER_H
