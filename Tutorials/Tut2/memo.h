//
// Created by jo on 2020/08/20.
//

#ifndef TUT2_MEMO_H
#define TUT2_MEMO_H
#include <string>
#include <iostream>
#include "Staff.h"

using namespace std;

class Memo
{
public:
    Memo(string date, string message, string signature);
    Memo(const Memo& memo);
    virtual Memo* clone() = 0;
    virtual void send(Staff* staffMember) = 0;

protected:
    string mDate;
    string mMessage;
    string mSignature;

};



#endif //TUT2_MEMO_H
