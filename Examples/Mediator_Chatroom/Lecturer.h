//
// Created by jo on 2020/09/28.
//

#ifndef MEDIATOR_CHATROOM_LECTURER_H
#define MEDIATOR_CHATROOM_LECTURER_H
#include "Chatter.h"
#include <iostream>
using namespace std;


class Lecturer : public Chatter {
public:
    Lecturer();
    virtual void receiveMessage(string);
    virtual void sendMessage();
};



Lecturer::Lecturer() : Chatter() {
    cout<<"Creating Lecturer"<<endl;
}

void Lecturer::receiveMessage(string msg){
    cout<<myId<<" received msg from "<<msg<<endl;
}

void Lecturer::sendMessage(){
    string msg;
    cout<<"Lecturer "<<myId<<" message? ";
    getline(cin,msg,'\n');


    chatroom->broadcast(msg, this->myId);
}




#endif //MEDIATOR_CHATROOM_LECTURER_H
