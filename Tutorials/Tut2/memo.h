//
// Created by jo on 2020/08/20.
//

#ifndef TUT2_MEMO_H
#define TUT2_MEMO_H
#include <string>
#include <iostream>

using namespace std;

class Memo
{
public:
    Memo(string date, string message, string signature);
    Memo(const Memo& memo);

    virtual Memo* clone();
    virtual void send(string method);

protected:
    string mDate;
    string mMessage;
    string mSignature;
    string mPhoneNumber;

};



#endif //TUT2_MEMO_H
