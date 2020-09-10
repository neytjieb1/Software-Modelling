//
// Created by jo on 2020/09/01.
//

#ifndef A_IMAGEADDONS_H
#define A_IMAGEADDONS_H
#include "Poster.h"
#include "ImageElement.h"

#include <fstream>
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class ImageAddOns : public Poster {
public:
    ImageAddOns() : Poster(0) {topping = nullptr;};
    void addLine(string line) override {
        if (topping == nullptr) {
            cout << "Do Nothing" << endl;
        }
        else {
            topping->addLine(line);
        }
    };
    void addImage(Poster *i) override {
        if (topping == nullptr) {
            topping = i;
            //<static_cast<Decorator*>(i)->getLines();
            //lines.insert(this->lines.end(), )
        } else{
            topping->addImage(i);
        }
    }
    void setColor(Colours c) override {};
    void drawPoster() override {
        if (topping == nullptr) return;
        else {
            topping->drawPoster();
        }
    }
    Poster * clone() override {
        if (topping== nullptr) {
            return nullptr;
        }
        else {
            return topping->clone();
        }
    };
    vector<string> getLines() {return lines;};
protected:
    ~ImageAddOns() { delete topping; };
    void readFile(string filename) {
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
    }
    vector<string> lines;
private:
    Poster* topping;
};


#endif //A_IMAGEADDONS_H
