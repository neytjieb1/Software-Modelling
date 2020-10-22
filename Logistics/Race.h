//
// Created by jo-anne on 2020/10/22.
//

#ifndef LOGISTICS_RACE_H
#define LOGISTICS_RACE_H


#include "enums.h"
#include <string>
using namespace std;

class Race {
private:
    string location;
    TrackComplexity complexity;
    bool isInEurope;
    Race* next;
    Race* prev;
    //WeatherConditions raceDayWeather;
public:
    Race();
    /**
     * @details Constructor taking in variables.
     * @warning Should not be instantiated with only one race. Either both or none is better practice
     * @param next
     * @param prev
     */
    Race(string , TrackComplexity, bool, Race*next = nullptr, Race* prev = nullptr);
    void setNextRace(Race *);
    void setPrevRace(Race *);
    Race* nextRace();
    Race* prevRace();
    bool isRaceEuropean();
    string getLocation();
    TrackComplexity getTrackComplexity();
    /**
     * @details returns a randomly generated weather condition to be gotten for each separate day.
     * If so inclined, one may use only once at the beginning of each race.
     * @return
     */
    WeatherConditions getRaceDayWeather() ;

};



#endif //LOGISTICS_RACE_H
