//
// Created by jo on 2020/08/28.
//

#include "State.h"
#include <iostream>

State::~State() {
    //cout << "Destructor: State" << endl;
}

State::State() {
    //cout << "Constructor: State" << endl;
}

void RedState::handleChange(Context *c) {
    c->setState(new GreenState());
}

string RedState::getColour() {
    return "Red";
}

RedState::RedState() : State() {
    cout << "Constructor: " << getColour() << " State" << endl;
}

RedState::~RedState() {
    cout << "Destructor: " << getColour() << " State" << endl;
}

void AmberState::handleChange(Context *c) {
    c->setState(new RedState());

}

string AmberState::getColour() {
    return "Amber";
}

AmberState::~AmberState() {
    cout << "Destructor: " << getColour() << " State" << endl;
}

AmberState::AmberState() : State() {
    cout << "Constructor: " << getColour() << " State" << endl;
}

void GreenState::handleChange(Context *c) {
    c->setState(new AmberState());

}

string GreenState::getColour() {
    return "Green";
}

GreenState::GreenState() : State() {
    cout << "Constructor: " << getColour() << " State" << endl;

}

GreenState::~GreenState() {
    cout << "Destructor: " << getColour() << " State" << endl;
}
