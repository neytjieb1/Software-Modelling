//
// Created by jo on 2020/10/02.
//

#include <iostream>
using namespace std;
#include "RemoteControlCar.h"
#include "RemoteControlPlane.h"
#include "MoveBackward.h"
#include "MoveForward.h"
#include "TurnOff.h"
#include "TurnOn.h"
#include "Button.h"
#include "RocketAdapter.h"
#include "Fly.h"
#include "Speed.h"

void demoCommandPattern() {
    cout << "==================COMMAND==================" << endl;

    //configuring a Remote
    cout << "1. Configuring a remote for a car" << endl;
    RemoteControlCar* car = new RemoteControlCar();
    Button* carController[4];
    carController[0] = new Button(new TurnOn(car));
    carController[1] = new Button(new TurnOff(car));
    carController[2] = new Button(new MoveForward(car));
    carController[3] = new Button(new MoveBackward(car));

    //exhibit some functionality
    cout << endl << "2. Press some buttons to exhibit functionality" << endl;
    carController[0]->press();
    carController[1]->press();
    carController[0]->press();
    carController[2]->press();

    //I've added functionality to make the vehicle "undo" its previous operation
    cout << endl << "3. Make vehicle undo the last operation in a specific button" << endl;
    carController[2]->doublePress();
}

void demoAdapterPattern() {
    cout << endl << "==================ADAPTER==================" << endl;

    cout << "1. Adapting RCRocket to work with Commands" << endl;
    RemoteControlVehicle* rocket = new RocketAdapter(new RemoteControlRocket);

    //configuring a Remote
    cout << endl << "2. Configuring a remote for a rocket" << endl;
    Button* rocketController[4];
    rocketController[0] = new Button(new TurnOn(rocket));
    rocketController[1] = new Button(new TurnOff(rocket));
    rocketController[2] = new Button(new MoveForward(rocket));
    rocketController[3] = new Button(new MoveBackward(rocket));

    //exhibit some functionality
    cout << endl << "3. Press some buttons to exhibit functionality" << endl;
    rocketController[0]->press();
    rocketController[1]->press();
    rocketController[0]->press();
    rocketController[2]->press();

    //I've added functionality to make the vehicle "undo" its previous operation
    cout << endl << "4. Make vehicle undo the last operation in a specific button" << endl;
    rocketController[1]->doublePress();

}

void demoCORPattern() {
    cout << endl << "==================CHAIN OF RESPONSIBILITY==================" << endl;

    //Last vehicle in list will handle command
    cout << "1. LAST VEHICLE IN LIST HANDLES COMMAND" << endl;
    cout << "List: car -> rocket -> plane" << endl;
    cout << "Command: Fly" << endl << endl;
    RemoteControlVehicle* vehicle_last = new RemoteControlCar();
    vehicle_last->add(new RocketAdapter(new RemoteControlRocket));
    vehicle_last->add(new RemoteControlPlane());
    Command* fly = new Fly(vehicle_last);
    fly->execute();

    //First vehicle in list will handle command
    cout << "\n2. FIRST VEHICLE IN LIST HANDLES COMMAND" << endl;
    cout << "List: car -> plane" << endl;
    cout << "Command: Speed" << endl << endl;
    RemoteControlVehicle* vehicle_first = new RemoteControlCar();
    vehicle_first->add(new RemoteControlPlane());
    Command* speed = new Speed(vehicle_first);
    speed->execute();

    //No vehicle can handle command;
    cout << "\n3. NO VEHICLE IN LIST HANDLES COMMAND" << endl;
    cout << "List: plane -> rocket -> plane" << endl;
    cout << "Command: Speed" << endl << endl;
    RemoteControlVehicle* vehicle_none = new RemoteControlPlane();
    vehicle_none->add(new RocketAdapter(new RemoteControlRocket));
    vehicle_none->add(new RemoteControlPlane());
    speed = new Speed(vehicle_none);
    speed->execute();
}

int main() {

    demoCommandPattern();

    demoAdapterPattern();

    demoCORPattern();

    return 0;
}
