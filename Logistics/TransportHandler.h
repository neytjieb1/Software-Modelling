//
// Created by jo on 2020/10/17.
//

#ifndef PREMODELLING_TRANSPORTHANDLER_H
#define PREMODELLING_TRANSPORTHANDLER_H
#include <iostream>
#include "Race.h"
using namespace std;

#include "Colleague.h"

class TransportHandler : public Colleague {
private:
    TransportHandler* nextTransportationMethod;
public:
    void HireEmployees(int budget) override;
    void addAMethod(TransportHandler* transport) ;
    virtual void transport(Race* fromLocation, Race* destination, Car*car = nullptr) ;
};



#endif //PREMODELLING_TRANSPORTHANDLER_H
