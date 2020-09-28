//
// Created by jo on 2020/09/28.
//

#ifndef MEDIATOR_CHATROOM_STUDENT_H
#define MEDIATOR_CHATROOM_STUDENT_H
#include "Chatter.h"


class Student : public Chatter {
public:
    Student();
    virtual void receiveMessage(string);
    virtual void sendMessage();
};



#endif //MEDIATOR_CHATROOM_STUDENT_H
