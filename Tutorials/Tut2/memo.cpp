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

void Memo::send(string method) {

}
