//
// Created by jo on 2020/10/16.
//

#ifndef PREMODELLING_RACE_H
#define PREMODELLING_RACE_H

#include "enums.h"
#include <string>
using namespace std;

class Race {
private:
    string RaceLocation;
    TrackComplexity trackComplexity;
    bool isEuropeanRace;
    Race* nextRace;
    //WeatherConditions raceDayWeather;
public:
    bool isRaceEuropean() {
        return isEuropeanRace;
    };
    string getLocation() {
        return RaceLocation;
    };
    TrackComplexity getTrackComplexity() {
        return trackComplexity;
    }
    /**
     * @details returns a randomly generated weather condition to be gotten for each separate day.
     * If so inclined, one may use only once at the beginning of each race.
     * @return
     */
    WeatherConditions getRaceDayWeather() {
        int r = rand()%3;
        switch (r) {
            case 0:
                return Wet;
                break;
            case 1:
                return Dry;
                break;
            case 2:
                return Rainy;
                break;

        }
    };

};


#endif //PREMODELLING_RACE_H
