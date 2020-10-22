//
// Created by jo-anne on 2020/10/22.
//

#ifndef LOGISTICS_TRANSPORTMETHODS_H
#define LOGISTICS_TRANSPORTMETHODS_H

#include "TransportHandler.h"

class Fly : public TransportHandler {
public:
    void transport(Race *fromLocation, Race *destination, Car *car = nullptr) override;
};
class Ship : public TransportHandler {
public:
    void transport(Race *fromLocation, Race *destination, Car *car = nullptr ) override ;
};
class Road : public TransportHandler {
public:
    void transport(Race *fromLocation, Race *destination, Car *car = nullptr) override ;
};



#endif //LOGISTICS_TRANSPORTMETHODS_H
