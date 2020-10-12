//
// Created by jo on 2020/10/01.
//

#ifndef A4_REMOTECONTROLVEHICLE_H
#define A4_REMOTECONTROLVEHICLE_H
#include <iostream>
using namespace std;

#include "Command.h"

class RemoteControlVehicle {
public:
    RemoteControlVehicle() : onOffState(false), next(0) {};
    void add(RemoteControlVehicle* v) {
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
    virtual void handleRequest(Command* c) {
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
    RemoteControlVehicle* next;

};


#endif //A4_REMOTECONTROLVEHICLE_H
