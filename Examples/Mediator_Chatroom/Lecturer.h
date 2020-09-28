//
// Created by jo on 2020/09/28.
//

#ifndef MEDIATOR_CHATROOM_LECTURER_H
#define MEDIATOR_CHATROOM_LECTURER_H
#include "Chatter.h"


class Lecturer : public Chatter {
public:
    Lecturer();
    virtual void receiveMessage(string);
    virtual void sendMessage();
};

#endif //MEDIATOR_CHATROOM_LECTURER_H
