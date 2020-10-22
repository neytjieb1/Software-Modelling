//
// Created by jo-anne on 2020/10/22.
//

#ifndef LOGISTICS_CONTAINERSTATE_H
#define LOGISTICS_CONTAINERSTATE_H

#include "Container.h"

class ContainerState {
public:
    virtual void changeState(Container*) = 0;
    virtual string getState() = 0;
    virtual ~ContainerState();
};

class BeingPacked : public ContainerState {
public:
    void changeState(Container *) override;
    string getState() override;
    ~BeingPacked();
};

class InShipping : public ContainerState {
public:
    void changeState(Container*) override;
    string getState() override;
    ~InShipping();
};

class ArrivedAtDestination : public ContainerState {
public:
    void changeState(Container *) override;

    string getState() override;

    ~ArrivedAtDestination();
};

#endif //LOGISTICS_CONTAINERSTATE_H
