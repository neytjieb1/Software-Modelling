//
// Created by jo on 2020/10/17.
//

#ifndef PREMODELLING_RACINGDEPT_H
#define PREMODELLING_RACINGDEPT_H

#include "Colleague.h"
#include "Car.h"
class RacingDept : public Colleague {
public:
    void registerForSeason(Logistics* logisticsDept){

    };
//    void deregisterForSeason(Logistics *) override;
    //void notify(Car *, Driver *, Container *) override;
    //void notify(Car *, TyresCompounds) override;
    void HireEmployees(int budget) override{

    };// die groot indiensnemingsproses
    Strategy* PlanSeasonStrategy(int budget){

    };
    /*Hierdie is soos die pre-season, oorhoofse, "this is the plan, guys" strategie.
     Hy kan verfyn word met elke resies as julle wil en ons dan net notify(tyres, riskLevel) soos julle goed dink.
     Wat julle wel hierso moet doen vir ons is om een van die drie tyreCompound tipes te kies (en te stoor) en dan ook vir ons die riskLevel te kies.
     Ons gaan die riskLevel en tyreCompounds kies om met die EngDept te werk, so sal julle ons notify() asb?*/
    Driver* trainDriver(Driver*){

    };
    //vir sy XP om te verander. Ons gaan dit pre-season roep en dan kan julle dit weer in die season roep as julle wil?
    void preRaceArrival(Car*, Driver*, Race*, Container*){

    };
    /*gaan julle qualify() hierso geroep word? Of moet ons dit self roep.
    Sal julle asb ook hier net ons container "unpack"?
    En dan kan julle weer train of strategise of enigiets anders doen wat julle wil.*/
    int RacingWeekend(){

    };//ons wil net die punt terughê hierso. Ek verstaan Leaderboard nog nie mooi nie, maar dalk stuur julle dit eerder terug? Stry maar. Sover ons verstaan gaan julle die HELE race in dié funskie simuleer, right?
    void postRacePackUp(){

    };
    /* eintlik wil ons net hê dat julle hier cout << "Container being packed" en om sy state te verander.
    Dan wil ons die Car, Drywer en Container terughê deurdat julle ons notify(), as julle kyk na ons UML.
    */


};

#endif //PREMODELLING_RACINGDEPT_H
