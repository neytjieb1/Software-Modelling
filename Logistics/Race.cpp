//
// Created by jo-anne on 2020/10/22.
//

#include "Race.h"

Race::Race() {
    location = "outer space";
    complexity = Difficult;
    isInEurope = false;
    next = nullptr;
    prev = nullptr;
}

Race::Race(string loc, TrackComplexity comp, bool eur, Race *nextR, Race* prevR) {
    location = loc;
    complexity = comp;
    isInEurope = eur;
    next = nextR;
    prev = prevR;
}

bool Race::isRaceEuropean() {
    return isInEurope;
}

string Race::getLocation() {
    return location;
}

TrackComplexity Race::getTrackComplexity() {
    return complexity;
}

WeatherConditions Race::getRaceDayWeather() {
    int r = rand() % 3;
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
}

void Race::setNextRace(Race *race) {
    next = race;
}

void Race::setPrevRace(Race *race) {
    prev = race;
}

Race *Race::nextRace() {
    return next;
}

Race *Race::prevRace() {
    return prev;
}







