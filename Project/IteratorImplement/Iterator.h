//
// Created by jo on 2020/10/17.
//

#ifndef PREMODELLING_ITERATOR_H
#define PREMODELLING_ITERATOR_H


class Iterator {
public:
    virtual void first();
    virtual Iterator operator ++(); //virtual void next() = 0;
    virtual Iterator operator --();//virtual void prev() = 0;
    virtual bool isLast();
    virtual Iterator* currentItem();
};

//slicing?




#endif //PREMODELLING_ITERATOR_H
