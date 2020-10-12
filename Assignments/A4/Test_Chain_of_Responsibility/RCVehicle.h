//
// Created by jo on 2020/10/03.
//

#ifndef A4_RCVEHICLE_H
#define A4_RCVEHICLE_H
#include <iostream>
using namespace std;

#include "_Command.h"

class RCVehicle {
public:
    RCVehicle() : onOffState(false), next(0) {};
    void add(RCVehicle* v) {
        if (next) {
            next->add(v);
        }
        else {
            next = v;
        }
    }
    virtual void on() = 0;
    virtual void off() = 0;
    virtual void forward() = 0;
    virtual void backward() = 0;
    bool getOnOffState() {return onOffState;};

    virtual void handleRequest(_Command* c) {
        if (next) {
            next->handleRequest(c);
        } else {
            cout << "Cannot handle request" << endl;
        }
    };

protected:
    void flipOnOff() {onOffState = !onOffState;};

private:
    bool onOffState;
    RCVehicle* next;

};


#endif //A4_RCVEHICLE_H
