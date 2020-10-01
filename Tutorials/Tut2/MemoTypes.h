//
// Created by jo on 2020/08/21.
//

#ifndef TUT2_MEMOTYPES_H
#define TUT2_MEMOTYPES_H
#include "memo.h"

class WAMemo: public Memo {
public:
    WAMemo(string date, string message, string signature) ;
    WAMemo(const WAMemo& wa_memo);
    virtual Memo * clone() override ;
    virtual void send(Staff* member) override;
};

class emailMemo: public Memo {
public:
    emailMemo(string date, string message, string signature) ;
    emailMemo(const emailMemo& em_mem);
    virtual Memo * clone() override ;
    virtual void send(Staff* member) override;
};





#endif //TUT2_MEMOTYPES_H
