//
// Created by jo on 2020/09/01.
//

#include "TemperatureCheck.h"


void TemperatureCheck::drawPoster() {
    /*ifstream inFile;
    inFile.open("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/tempCheck.txt");
    if (!inFile) {
        cerr << "Unable to open file";
        exit(1);
    }
    string line;
    while (getline(inFile, line)) {
        cout << ImageAddOns::fillAndPad(line, addOn->getWidth() - 30) << endl;
        static_cast<ImageElement*>(addOn)->addLine(line);

    }
    inFile.close();*/
    cout << termcolor::reset << termcolor::cyan << termcolor::blink;
    ImageAddOns::drawPoster();
}


TemperatureCheck::~TemperatureCheck() {}

TemperatureCheck::TemperatureCheck(Poster *image) : ImageAddOns(image) {
    ifstream inFile;
    inFile.open("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/tempCheck.txt");
    if (!inFile) {
        cerr << "Unable to open file";
        exit(1);
    }
    string line;
    while (getline(inFile, line)) {
        if (this->addOn == nullptr) {
            static_cast<ImageElement*>(addOn)->addLine(line);
        }
        else{
            cout << "Keep going" << endl;
        }

    }
    inFile.close();
}
