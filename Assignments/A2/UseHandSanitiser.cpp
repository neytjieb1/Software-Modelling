//
// Created by jo on 2020/09/01.
//

#include "UseHandSanitiser.h"


void UseHandSanitiser::drawPoster() {
    cout << termcolor::reset << termcolor::green;
    ImageAddOns::drawPoster();

/*    ifstream inFile;
    inFile.open("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/sanitiser.txt");
    if (!inFile) {
        cerr << "Unable to open file";
        exit(1);
    }
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
        cout << ImageAddOns::fillAndPad(line, addOn->getWidth() - 33) << endl;
    }
    inFile.close();*/
}

UseHandSanitiser::~UseHandSanitiser() {}

UseHandSanitiser::UseHandSanitiser(Poster *image) : ImageAddOns(image) {
    ifstream inFile;
    inFile.open("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/sanitiser.txt");
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
