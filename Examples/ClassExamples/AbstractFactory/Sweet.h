//
// Created by jo on 2020/08/27.
//

#ifndef ABSTRACTFACTORY_SWEET_H
#define ABSTRACTFACTORY_SWEET_H


/*
class Sweet{
public:
    virtual void wrap() = 0;
    virtual ~Sweet();
};
*/

class HardSweet /*: public Sweet*/ {
protected:
    int id;
    int total;
    virtual void print() = 0;

public:
    HardSweet();
    virtual void wrap() /*override*/;
    virtual ~HardSweet();
};

class FizzPop : public HardSweet {
protected:
    void print();
};

class Sparkle : public HardSweet {
protected:
    void print();
};

class Chocolate/*: public Sweet*/ {
protected:
    int id;
    int total;
    virtual void print() = 0;

public:
    Chocolate();
    virtual void wrap() /*override*/;
};


class BarOne : public Chocolate {
public:
    void print();
};

class Tex : public Chocolate {
public:
    void print();
};

#endif //ABSTRACTFACTORY_SWEET_H
