//
// Created by jo on 2020/10/01.
//

#include "RemoteControlCar.h"
#include "Speed.h"

void RemoteControlCar::on() {
    if (!getOnOffState()) {
        cout << "RC car is turned on" << endl;
        flipOnOff();
    }
    else {
        cout << "RC car is already on" << endl;
    }
}

void RemoteControlCar::off() {
    if (getOnOffState()) {
        cout << "RC car is turned off" << endl;
        flipOnOff();
    }
    else {
        cout << "RC car is already off" << endl;
    }
}

void RemoteControlCar::forward() {
    if (getOnOffState()) {
        cout << "RC car drives forward quickly" << endl;
    }
    else {
        cout << "RC car is off. Cannot move forward" << endl;
    }
}

void RemoteControlCar::backward() {
    if (getOnOffState()) {
        cout << "RC car reverses back carefully" << endl;
    }
    else {
        cout << "RC car is off. Cannot move backward" << endl;
    }
}

void RemoteControlCar::handleRequest(Command* c) {
    Speed* temp = new Speed(nullptr);
    if ( typeid(*c)==typeid(*temp) ) {      //if command is a Speed Command then handle
        if (!getOnOffState()) {
            on();
        }
        forward();
    } else {
        cout << "Car can't handle request. Passing on" << endl;
        RemoteControlVehicle::handleRequest(c);
    }
}
