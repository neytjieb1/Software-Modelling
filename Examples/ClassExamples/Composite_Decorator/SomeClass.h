//
// Created by jo on 2020/09/02.
//

#ifndef COMPOSITE_DECORATOR_SOMECLASS_H
#define COMPOSITE_DECORATOR_SOMECLASS_H

class SomeClass: public Component {
public:
    virtual void printTicket();
    SomeClass(Component* myC);
    // Need to add a destructor - MUST be virtual
    virtual ~SomeClass();
private:
    Component *myComp;
};



SomeClass::SomeClass(Component* myC) {
    myComp = myC;
}

void SomeClass::printTicket() {
    if (myComp)
        myComp->printTicket();
}

SomeClass::~SomeClass(){
    delete myComp;
}

class Header1: public SomeClass {
public:
    Header1(Component* c);
    void printTicket();
};

Header1::Header1(Component* c) : SomeClass(c) { }

void Header1::printTicket() {
    cout<<"Welcome to the Crazy Zone"<<endl;
    SomeClass::printTicket();
}


class Header2: public SomeClass {
public:
    Header2(Component* c);
    void printTicket();
};

Header2::Header2(Component* c) : SomeClass(c) { }

void Header2::printTicket()
{
    cout<<"Shopping at the Crazy Zone"<<endl;
    SomeClass::printTicket();
}


class Footer1: public SomeClass {
public:
    Footer1(Component* c);
    void printTicket();
};

Footer1::Footer1(Component* c) : SomeClass(c) { }

void Footer1::printTicket() {
    SomeClass::printTicket();
    cout << "It was a pleasure doing" <<
         " business with you"<<endl;
}

class Footer2: public SomeClass {
public:
    Footer2(Component* c);
    void printTicket();
};

Footer2::Footer2(Component* c) : SomeClass(c) { }

void Footer2::printTicket() {
    SomeClass::printTicket();
    cout << "Enjoy your day"<<endl;
}


#endif //COMPOSITE_DECORATOR_SOMECLASS_H
