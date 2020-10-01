#ifndef CHATROOM_H
#define CHATROOM_H

#include <string>
#include <vector>

#include "Chatter.h"
#include "Participant.h"
using namespace std;

class Chatroom {  // Mediator
public:
    Chatroom();
    int registerMe(Chatter*); // register yourself and receive your id
    void broadcast(string, int);
    bool talkTo(int,string);
    void leave(int);
    virtual ~Chatroom() {
        for (Participant* person: participant) {
            participant.pop_back();
        }
    }// Will need to implement.  Cannot remove chatters but can make them 0
    // The Participants in the vector can then be removed.
protected:
    vector<Participant*> participant;
    int nextId;
};



#endif