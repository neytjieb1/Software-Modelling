//
// Created by jo on 2020/09/02.
//

#ifndef COMPOSITE_DECORATOR_SALESTICKET_H
#define COMPOSITE_DECORATOR_SALESTICKET_H

#include "Component.h"

class SalesTicket : public Component {
public:
    void printTicket();

    virtual ~SalesTicket() {};
};

void SalesTicket::printTicket() {
    cout << "Cash Sale Ticket" << endl;
}

class CardTicket : public Component {
public:
    void printTicket();
    virtual ~CardTicket() {};
};

void CardTicket::printTicket() {
    cout << "Card Sale Ticket" << endl;
}

#endif //COMPOSITE_DECORATOR_SALESTICKET_H
