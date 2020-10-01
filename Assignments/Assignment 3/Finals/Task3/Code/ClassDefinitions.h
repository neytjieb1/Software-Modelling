//
// Created by jo on 2020/09/15.
//

#ifndef A3_DYNAMICARRAY_H
#define A3_DYNAMICARRAY_H
using namespace std;
#include <iostream>
#include <string>


//Forward Declare
template<class T>
class Iterator;

template<class T>
class LinearStructure {
public:
    virtual ~LinearStructure(){};
    virtual LinearStructure<T>* clone() = 0;
    virtual void insert(int index, T element) = 0;
    virtual T remove(int index) = 0;
    virtual T get(int index) const = 0;
    virtual bool isEmpty() = 0;
    virtual void clear() = 0;
    virtual int getSize() = 0;
    virtual int getNumElements() = 0;
    virtual Iterator<T>* createIterator() = 0;
};

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

};

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

class ConcreteIterator : public Iterator<int> {
public:
    template<class T> friend class DynamicArray;
    void first() override;
    void next() override;
    bool hasNext() override;
    int current() override;
    void traverseStruct(bool fromStart = true) override;

protected:
    template<class T> explicit ConcreteIterator(LinearStructure<T>* linearStruct);
    ConcreteIterator();

};

template class Iterator<int>;
template class DynamicArray<int>;

#endif //A3_DYNAMICARRAY_H
