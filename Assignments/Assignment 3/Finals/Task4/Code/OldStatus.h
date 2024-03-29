//
// Created by jo on 2020/09/16.
//

#ifndef TASK4_A3_OLDSTATUS_H
#define TASK4_A3_OLDSTATUS_H

#include <string>
#include <iostream>
using namespace std;

class OldStatus {
private:
    int numStatus;
    int MaxStatus;
    string* status;

public:
    OldStatus(int _MaxStatus) {
        numStatus = 0;
        MaxStatus=_MaxStatus;
        status = new string[MaxStatus];
    };
    ~OldStatus() {
        delete status;
    };
    void save(string _status) {
        if (numStatus==MaxStatus) {
            cout << "Inbox Full. Can't save message" << endl;
        }
        else {
            status[numStatus++] = _status;
            cout << "";
        }
    };
    string load(int index){
        if (index < 0 || index >= MaxStatus) {
            cout << "Invalid Index. Can't load message" << endl;
            return NULL;
        }
        else {
            return status[index];
        }
    };
    int getNumStatus() {return numStatus;};

};



#endif //TASK4_A3_OLDSTATUS_H
