//
// Created by jo on 2020/10/17.
//

#ifndef PREMODELLING_CONTAINER_H
#define PREMODELLING_CONTAINER_H

#include <string>
#include <list>
#include <iostream>
using namespace std;

class ContainerState;

class Container {
private:
    ContainerState* containerCurrentState;
public:
    Container();
    virtual ~Container();
    virtual void addElement(Container *) ;
    virtual Container * removeElement();
    /**
     * @details This function prints out contents of container categorised into Boxes
     */
    virtual void takeStock() ;
    virtual void changeState();
    string getState();

//protected:
    virtual void setState(ContainerState* state);

};



#endif //PREMODELLING_CONTAINER_H
