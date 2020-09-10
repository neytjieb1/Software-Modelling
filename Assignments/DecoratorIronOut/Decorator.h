//
// Created by jo on 2020/09/09.
//

#ifndef DECORATORIRONOUT_DECORATOR_H
#define DECORATORIRONOUT_DECORATOR_H

#include <iostream>
#include <vector>
#include <fstream>
#include "termcolor.h"
using  namespace std;

class ImageElement;
enum Colours {Red, Orange, Yellow, Blue, Green, White};

class Poster {
public:
    Poster(int h, Colours c = White) {
        height = h;
        colour = c;};
    virtual void drawPoster() = 0;
    virtual void drawImage() = 0;
    virtual void addLine(string line) = 0;
    virtual void addImage(Poster* i) = 0;
    virtual void setColor(Colours c) = 0;
    virtual Poster* clone() = 0;

    void setHeight(int h) {height = h;};
    int getHeight() {return height;};
    virtual ~Poster() {};

private:
    int height;

protected:
    Colours colour;
    char borderPixel = 'x';
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
};

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
    void drawImage() override {}


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

    void drawPoster() override {
        string endLine = " THE MESSAGE IS FROM THE GOVERNMENT ";
        for (int i = 0; i < 14; ++i) {
            endLine = borderPixel + endLine + borderPixel;
        }
        cout <<termcolor::white << termcolor::bold << termcolor::italic << endLine << endl;
        for (Poster* p: imageHeight) {
            p->drawPoster();
        }
        cout <<termcolor::white << termcolor::bold << termcolor::italic << endLine << endl;
    };
    void drawImage() override {
        for (Poster* p: imageHeight) {
            p->drawImage();
        }
    };
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

class Decorator : public Poster {
public:
    Decorator() : Poster(0) {topping = nullptr;};
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
    void drawImage() override{
        if (topping == nullptr) return;
        else {
            topping->drawImage();
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
    ~Decorator() { delete topping; };
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

class Mask : public Decorator {
public:
    Mask() : Decorator() {
        readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/mask_pic.txt");
    }
    void drawPoster() override {
        /*for (string l: lines) {
            addLine(l);
        }*/
        Decorator::drawPoster();
    }
    void drawImage() override {
        for (string l: lines) {
            addLine(l);
        }
        Decorator::drawImage();
    }
    ~Mask() {};

};

class TemperatureCheck: public Decorator {
public:
    TemperatureCheck() {
        readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/temp_gun_pic.txt");
    } ;
    ~TemperatureCheck() {};
    void drawPoster() override {
        /*for (string l: lines) {
            addLine(l);
        }*/
        Decorator::drawPoster();
    };
    void drawImage() override {
        for (string l: lines) {
            addLine(l);
        }
        Decorator::drawImage();
    }
};

class WashHands : public Decorator {
public:
    WashHands() : Decorator() {
        readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/washHands_pic.txt");
    }
    void drawPoster() override {
        /*for (string l: lines) {
            addLine(l);
        }*/
        Decorator::drawPoster();
    }
    void drawImage() override {
        for (string l: lines) {
            addLine(l);
        }
        Decorator::drawImage();
    }
    ~WashHands() {};
};

class UseHandSanitiser : public Decorator{
public:
    UseHandSanitiser() {
        readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/sanitiser_pic.txt");
    };
    void drawPoster() override {
        /*for (string l: lines) {
            addLine(l);
        }*/
        Decorator::drawPoster();
    };
    void drawImage() override {
        for (string l: lines) {
            addLine(l);
        }
        Decorator::drawImage();
    }
    ~UseHandSanitiser() {};


};


#endif //DECORATORIRONOUT_DECORATOR_H
