//
// Created by jo on 2020/09/15.
//

#ifndef A3_DYNAMICARRAY_H
#define A3_DYNAMICARRAY_H
#include "LinearStructure.h"
//#include "ConcreteIterator.h"

template<class T>0
class LinearStructure;

template<class T>
class Iterator {
public:
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool hasNext() = 0;
    virtual int current() = 0;
    virtual void traverseStruct(bool = true) = 0;
    void reset() {
        currIndex = (currIndex!=-1 ? 0 : -1);
    };
    void setVerbose(bool wordliness) {verbose = wordliness;};

protected:
    int currIndex;
    LinearStructure<T>* lStruct;
    bool verbose = false;
    /*int maxNumElements;
    T** elements;*/

};

template class Iterator<int>;


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

//#include "DynamicArray.cpp"       //WHY?
template class DynamicArray<int>;

#endif //A3_DYNAMICARRAY_H
