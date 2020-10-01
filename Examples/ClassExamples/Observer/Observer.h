//
// Created by jo on 2020/09/18.
//

#ifndef OBSERVER_OBSERVER_H
#define OBSERVER_OBSERVER_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Subject.h"

class RacingCar {
public:
    RacingCar(string);
    int fuelReport();
    bool tyreReport(int);
    string carName();
    void go();
private:
    int   tyrePressure[4];
    bool   tyreTread[4];
    double fuelLevel;
    double fueltankCapacity;
    string name;
};


// An observer
class PitCrew {
public:
    PitCrew() : car(1), workFor(0), status(0) {};
    void registerForWork(PitStop*);
    void setCar(int);
    virtual void update() = 0;
    // need to refuel and change tyres
protected:
    PitStop* workFor;
    int car;
    bool status;
};



void PitCrew::registerForWork(PitStop* employer) {
    workFor = employer;
}

void PitCrew::setCar(int c) {
    car = c;
}

// Concrete observer1
class TyreChanger : public PitCrew {
public:
    virtual void update();
};

void TyreChanger::update() {
    cout << "Tyre changer for car " << car << " status is " << status << endl;
    if (status == 0) {
        cout << "Check tyre status" << endl;
        bool tyreStatus = false;
        for (int i = 1; i <= 4; i++)
            tyreStatus = tyreStatus && workFor->tyre(car,i);
        if (tyreStatus) {
            status = 1;
            cout << "Need to change all tyres" << endl;
        }
    } else
        status = 0;
}

// Concrete observer2
class Refueller : public PitCrew {
public:
    virtual void update();
};

void Refueller::update() {
    cout << "Refeuller for car " << car << " status is " << status << endl;
    if (status == 0) {
        cout << "Check fuel status" << endl;
        double fuelStatus = workFor->fuel(car);
        cout << "  fuel status is: " << fuelStatus << endl;
        if (fuelStatus < 20) {
            status = 1;
            cout << "Need to add fuel" << endl;
        }
    } else
        status = 0;
}




RacingCar::RacingCar(string n) : name(n) {
    for (int i = 0; i < 4; i++) {
        tyrePressure[i] = 4;
        tyreTread[i] = true;
    }
    fueltankCapacity = 100;
    fuelLevel = 100;
}

int RacingCar::fuelReport() {
    return fuelLevel / fueltankCapacity * 100;
}

bool RacingCar::tyreReport(int tyre) {
    return tyrePressure[tyre] && tyreTread[tyre];
}

string RacingCar::carName() {
    return name;
}



void RacingCar::go() {
    int input;
    cout << "Type in any value: " << endl;
    cin >> input;
    if ((input % 2) == 0) {
        // Do the tyres
        if ((input % 3) == 0) {
            tyreTread[input%4] = false;
        } else {
            tyrePressure[input%4] = false;
        }
    } else {
        // Do the fuel
        fuelLevel -= 5;
    }

}

//=======================================================================================
//=======================================================================================

bool FerrariStop::tyre(int car, int tyre) { // Need some error checking here
    return cars[car-1]->tyreReport(tyre-1);
}

void PitStop::notify(){
    vector<PitCrew*>::iterator it = pitcrew.begin();
    for (it = pitcrew.begin(); it != pitcrew.end(); ++it){
        (*it)->update();
    }
}

void FerrariStop::race() {
    int input;
    cout << "Type in a number [0 stops]:";
    cin >> input;
    while (input != 0) {
        if ((input % 2) == 0) {
            cars[0]->go();
        } else {
            cars[1]->go();
        }
        printWorkshopStatus(this);
        notify();
        cout << "Type in a number [0 stops]";
        cin >> input;
    }
}

bool PitStop::attach(PitCrew* person) {
    pitcrew.push_back(person);
    person->registerForWork(this);
    return true;
};

double FerrariStop::fuel(int car) { // Need some error checking here
    return cars[car-1]->fuelReport();
}


//=======================================================================================
//=======================================================================================

#endif //OBSERVER_OBSERVER_H
