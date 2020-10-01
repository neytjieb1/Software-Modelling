//
// Created by jo on 2020/10/01.
//

#include "RemoteControlPlane.h"

void RemoteControlPlane::on() {
    if (!getOnOffState()) cout << "RC Plane is turned on" << endl;
    else cout << "RC Plane is already on" << endl;
}

void RemoteControlPlane::off() {
    if (getOnOffState()) cout << "RC Plane is turned off" << endl;
    else cout << "RC Plane is already off" << endl;
}

void RemoteControlPlane::forward() {
    if (getOnOffState()) cout << "RC Plane drives forward quickly" << endl;
    else cout << "RC Plane is off. Cannot move forward" << endl;
}

void RemoteControlPlane::backward() {
    if (getOnOffState()) cout << "RC Plane reverses back Planeefully" << endl;
    else cout << "RC Plane is off. Cannot move backward" << endl;
}
