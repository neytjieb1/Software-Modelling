
//
// Created by jo on 2020/09/15.
//

#ifndef A3_T3_DYNAMICARRAY_H
#define A3_T3_DYNAMICARRAY_H
#include "LinearStructure.h"

template<class T>
class DynamicArray : public LinearStructure<T>
{
//friend class ConcreteIterator<T>;
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

//    virtual Iterator<T>* createIterator() override;

private:
    void resize(int howMuch);
    T ** elements;
    int size;
    int numElements;
};

//#include "DynamicArray.cpp"       //WHY?
template class DynamicArray<int>;

#endif //A3_T3_DYNAMICARRAY_H
