//
// Created by jo on 2020/09/02.
//

#ifndef COMPOSITE_DECORATOR_COMPONENT_H
#define COMPOSITE_DECORATOR_COMPONENT_H
#include <iostream>
using namespace std;


class Component {
public:
    virtual void printTicket() = 0;
    virtual ~Component() {};
};



#endif //COMPOSITE_DECORATOR_COMPONENT_H
