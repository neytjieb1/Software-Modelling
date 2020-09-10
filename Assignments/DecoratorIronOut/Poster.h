//
// Created by jo on 2020/09/10.
//

#ifndef DECORATORIRONOUT_POSTER_H
#define DECORATORIRONOUT_POSTER_H
#include <iostream>
using namespace std;

class ImageElement;
enum Colours {Red, Orange, Yellow, Blue, Green, White};

class Poster {
public:
    Poster(int h, Colours c = White) {
        height = h;
        colour = c;};
    virtual void drawPoster() = 0;
    virtual void addLine(string line) = 0;
    virtual void addImage(Poster* i) = 0;
    void setColor(Colours c) {
        colour = c;
    };
    virtual Poster* clone() = 0;

    void setHeight(int h) {height = h;};
    int getHeight() {return height;};
    virtual ~Poster() {};

private:
    int height;
    Colours colour;

protected:
    Colours getColour() {
/*
        switch (colour) {
            Red:
                cout << termcolor::red;
                break;
            Orange:
                cout << termcolor::color<252,132,3>;
                break;
            Yellow:
                cout << termcolor::yellow;
                break;
            Blue:
                cout << termcolor::blue;
                break;
            Green:
                cout << termcolor::green;
                break;
            White:
                cout << termcolor::white;
                break;
        }
*/
        return colour;
    }
    char borderPixel = '|';
};

class ImageElement : public Poster {
public:
    ImageElement(int h, Colours c) : Poster(h, c) {};
    void addLine(string line) override {lines.push_back(line);};
    void addImage(Poster *i) override {};
    void drawPoster() override {
        cout << termcolor::reset;
        if (getColour() == Red) cout << termcolor::red;
        if (getColour() == Orange) cout << termcolor::color<252,132,3>;
        if (getColour() == Yellow) cout << termcolor::yellow;
        if (getColour() == Blue) cout << termcolor::blue;
        if (getColour() == Green) cout << termcolor::green;
        if (getColour() == White) cout << termcolor::white;
        for (string l: lines)
            cout << l << endl; };
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
        cout <<termcolor::white << "Header" << endl;
        for (Poster* p: imageHeight) {
            cout << "drawing an image" << endl;
            p->drawPoster();
        }
        cout << termcolor::reset << "Footer" << endl;
    };
    void addImage(Poster *i) override {
        if (imageHeight.size() < getHeight()) {
            imageHeight.push_back( i);
        }
        else {
            cout << "Full. Can't add more to poster" << endl;
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

#endif //DECORATORIRONOUT_POSTER_H
