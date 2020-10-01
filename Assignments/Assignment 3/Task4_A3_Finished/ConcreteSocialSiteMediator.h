//
// Created by jo on 2020/09/16.
//

#ifndef TASK4_A3_CONCRETESOCIALSITEMEDIATOR_H
#define TASK4_A3_CONCRETESOCIALSITEMEDIATOR_H

#include "SocialSiteMediator.h"
#include "SocialSiteUser.h"

class ConcreteSocialSiteMediator : public SocialSiteMediator{
private:
    vector<User*> users;      //changed from User**
    int numUsers;
public:
    ConcreteSocialSiteMediator() : SocialSiteMediator() {      //shouldn't this be taking in an int?
        numUsers = 0;
    };
    ~ConcreteSocialSiteMediator() {
        for (int i = 0; i < numUsers; ++i) {
            users.pop_back();
        }
    };

    bool addUser(string username) override {
        if (getUser(username) == nullptr) {
            users.push_back(new SocialSiteUser(this, username));
            ++numUsers;
            return true;
        }
        else {
            cout << "User already exists" << endl;
            return false;
        }
    }

    void notify(User *sendingUser, string message) override {
        for (User* siteUser : users) {
            if (siteUser->getName() != sendingUser->getName()) {
                siteUser->receiveMessage(message);
            }
        }
    }

    User* getUser(string name) {
        for (User* siteUser : users) {
            if (siteUser->getName() == name) return siteUser;
        }
        return nullptr;
    }

};


#endif //TASK4_A3_CONCRETESOCIALSITEMEDIATOR_H
