//
// Created by jo on 2020/10/01.
//

#include "RemoteControlCar.h"

void RemoteControlCar::on() {
    if (!getOnOffState()) cout << "RC car is turned on" << endl;
    else cout << "RC car is already on" << endl;
}

void RemoteControlCar::off() {
    if (getOnOffState()) cout << "RC car is turned off" << endl;
    else cout << "RC car is already off" << endl;
}

void RemoteControlCar::forward() {
    if (getOnOffState()) cout << "RC car drives forward quickly" << endl;
    else cout << "RC car is off. Cannot move forward" << endl;
}

void RemoteControlCar::backward() {
    if (getOnOffState()) cout << "RC car reverses back carefully" << endl;
    else cout << "RC car is off. Cannot move backward" << endl;
}
