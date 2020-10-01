//
// Created by jo on 2020/10/01.
//

#ifndef A4_REMOTECONTROLVEHICLE_H
#define A4_REMOTECONTROLVEHICLE_H
#include <iostream>
using namespace std;

class RemoteControlVehicle {
public:
    RemoteControlVehicle() : onOffState(false) {};
    virtual void on() = 0;
    virtual void off() = 0;
    virtual void forward() = 0;
    virtual void backward() = 0;
    bool getOnOffState() {return onOffState;};

protected:
    void flipOnOff() {onOffState = !onOffState;};

private:
    bool onOffState;

};


#endif //A4_REMOTECONTROLVEHICLE_H
