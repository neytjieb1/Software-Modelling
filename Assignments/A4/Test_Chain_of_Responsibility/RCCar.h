//
// Created by jo on 2020/10/03.
//

#ifndef A4_RCCAR_H
#define A4_RCCAR_H
#include "RCVehicle.h"
#include "_Speed.h"

class RCCar : public RCVehicle{
public:
    void on() override;
    void off() override;
    void forward() override;
    void backward() override;
    void handleRequest(_Command* c) {
        Speed* temp = new Speed(nullptr);
        if ( typeid(*c)==typeid(*temp) ) {      //if command is a Speed Command then handle
            if (!getOnOffState()) {
                on();
            }
            forward();
        } else {
            RCVehicle::handleRequest(c);
        }
    } ;
};

void RCCar::on() {
    if (!getOnOffState()) {
        cout << "RC car is turned on" << endl;
        flipOnOff();
    }
    else {
        cout << "RC car is already on" << endl;
    }
}

void RCCar::off() {
    if (getOnOffState()) {
        cout << "RC car is turned off" << endl;
        flipOnOff();
    }
    else {
        cout << "RC car is already off" << endl;
    }
}

void RCCar::forward() {
    if (getOnOffState()) {
        cout << "RC car drives forward quickly" << endl;
    }
    else {
        cout << "RC car is off. Cannot move forward" << endl;
    }
}

void RCCar::backward() {
    if (getOnOffState()) {
        cout << "RC car reverses back carefully" << endl;
    }
    else {
        cout << "RC car is off. Cannot move backward" << endl;
    }
}


#endif //A4_RCCAR_H
