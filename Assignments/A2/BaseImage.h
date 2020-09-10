//
// Created by jo on 2020/09/01.
//

#ifndef A_BASEIMAGE_H
#define A_BASEIMAGE_H
#include "Poster.h"

class BaseImage : public Poster {
public:
    BaseImage(int h) : Poster(h) {
        setHeight(h);
        imageHeight.reserve(h);
    };
    ~BaseImage() {
        for (Poster* p: imageHeight) {
            delete p; //to make sure we delete correctly when passing image elements through.
            //of particular importance in prototype
        }
    }
    void addLine(string line) override {};
    void drawPoster() override {
        string endLine = " THE MESSAGE IS FROM THE GOVERNMENT ";
        for (int i = 0; i < 14; ++i) {
            endLine = borderPixel + endLine + borderPixel;
        }
        cout <<termcolor::white << termcolor::bold << termcolor::italic << endLine << endl;
        for (Poster* p: imageHeight) {
            p->drawPoster();
        }
        cout <<termcolor::white << termcolor::bold << termcolor::italic << endLine << termcolor::reset << endl;
    };
    void drawImageElements() override {
        for (Poster* p: imageHeight) {
            p->drawImageElements();
        }
    };
    void addImage(Poster *i) override {
        if (imageHeight.size() < getHeight()) {
            imageHeight.push_back( i);
        }
        else {
            cout << "Full. Can't add more to poster" << endl;
        }
    }
    void setColor(Colours c) override {
        for (Poster* p: imageHeight) {
            p->setColor(c);
        }
    }
    Poster * clone() override {
        vector<Poster*> temp;
        for (Poster* p: imageHeight) {
            temp.push_back(p->clone());
        }
        return new BaseImage(temp, getHeight(), getColour());
    }

private:
    vector<Poster*> imageHeight;
    BaseImage(vector<Poster*> tempImages, int h, Colours c) : Poster(h, c) {
        this->imageHeight = tempImages;
    };
};

#endif //A_BASEIMAGE_H
