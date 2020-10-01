//
// Created by jo on 2020/09/01.
//
#ifndef A_IMAGEELEMENT_H
#define A_IMAGEELEMENT_H
#include "Poster.h"

class ImageElement : public Poster {
public:
    ImageElement(int h, Colours c) : Poster(h, c) {};
    void addLine(string line) override {lines.push_back(line);};
    void addImage(Poster *i) override {};
    void setColor(Colours c) override {colour = c;}
    void drawPoster() override {
        cout << termcolor::reset;
        switch (getColour()) {
            case Red:
                cout << termcolor::red;
                break;
            case Orange:
                cout << termcolor::color<252,132,3>;
                break;
            case Yellow:
                cout << termcolor::yellow;
                break;
            case Blue:
                cout << termcolor::blue;
                break;
            case Green:
                cout << termcolor::green;
                break;
            case White:
                cout << termcolor::bold;
                break;
            default:
                cout << termcolor::reset;
        }
        for (string l: lines) {
            cout << borderPixel << " " << l << " " << borderPixel << endl;
        }

    };
    void drawImageElements() override {}
    Poster * clone() override {
        vector<string> clonedLines;
        for (string l: lines) {
            clonedLines.push_back(l);
        }
        return new ImageElement(clonedLines, this->getHeight(), this->getColour());

    }
    ~ImageElement() {};

protected:
    ImageElement(vector<string> temp, int h, Colours c) : Poster(h, c) {
        this->lines = temp;
    }

private:
    vector<string> lines;
};


#endif //A_IMAGEELEMENT_H
