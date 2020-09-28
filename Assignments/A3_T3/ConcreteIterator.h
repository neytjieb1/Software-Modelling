//
// Created by jo on 2020/09/21.
//

#ifndef A3_T3_CONCRETEITERATOR_H
#define A3_T3_CONCRETEITERATOR_H
#include "Iterator.h"

template <typename T> class ConcreteIterator : public Iterator<T> {
    friend class DynamicArray<T>;

public:
    ConcreteIterator() {
        headVal = nullptr;
        currentVal = nullptr;
    };
    ConcreteIterator<T>::ConcreteIterator(ConcreteIterator *it) {
        head = it->getHead();
        currentVal= it->getCurrent();
    }
    void first() override {
        cout << "First: " << headVal.element << endl;
    };
    void next() override {
        cout << "Next: " << currentVal->next.element << endl;
    };
    bool hasNext() override {
        return (currentEl->next != nullptr);
    };
    T current() override {
        return currentEl.element;
    };

    Node<T>* getHead() {return head;};
    Node<T>* getCurrent() {return currentEl;};

protected:
    ConcreteIterator(ConcreteIterator<T>* it) ;

};


#endif //A3_T3_CONCRETEITERATOR_H
