//
// Created by jo on 2020/10/17.
//

#ifndef PREMODELLING_CONTAINER_H
#define PREMODELLING_CONTAINER_H
#include <string>
using namespace std;

class ContainerState {
public:
    virtual void changeState() = 0;
    virtual ContainerState* getState() = 0;
};
class BeingPacked : ContainerState {
public:
    void changeState() override;
    ContainerState * getState() override;
};
class InShipping : ContainerState {
public:
    void changeState() override;
    ContainerState * getState() override;
};
class ArrivedAtDestination : ContainerState {
public:
    void changeState() override;
    ContainerState * getState() override;
};


class Container {
private:
    ContainerState* containerCurrentState;
public:
    virtual void addElement(Container*) = 0;
    virtual Container* removeElement() = 0;
    virtual void takeStock() = 0; //ie print out all contents;

};
class Box : public Container {
private:
    Container* elements;
public:
    void addElement(Container *) override;
    Container * removeElement() override;
    void takeStock() override;
};
class GarageEquipment : public Container {
private:
    string contents;
public:
    void addElement(Container *) override;
    Container * removeElement() override;
    void takeStock() override;
};
class CateringEquipment: public Container {
private:
    string contents;
public:
    void addElement(Container *) override;
    Container * removeElement() override;
    void takeStock() override;
};


#endif //PREMODELLING_CONTAINER_H
