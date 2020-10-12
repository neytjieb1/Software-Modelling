//
// Created by jo on 2020/10/01.
//

#ifndef A4_REMOTECONTROLCAR_H
#define A4_REMOTECONTROLCAR_H

#include "RemoteControlVehicle.h"

class RemoteControlCar : public RemoteControlVehicle{
public:
    void on() override;
    void off() override;
    void forward() override;
    void backward() override;
    void handleRequest(Command* c) override;
};


#endif //A4_REMOTECONTROLCAR_H
