#include <iostream>
//#include <vector>
#include <sstream>

#include "Chatter.h"
#include "Chatroom.h"


Chatter::Chatter() {
    chatroom = 0;
    myId=-1;
}

void Chatter::reg(Chatroom* cr){
    chatroom = cr;
    myId = chatroom->registerMe(this);
}

void Chatter::leave(){
    chatroom->leave(myId);
}

Chatter::~Chatter() {
    //delete chatroom;
    chatroom = 0;
    myId = -1;
}

