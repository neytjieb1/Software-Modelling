//
// Created by jo on 2020/09/16.
//

#ifndef TASK4_A3_SOCIALSITEUSER_H
#define TASK4_A3_SOCIALSITEUSER_H

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
        status = "I am using SocialSite";
        myInbox = new Inbox(100);
        old = new OldStatus(100);
        old->save(status);
    };
    void changeStatus(string s) {
        status = s;
        changed(getName() + " has changed her status to: " + status);
    };
    string viewStatus() {return status;};
    virtual void receiveMessage(string message) {
        cout << username << " received: " << message << endl;
        saveMessage(message);
    }
    void postMessage(string message) {
        //User::mediator->notify(this, message);
        message = username + " sent: " + message;
        mediator->notify(this, message);
    };
    void saveMessage(string message){
        myInbox->save(message);
    };
    void viewInbox() {
        int i = 0;
        string tempMessage = myInbox->load(i++);
        if (tempMessage=="") {
            cout << "Inbox Empty" << endl;
            return;
        }
        while (tempMessage != "") {
             cout << tempMessage << endl;
             tempMessage = myInbox->load(i++);
         }
        //cout << endl;
    };
    void saveStatus() {
        old->save(status);
    };
    void loadStatus(int i) {     //which status should I load?
        int index = old->getNumStatus()-1;
        cout << "Choose status [0 - " << index << "]" << endl;
        //cin >> index;
        //changeStatus(old->load(index));
        cout << i << endl;
        changeStatus(old->load(i));
    };


};

#endif //TASK4_A3_SOCIALSITEUSER_H
