//
// Created by jo on 2020/09/15.
//

#ifndef A3_INBOX_H
#define A3_INBOX_H
#include <string>
#include <iostream>
using namespace std;

class Inbox {
private:
    int numMessage;
    int MaxMessages;
    string* messages;

public:
    Inbox(int _MaxMessages) {
        numMessage = 0;
        MaxMessages = _MaxMessages;
        messages = new string[MaxMessages];
    };
    ~Inbox() {
        delete messages;
    };
    void save(string message) {
        if (numMessage==MaxMessages) {
            cout << "Inbox Full. Can't save message" << endl;
        }
        else {
            messages[numMessage++] = message;
        }
    };
    string load(int index) {
        if (index < 0 || index >= MaxMessages) {
            cout << "Invalid Index. Can't load message" << endl;
            return NULL;
        }
        else {
            return messages[index];
        }
    };
    int getNumMessages() {
        return numMessage;
    };

};


#endif //A3_INBOX_H
