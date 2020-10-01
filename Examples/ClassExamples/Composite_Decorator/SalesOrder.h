//
// Created by jo on 2020/09/02.
//

#ifndef COMPOSITE_DECORATOR_SALESORDER_H
#define COMPOSITE_DECORATOR_SALESORDER_H
#include "Component.h"

class SalesOrder {
public:
    SalesOrder(Component*);
    void printTicket();
    ~SalesOrder();
private:
    Component* order;
};


SalesOrder::SalesOrder(Component* c) : order(c) {}

void SalesOrder::printTicket() {
    order->printTicket();
}

SalesOrder::~SalesOrder(){
    delete order;
}

#endif //COMPOSITE_DECORATOR_SALESORDER_H
