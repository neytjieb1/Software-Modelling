//
// Created by jo on 2020/09/01.
//

#include "WashHands.h"

void WashHands::drawPoster() {
    cout << termcolor::reset << termcolor::blue << termcolor::bold;
    ImageAddOns::drawPoster();
    /*ifstream inFile;
    inFile.open("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/washhands.txt");
    if (!inFile) {
        cerr << "Unable to open file";
        exit(1);
    }
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
        cout << ImageAddOns::fillAndPad(line, addOn->getWidth() - 27) << endl;
    }
    inFile.close();*/
}


WashHands::~WashHands() {

}

WashHands::WashHands(Poster *image) : ImageAddOns(image) {
    ifstream inFile;
    inFile.open("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/washhands.txt");
    if (!inFile) {
        cerr << "Unable to open file";
        exit(1);
    }
    string line;
    while (getline(inFile, line)) {
        static_cast<ImageElement*>(addOn)->addLine(line);
    }
    inFile.close();

}
