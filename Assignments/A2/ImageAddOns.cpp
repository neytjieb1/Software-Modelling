//
// Created by jo on 2020/09/01.
//

#include "ImageAddOns.h"




/*string ImageAddOns::fillAndPad(string line, int end) {
    vector<char> newLine;
    for (int i = 0; i < 16; ++i) {
        newLine.push_back(borderPixel);
    }
    newLine.insert(newLine.end(), line.begin(), line.end());

    for (int i = 0; i < end; ++i) {
        newLine.push_back(borderPixel);
    }

    return string(newLine.begin(), newLine.end());
}*/
/*ImageAddOns::ImageAddOns() {
    topping = nullptr;
}

void ImageAddOns::addLine(string line) {
    if (topping == nullptr) {
        cout << "Do Nothing" << endl;
    }
    else {
        topping->addLine(line);
    }
}

void ImageAddOns::addImage(Poster *i) {
    if (topping == nullptr) {
        topping = i;
    } else{
        topping->addImage(i);
    }
}

void ImageAddOns::drawPoster() {
    if (topping == nullptr) return;
    else {
        topping->drawPoster();
    }
}

ImageAddOns::~ImageAddOns() {
    delete topping;
}

void ImageAddOns::readFile(string filename) {
    ifstream inFile;
    inFile.open(filename);
    if (!inFile) {
        cerr << "Unable to open file";
        exit(1);
    }
    string line;
    while (getline(inFile, line)) {
        lines.push_back(line);
    }
    inFile.close();
}*/
