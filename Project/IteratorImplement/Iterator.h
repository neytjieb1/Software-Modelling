//
// Created by jo on 2020/10/17.
//

#ifndef PREMODELLING_ITERATOR_H
#define PREMODELLING_ITERATOR_H

class Race;
class Iterator {
public:
    virtual void first() = 0;
    virtual void operator ++() = 0; //virtual void next() = 0;
    virtual void operator --() = 0;//virtual void prev() = 0;
    virtual bool isLast() = 0;
    virtual Race* currentItem() = 0;
};

//slicing?




#endif //PREMODELLING_ITERATOR_H
