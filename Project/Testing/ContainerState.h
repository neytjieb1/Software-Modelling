//
// Created by jo-anne on 2020/10/23.
//

#ifndef TESTING_CONTAINERSTATE_H
#define TESTING_CONTAINERSTATE_H


#include <string>
using namespace std;
class Container;


class ContainerState {
    friend class Container;
public:
    virtual void advanceState(Container*) = 0;
    virtual string getState() = 0;
    virtual ~ContainerState();
};

class BeingPacked : public ContainerState {
public:
    void advanceState(Container *) override;
    string getState() override;
    ~BeingPacked();
};

class InShipping : public ContainerState {
public:
    void advanceState(Container*) override;
    string getState() override;
    ~InShipping();
};

class ArrivedAtDestination : public ContainerState {
public:
    void advanceState(Container *) override;
    string getState() override;
    ~ArrivedAtDestination();
};


#endif //TESTING_CONTAINERSTATE_H
