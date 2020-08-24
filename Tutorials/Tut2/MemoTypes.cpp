//
// Created by jo on 2020/08/21.
//

#include "MemoTypes.h"

WAMemo::WAMemo(string date, string message, string signature, string commMethod) : Memo(date, message, signature) {
    this->communicationMethod = commMethod;
}

WAMemo::WAMemo(const WAMemo &wa_memo) : Memo(wa_memo) {
    this->communicationMethod = wa_memo.communicationMethod;
}

Memo *WAMemo::clone() {
    return new WAMemo(*this);

}

void WAMemo::send() {
    cout << "\tThe memo from " << mDate << " was sent to " << mPhoneNumber << "using" << communicationMethod << endl;
    cout << "\t\tMemo message: " << mMessage << endl;

}

/*void WAMemo::setCommMethod(string c) {
    this->communicationMethod = c;
}

string WAMemo::getCommMethod() {
    return this->communicationMethod;
}*/
