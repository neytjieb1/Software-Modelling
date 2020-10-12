//
// Created by jo on 2020/10/03.
//

#ifndef A4__COMMAND_H
#define A4__COMMAND_H

class RCVehicle;

class _Command {
protected:
    RCVehicle* receiver;
public:
    _Command(RCVehicle* r) : receiver(r) {} ;
    virtual void execute() = 0;
    virtual void undo() = 0;
};


#endif //A4__COMMAND_H
