//
// Created by jo on 2020/09/22.
//

#ifndef A3_ITERATOR_H
#define A3_ITERATOR_H

template<class T>
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


#endif //A3_ITERATOR_H
