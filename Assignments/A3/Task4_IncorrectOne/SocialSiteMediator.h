//
// Created by jo on 2020/09/15.
//

#ifndef A3_SOCIALSITEMEDIATOR_H
#define A3_SOCIALSITEMEDIATOR_H
#include "User.h"
#include <string>
#include <vector>
using namespace std;

class SocialSiteMediator {
public:
    virtual void notify(User*, string message) = 0;
    virtual bool addUser(string username) = 0;
    ~SocialSiteMediator() {};
};


#endif //A3_SOCIALSITEMEDIATOR_H
