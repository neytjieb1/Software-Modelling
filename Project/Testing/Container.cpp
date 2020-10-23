//
// Created by jo on 2020/10/17.
//


#include "Container.h"
#include "ContainerState.h"


void Container::setState(ContainerState *state) {
    delete this->containerCurrentState;
    this->containerCurrentState = state;
}

string Container::getState() {
    return containerCurrentState->getState();
}

void Container::takeStock() {
    cout << "CONTAINER STOCK TAKE" << endl;

}

Container::Container() {
    containerCurrentState = new BeingPacked();
}

Container::~Container() {
    delete containerCurrentState;
}

void Container::addElement(Container *) {
    //remains to be implemented
}

Container *Container::removeElement() {
    //remains to be implemented
    return nullptr;
}

void Container::changeState() {
    containerCurrentState->advanceState(this);
}


