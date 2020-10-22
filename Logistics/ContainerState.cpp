//
// Created by jo-anne on 2020/10/22.
//

#include "ContainerState.h"

void BeingPacked::changeState(Container *container) {
    //container->setState(new InShipping());
}

string BeingPacked::getState() {
    return "Being Packed" ;
}

BeingPacked::~BeingPacked() {

}

void InShipping::changeState(Container *container) {
    //container->setState(new ArrivedAtDestination());
}

string InShipping::getState() {
    return "In Shipping" ;
}

InShipping::~InShipping() {

}


void ArrivedAtDestination::changeState(Container *container) {
    //container->setState(new BeingPacked());

}

string ArrivedAtDestination::getState() {
    return "Arrived at Destination";
}

ArrivedAtDestination::~ArrivedAtDestination() {

}

ContainerState::~ContainerState() {

}
