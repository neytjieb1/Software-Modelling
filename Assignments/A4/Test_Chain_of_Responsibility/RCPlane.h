//
// Created by jo on 2020/10/03.
//

#ifndef A4_RCPLANE_H
#define A4_RCPLANE_H

#include "RCVehicle.h"
#include "_Fly.h"

class RCPlane : public RCVehicle {
public:
    void on() override;
    void off() override;
    void forward() override;
    void backward() override;
    void handleRequest(_Command* c) {
        Fly* temp = new Fly(nullptr);
        if ( typeid(*c)==typeid(*temp) ) {
            if (!getOnOffState()) {
                on();
            }
            forward();
        } else {
            RCVehicle::handleRequest(c);
        }
    };
};

void RCPlane::on() {
    if (!getOnOffState()) {
        cout << "RC Plane is turned on" << endl;
        flipOnOff();
    }
    else {
        cout << "RC Plane is already on" << endl;
    }
}

void RCPlane::off() {
    if (getOnOffState()) {
        cout << "RC Plane is turned off" << endl;
        flipOnOff();
    }
    else {
        cout << "RC Plane is already off" << endl;
    }
}

void RCPlane::forward() {
    if (getOnOffState()) {
        cout << "RC Plane pulls up into a vertical climb" << endl;
    }
    else {
        cout << "RC Plane is off. Cannot move forward" << endl;
    }
}

void RCPlane::backward() {
    if (getOnOffState()) {
        cout << "RC Plane points its nose down into a dive" << endl;
    }
    else {
        cout << "RC Plane is off. Cannot move backward" << endl;
    }
}

#endif //A4_RCPLANE_H
