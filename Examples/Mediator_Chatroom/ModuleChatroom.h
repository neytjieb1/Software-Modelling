//
// Created by jo on 2020/09/28.
//

#ifndef MEDIATOR_CHATROOM_MODULECHATROOM_H
#define MEDIATOR_CHATROOM_MODULECHATROOM_H

#include <string>
#include "Chatroom.h"

using namespace std;

class ModuleChatroom : public Chatroom {  // Concrete Mediator
public:
    ModuleChatroom(string);
    virtual ~ModuleChatroom() {};
protected:
    string name;
};


ModuleChatroom::ModuleChatroom(string n) : name(n) {};


#endif //MEDIATOR_CHATROOM_MODULECHATROOM_H
