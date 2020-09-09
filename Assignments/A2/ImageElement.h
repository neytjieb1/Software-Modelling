//
// Created by jo on 2020/09/01.
//

#ifndef A_IMAGEELEMENT_H
#define A_IMAGEELEMENT_H
#include "Poster.h"
#include <cstring>

class ImageElement: public Poster {
public:
    ImageElement() : Poster() {};
    void addLine(string line) override {lines.push_back(line);};
    void addImage(Poster *p) override {};
    void drawPoster() override {
        for (string l: lines) {
            cout << l << endl;
        }
    };
    ~ImageElement() {};

private:
    vector<string> lines;
};


#endif //A_IMAGEELEMENT_H
