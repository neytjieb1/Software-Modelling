//
// Created by jo on 2020/10/01.
//

#include "RemoteControlPlane.h"
#include "Fly.h"

void RemoteControlPlane::on() {
    if (!getOnOffState()) {
        cout << "RC Plane is turned on" << endl;
        flipOnOff();
    }
    else cout << "RC Plane is already on" << endl;
}

void RemoteControlPlane::off() {
    if (getOnOffState()) {
        cout << "RC Plane is turned off" << endl;
        flipOnOff();
    }
    else cout << "RC Plane is already off" << endl;
}

void RemoteControlPlane::forward() {
    if (getOnOffState()) {
        cout << "RC Plane pulls up into a vertical climb" << endl;
    }
    else {
        cout << "RC Plane is off. Cannot move forward" << endl;
    }
}

void RemoteControlPlane::backward() {
    if (getOnOffState()) {
        cout << "RC Plane points its nose down into a dive" << endl;
    }
    else {
        cout << "RC Plane is off. Cannot move backward" << endl;
    }
}

void RemoteControlPlane::handleRequest(Command* c) {
    Fly* temp = new Fly(nullptr);
    if ( typeid(*c)==typeid(*temp) ) {
        if (!getOnOffState()) {
            on();
        }
        forward();
    } else {
        cout << "Plane can't handle request. Passing on" << endl;
        RemoteControlVehicle::handleRequest(c);
    }
};
