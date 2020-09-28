//
// Created by jo on 2020/09/15.
//

#ifndef A3_USER_H
#define A3_USER_H
#include <string>
using namespace std;

class SocialSiteMediator;

class User {
protected:
    SocialSiteMediator* mediator;
    string username;
public:
    User(SocialSiteMediator* _mediator, string uname) : mediator(_mediator), username(uname) {};
    ~User() {
        //delete mediator;
    };

    void changed(string message){};

    virtual string getName() {return username;};
    virtual void receiveMessage(string) = 0;

};


#endif //A3_USER_H
