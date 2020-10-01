//
// Created by jo on 2020/09/14.
//

#ifndef A3_SUBJECT_H
#define A3_SUBJECT_H
#include "Observers.h"
#include <vector>
using namespace std;

class Subject {
public:
    void attach(Observers* observers) {mObservers.push_back(observers);};
    void notify() {
        for (Observers* o: mObservers) {
            o->update();
        }
    }
private:
    vector<Observers*> mObservers;

};


#endif //A3_SUBJECT_H
