//
// Created by jo on 2020/09/15.
//

#ifndef A3_CONCRETESOCIALSITEMEDIATOR_H
#define A3_CONCRETESOCIALSITEMEDIATOR_H
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
        if (getUser(username)==NULL) {
            return false;
        }
        else {
            users.push_back(new SocialSiteUser(this, username));
            ++numUsers;
            return true;
        }
    }

    void notify(User *sendingUser, string message) override {
        for (User* siteUser : users) {
            if (siteUser->getName() != sendingUser->getName()) {
                sendingUser->receiveMessage(message);
            }
        }
    }

    User* getUser(string name) {
        for (User* siteUser : users) {
            if (siteUser->getName() == name) return siteUser;
        }
        return NULL;
    }

};


#endif //A3_CONCRETESOCIALSITEMEDIATOR_H
