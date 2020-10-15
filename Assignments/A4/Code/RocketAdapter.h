//
// Created by jo on 2020/10/01.
//

#ifndef A4_ROCKETADAPTER_H
#define A4_ROCKETADAPTER_H
#include "RemoteControlRocket.h"
#include "RemoteControlVehicle.h"

class RocketAdapter : public RemoteControlVehicle{
private:
    RemoteControlRocket* adaptee;

public:
    RocketAdapter(RemoteControlRocket* r) : RemoteControlVehicle() {
        adaptee = r;
    };
    ~RocketAdapter() {
        delete adaptee;
    }
    virtual void on() override {
        adaptee->takeOff();
    }
    virtual void off() override{
        adaptee->stopLaunch();
    }
    virtual void forward() override{
        if (getOnOffState()) adaptee->increaseThrottle();
        else cout << "The Rocket isn't on and can't go faster" << endl;
    };
    virtual void backward() override {
        if (!getOnOffState()) adaptee->decreaseThrottle();
        else cout << "The Rocket isn't on and can't go slower" << endl;
    }
    void handleRequest(Command* c) override{
        cout << "Rocket can't handle request. Passing on" << endl;
        RemoteControlVehicle::handleRequest(c);
    }
};


#endif //A4_ROCKETADAPTER_H
