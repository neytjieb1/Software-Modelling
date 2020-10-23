//
// Created by jo on 2020/10/17.
//

#ifndef PREMODELLING_CONTAINER_H
#define PREMODELLING_CONTAINER_H

#include <string>
#include <list>
#include <iostream>
using namespace std;

//class ContainerState;
#include "ContainerState.h"

class Container {
    friend class ContainerState;
private:
    ContainerState* containerCurrentState;
public:
    Container();
    virtual ~Container();
    virtual void takeStock() ;
    virtual void changeState();
    string getState();

protected:
    virtual void addElement(Container *) ;
    virtual Container * removeElement();
    virtual void setState(ContainerState* state);

};



#endif //PREMODELLING_CONTAINER_H
