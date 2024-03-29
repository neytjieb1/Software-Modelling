//
// Created by jo on 2020/10/01.
//

#ifndef A4_REMOTECONTROLPLANE_H
#define A4_REMOTECONTROLPLANE_H
#include "RemoteControlVehicle.h"

class RemoteControlPlane : public RemoteControlVehicle {
public:
    RemoteControlPlane(){};
    ~RemoteControlPlane(){};
    void on() override;
    void off() override;
    void forward() override;
    void backward() override;
    void handleRequest(Command* c) override;
};


#endif //A4_REMOTECONTROLPLANE_H
