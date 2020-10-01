//
// Created by jo on 2020/09/16.
//

#ifndef TASK4_A3_SOCIALSITEMEDIATOR_H
#define TASK4_A3_SOCIALSITEMEDIATOR_H

//#include "User.h"
#include <string>
#include <vector>
using namespace std;

class User;

class SocialSiteMediator {
public:
    virtual void notify(User*, string message) = 0;
    virtual bool addUser(string username) = 0;
    ~SocialSiteMediator() {};
};


#endif //TASK4_A3_SOCIALSITEMEDIATOR_H
