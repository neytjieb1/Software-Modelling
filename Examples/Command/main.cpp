#include <iostream>

using namespace std;


class Fan {
public:
    void startRotate() { cout << "Fan is rotating" << endl;}
    void stopRotate() { cout << "Fan is not rotating" << endl;}
};

class Light {
public:
    void turnOn( ) { cout << "Light is on " << endl; }
    void turnOff( ) { cout << "Light is off" << endl; }
};

class Command {
public:
    virtual void execute ( ) = 0;
};

class LightOnCommand : public Command {
public:
    LightOnCommand (Light* L) { myLight  =  L;}
    void execute( ) { myLight -> turnOn( ); }
private:
    Light* myLight;
};

/**
 * @param
 * @return
 *
 */
class LightOffCommand : public Command {
public:
    LightOffCommand (Light* L) { myLight  =  L;}
    void execute( ) { myLight -> turnOff( ); }
private:
    Light* myLight;
};

class FanOnCommand : public Command {
public:
    FanOnCommand (Fan* f) { myFan  =  f;}
    void execute( ) { myFan -> startRotate( );}
private:
    Fan* myFan;
};

class FanOffCommand : public Command {
public:
    FanOffCommand (Fan* f) { myFan  =  f;}
    void execute( ) {myFan -> stopRotate( );}
private:
    Fan* myFan;
};


class Switch {
public:
    Switch(Command** on, Command** off)
    {
        onCommand = on;
        offCommand = off;
    }

    void flipUp( ) {
        onCommand[0] -> execute();
        onCommand[1] -> execute();
    };
    void flipDown( ) {
        offCommand[0]->execute();
        offCommand[1]->execute();
    };

private:
    Command** onCommand;
    Command** offCommand;
};

int main() {
    Light*  testLight = new Light( );
    Fan* testFan = new Fan();

    Command* onCommand[2];
    onCommand[0] = new LightOnCommand(testLight);
    onCommand[1] = new FanOnCommand(testFan);
    Command* offCommand[2];
    offCommand[0] = new LightOffCommand(testLight);
    offCommand[1] = new FanOffCommand(testFan);

    //LightOnCommand* testLiOnCmnd = new LightOnCommand(testLight);
    //LightOffCommand* testLiOffCmnd = new LightOffCommand(testLight);
    //FanOnCommand* testFaOnCmnd = new FanOnCommand(testFan);
    //FanOffCommand* testFaOffCmnd = new FanOffCommand(testFan);


    Switch* OnOffSwitch = new Switch(onCommand,offCommand);
    //Switch* fanSwitch = new Switch(testFaOnCmnd,testFaOffCmnd);

    //lightSwitch -> flipUp();
    //lightSwitch -> flipDown();
    //fanSwitch -> flipUp();
    //anSwitch -> flipDown();
    OnOffSwitch->flipUp();
    OnOffSwitch->flipDown();

    /** As opposed to
     testLight -> turnOn();
     testLight -> turnOff();
     testFan -> startRotate();
     testFan -> stopRotate();
     */

    return 0;
}