//
// Created by jo on 2020/08/26.
//

#include "MemoTypes.h"

WAMemo::WAMemo(string date, string message, string signature) : Memo(date, message, signature) {
}

WAMemo::WAMemo(const WAMemo &wa_memo) : Memo(wa_memo) {}

Memo *WAMemo::clone() {
    return new WAMemo(*this);

}

void WAMemo::send(Staff* member) {
    cout << "Message to " << member->getName() << endl;
    cout << "\tThe memo from " << mDate << " was sent to " << member->getCellphone() << endl;
    cout << "\tUsing WA" << endl;
    cout << "\tMemo message: " << mMessage << endl << endl;
}

emailMemo::emailMemo(string date, string message, string signature) : Memo(date, message, signature){
}

emailMemo::emailMemo(const emailMemo &em_mem) : Memo(em_mem){
}

Memo *emailMemo::clone() {
    return new emailMemo(*this);
}

void emailMemo::send(Staff *member) {
    cout << "Message to " << member->getName() << endl;
    cout << "\tThe memo from " << mDate << " was sent to " << member->getEmail() << endl;
    cout << "\tUsing E-Mail" << endl;
    cout << "\tMemo message: " << mMessage << endl << endl;
}