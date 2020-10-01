//
// Created by jo on 2020/09/16.
//

#ifndef TASK4_A3_INBOX_H
#define TASK4_A3_INBOX_H
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
            return "";
        }
        else {
            return messages[index];
        }
    };
    int getNumMessages() {
        return numMessage;
    };

};


#endif //TASK4_A3_INBOX_H
