#include "memo.h"

Memo::Memo(string date, string message, string signature)
{
    mDate = date;
    mMessage = message;
    mSignature = signature;

}

Memo::Memo(const Memo& memo)
{
    mDate = memo.mDate;
    mMessage = memo.mMessage;
    mSignature = memo.mSignature;
}


/*Memo *Memo::clone() {
    return new Memo(this->mDate, this->mMessage, this->mSignature);
}*/

/*void Memo::send(Staff *staffMember) {

}*/
