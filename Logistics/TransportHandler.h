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
    //void deregisterForSeason(Logistics *) override;
    void HireEmployees(int budget) override{};
    /*Container* requestContainer(bool European) override {

    };*/
    void addAMethod(TransportHandler* transport) {
        if (nextTransportationMethod) {
            //notify?
            //nextTransportationMethod->addAMethod(transport);
        }
        else {
            nextTransportationMethod = transport;
        }
    };
    virtual void transport(Race* fromLocation, Race* destination, Car*car = nullptr) {
        if (nextTransportationMethod) {
            nextTransportationMethod->transport(fromLocation, destination, car);
        } else {
            cout << "Cannot handle request" << endl;
        }
    };
};

class Fly : public TransportHandler {
public:
    void transport(Race *fromLocation, Race *destination, Car *car = nullptr) override {
        if (car) {
            cout << "Car picked up from : " << fromLocation->getLocation() << "and flown out " << endl;
        }
        else {
            TransportHandler::transport(fromLocation, destination, car);
        }

    }
};
class Ship : public TransportHandler {
public:
    void transport(Race *fromLocation, Race *destination, Car *car = nullptr ) override {
        if (fromLocation->isRaceEuropean()!=destination->isRaceEuropean()) {
            //ship and change state etc
            requestContainerChangeState(destination->isRaceEuropean());
            cout << "Container in transport via SHIP" << endl;
            cout << "From: " << fromLocation->getLocation() << " to " << destination->getLocation() << endl;
        }
        else {
            TransportHandler::transport(fromLocation, destination, car);
        }
    };
};
class Road : public TransportHandler {
public:
    void transport(Race *fromLocation, Race *destination, Car *car = nullptr) override {
        if (fromLocation->isRaceEuropean() && destination->isRaceEuropean()) {
            requestContainerChangeState(true);
            cout << "Container in transport via ROAD";
            cout << "From: " << fromLocation->getLocation() << " to " << destination->getLocation() << endl;
        }
        else {
            TransportHandler::transport(fromLocation, destination, car);
        }
    };
};


#endif //PREMODELLING_TRANSPORTHANDLER_H
