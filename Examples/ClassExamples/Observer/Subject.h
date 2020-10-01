//
// Created by jo on 2020/09/18.
//

#ifndef OBSERVER_SUBJECT_H
#define OBSERVER_SUBJECT_H
#include <vector>
using namespace std;

class PitCrew;
class RacingCar;

class PitStop { // Subject
public:
    bool attach(PitCrew*);   // register
    bool detach(PitCrew*);   // deregister
    void notify();
    virtual bool tyre(int,int) = 0;
    virtual double fuel(int) = 0;
    virtual bool setCar(RacingCar*) = 0;
    virtual void race() = 0;
private:
    vector<PitCrew*> pitcrew;
};

void printWorkshopStatus(PitStop* );


bool PitStop::detach(PitCrew* person) {
    bool found = false;

    vector<PitCrew*>::iterator it = pitcrew.begin();
    while ((it != pitcrew.end()) && (! found)) {
        if (*it == person) {
            found = true;
            pitcrew.erase(it);
        }
        ++it;
    }
    return found;
}




class FerrariStop : public PitStop { // concrete subject
public:
    bool tyre(int,int);
    double fuel(int);
    bool setCar(RacingCar*);
    void race();
private:
    RacingCar* cars[2];
};


bool FerrariStop::setCar(RacingCar* car) {
    static int carId = 0;
    if (carId < 2) {
        cars[carId] = car;
        carId++;
        return true;
    }
    return false;
}



// Helper function
void printWorkshopStatus(PitStop* p) {
   cout << "Fuel for car 1 = " << p->fuel(1) << endl;
    for (int i = 1; i <= 4; i++) {
        cout << "Tyre for car 1, tyre " << i << " = " << p->tyre(1,i) << endl;
    }

    cout << "Fuel for car 2 = " << p->fuel(2) << endl;
    for (int i = 1; i <= 4; i++) {
        cout << "Tyre for car 2, tyre " << i << " = " << p->tyre(2,i) << endl;
    }
}

#endif //OBSERVER_SUBJECT_H
