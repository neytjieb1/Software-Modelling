//
// Created by jo on 2020/08/21.
//

#ifndef TUT2_MEMOTYPES_H
#define TUT2_MEMOTYPES_H
#include "memo.h"

class WAMemo: public Memo {
public:
    WAMemo(string date, string message, string signature, string commMethod) ;
    WAMemo(const WAMemo& wa_memo);
    virtual Memo * clone() override ;
    virtual void send(string method) override;
    //void setCommMethod(string c) ;
    //string getCommMethod() ;

private:
    string communicationMethod;
};


#endif //TUT2_MEMOTYPES_H

//return new Memo(*this);