//
// Created by jo on 2020/09/16.
//

#ifndef TASK4_A3_USER_H
#define TASK4_A3_USER_H

#include "SocialSiteMediator.h"
#include <string>
using namespace std;


//class SocialSiteMediator;

class User {
    friend class SocialSiteMediator;

protected:
    SocialSiteMediator* mediator;
    string username;
public:
    User(SocialSiteMediator* _mediator, string uname) : mediator(_mediator), username(uname) {};
    ~User() {
        delete mediator;
    };

    void changed(string message) {
        mediator->notify(this, message);
    };

    virtual string getName() {return username;};
    virtual void receiveMessage(string) = 0;

};


#endif //TASK4_A3_USER_H
