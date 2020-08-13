//
// Created by jo on 2020/08/11.
//

#ifndef CLASSEXAMPLES_TEMPLATEMETHOD_H
#define CLASSEXAMPLES_TEMPLATEMETHOD_H



class TemplateMethodArrayList {
private:
    int size;
    int current;
    int *storage;

protected:
    virtual int directionOperator() = 0;

public:
    TemplateMethodArrayList();
    TemplateMethodArrayList(int size, int *storage, int curr);
    void insertElement(int el);
    void sort();
    bool isFull();
    bool isEmpty();
    void print();
    ~TemplateMethodArrayList();
};



class AscendingArrayList : public TemplateMethodArrayList {
public:
    AscendingArrayList();

    AscendingArrayList(int s, int curr, int* stor);

protected:
    int directionOperator();
};

class DescendingArrayList : public TemplateMethodArrayList {
public:
    DescendingArrayList();

    DescendingArrayList(int s, int curr, int* stor);

protected:
    int directionOperator();
};


#endif //CLASSEXAMPLES_TEMPLATEMETHOD_H
