//
// Created by jo on 2020/08/20.
//

#ifndef TUT2_MEMOSENDER_H
#define TUT2_MEMOSENDER_H
#include "memo.h"

class MemoSender
{

public:
    MemoSender(string date, string message, string signature);
    ~MemoSender();
    void sendBatch(string *method, int numberOfEmails);

private:
    void sendSingle(string method, Memo *memo);
    Memo* mPrototype;

};


#endif //TUT2_MEMOSENDER_H
