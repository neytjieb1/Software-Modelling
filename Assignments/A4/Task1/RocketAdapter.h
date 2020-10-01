//
// Created by jo on 2020/10/01.
//

#ifndef A4_ROCKETADAPTER_H
#define A4_ROCKETADAPTER_H
#include "RemoteControlRocket.h"

class RocketAdapter {
private:
    RemoteControlRocket* adaptee;

public:
    RocketAdapter(RemoteControlRocket* r) : adaptee(r) {};
    void on() {
        adaptee->takeOff();
        adaptee->on();
    }
    void off() {
        adaptee->stopLaunch();
        adaptee->off();
    }
    void forward() {
        if (adaptee->getOnOffState()) adaptee->increaseThrottle();
        else cout << "The Rocket isn't on and can't go faster" << endl;
    };
    void backward() {
        if (!adaptee->getOnOffState()) adaptee->decreaseThrottle();
        else cout << "The Rocket isn't on and can't go slower" << endl;
    }

};

#endif //A4_ROCKETADAPTER_H
