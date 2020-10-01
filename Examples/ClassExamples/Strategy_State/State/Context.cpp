//
// Created by jo on 2020/08/28.
//

#include "Context.h"
#include <iostream>
using namespace std;

Context::Context() {
    cout << "Constructor: Context" << endl;
    this->state = new RedState();
}

Context::~Context() {
    cout << "Destructor: Context" << endl;
}

void Context::change() {
    state->handleChange(this);
}

void Context::getColor() {
    cout << "This colour is : " << state->getColour() << endl;
}

void Context::setState(State *state) {
    cout << "Delete " << this->state->getColour() << " state" << endl;
    delete this->state;
    this->state = state;
}
