//
// Created by jo on 2020/10/01.
//

#ifndef A4_REMOTECONTROLROCKET_H
#define A4_REMOTECONTROLROCKET_H
#include <iostream>
using namespace std;
#include "RemoteControlVehicle.h"

class RemoteControlRocket : public RemoteControlVehicle{
public:
    void takeOff() {
        cout << "The RC rocket blasts off its take-off platform" << endl;
    }
    void stopLaunch() {
        cout << "The RC rocket deploys its parachute and floats down to the ground" << endl;
    }
    void increaseThrottle() {
        cout << "The RC rocket increases its throttle and accelerates" << endl;
    }
    void decreaseThrottle() {
        cout << "The RC rocket decreases its throttle and ascends at a slower rate" << endl;
    }
    void on() override {
        if (!getOnOffState()) flipOnOff();
        else cout << "RC Rocket is already on" << endl;
    }
    void off() override {
        if (getOnOffState()) flipOnOff();
        else cout << "RC Plane is already off" << endl;
    }
    void forward() override {} ;
    void backward() override {};
};


#endif //A4_REMOTECONTROLROCKET_H
