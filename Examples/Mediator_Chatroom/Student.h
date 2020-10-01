//
// Created by jo on 2020/09/28.
//

#ifndef MEDIATOR_CHATROOM_STUDENT_H
#define MEDIATOR_CHATROOM_STUDENT_H
#include "Chatter.h"
#include <iostream>
#include <sstream>

using namespace std;

class Student : public Chatter {
public:
    Student();
    void receiveMessage(string) override;
    void sendMessage() override;
};


Student::Student() : Chatter() {
    cout<<"Creating Student"<<endl;
}

void Student::receiveMessage(string msg){
    cout<<myId<<" received msg from "<<msg<<endl;
}

void Student::sendMessage(){
    string toId;
    string msg;
    cout<<"Student "<<myId<<" send message to? ";
    getline(cin,toId,'\n');

    cout<<"Student "<<myId<<" message? ";
    getline(cin,msg,'\n');

    ostringstream convert;
    convert << myId;
    chatroom->talkTo(atoi(toId.c_str()),convert.str()+": "+msg);
}




#endif //MEDIATOR_CHATROOM_STUDENT_H
