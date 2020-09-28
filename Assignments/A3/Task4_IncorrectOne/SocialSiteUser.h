//
// Created by jo on 2020/09/15.
//

#ifndef A3_SOCIALSITEUSER_H
#define A3_SOCIALSITEUSER_H

#include "User.h"
#include "Inbox.h"
#include "OldStatus.h"

#include <iostream>
#include <string>
using namespace std;


class SocialSiteUser : public User {
private:
    string status;
    Inbox *myInbox;
    OldStatus *old;

public:
    SocialSiteUser(SocialSiteMediator *mediator, string name) : User(mediator, name) {
        status = "I am using SocialLite";
        myInbox = new Inbox(100);
        old = new OldStatus(100);
    };
    void changeStatus(string s) {status = s;};
    string viewStatus() {return status;};
    virtual void receiveMessage(string message) {
        cout << "Received message: " << message << endl;
        saveMessage(message);
    }
    void postMessage(string message) {
        //User::mediator->notify(this, message);
    };
    void saveMessage(string message){
        myInbox->save(message);
    };
    void viewInbox() {
        int i = 0;
        string tempMessage = myInbox->load(i++);
       /* while (tempMessage != NULL) {
            cout << tempMessage;
            tempMessage = myInbox->load(i++);
        }*/
    };
    void saveStatus() {

    };
    void loadStatus() {

    };


};


#endif //A3_SOCIALSITEUSER_H
