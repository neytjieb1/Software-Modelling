//
// Created by jo on 2020/08/20.
//

#ifndef TUT2_MEMOSENDER_H
#define TUT2_MEMOSENDER_H
#include "MemoTypes.h"
#include "memo.h"
#include "Staff.h"

class MemoSender
{

public:
    MemoSender(string date, string message, string signature);
    ~MemoSender();
    void sendBatch(Staff**, int numberOfStaff);

private:
    Memo *mPrototype[2];
    void sendSingle(Staff*, Memo *memo);

};


MemoSender::MemoSender(string date, string message, string signature)
{
    mPrototype[0] = new WAMemo(date, message, signature);
    mPrototype[1] = new emailMemo(date, message, signature);
}

MemoSender::~MemoSender()
{
    delete mPrototype[0];
    delete mPrototype[1];
}

void MemoSender::sendBatch(Staff** staffList, int numberOfStaff) {
    cout << "Starting to send a batch of emails ..." << endl;
    for(int i = 0; i < numberOfStaff; i++)
    {
        switch (staffList[i]->getContactMethod()) {
            case WA:
                sendSingle(staffList[i], mPrototype[0]->clone());
                break;
            case Email:
                sendSingle(staffList[i], mPrototype[1]->clone());
                break;
            default: cout << "Preferred method not available" << endl;
        }
    }
    cout << "Done!" << endl;
}

void MemoSender::sendSingle(Staff* staffMember, Memo *memo)
{
    memo->send(staffMember);
    delete memo;
    memo = NULL;
}


#endif //TUT2_MEMOSENDER_H
