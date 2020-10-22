//
// Created by jo on 2020/10/17.
//

#ifndef PREMODELLING_CAR_H
#define PREMODELLING_CAR_H

class Driver;
class Car{
private:
    int speed;
    int handling;
    int damage;
    Driver* driver;
    int id;
public:
      int getSpeed();
      int getHandling();
      int getDamage();
      void setDamage(int);
      Driver* getDriver;
      void removeDriver(Driver*);     //remove and replace with null
      void print();
      int getDriverXP();
      bool driverInCar();
      int getID();
};

#endif //PREMODELLING_CAR_H
