//
// Created by jo on 2020/09/29.
//

#ifndef TEST_DYNAMICARRAY_H
#define TEST_DYNAMICARRAY_H

#include "LinearStructure.h"

template<class T>
class DynamicArray : public LinearStructure<T>
{
public:
    DynamicArray(int s);
    DynamicArray(const DynamicArray<T>& other);
    virtual ~DynamicArray();
    virtual DynamicArray<T>* clone() override;
    virtual void insert(int index, T element) override;
    virtual T remove(int index) override;
    virtual T get(int index) const override;
    virtual bool isEmpty() override;
    virtual void clear() override;
    virtual int getSize() override;
    virtual int getNumElements() override;
    virtual Iterator<T>* createIterator() override;

private:
    void resize(int howMuch);
    T ** elements;
    int size;
    int numElements;

};


#endif //TEST_DYNAMICARRAY_H
