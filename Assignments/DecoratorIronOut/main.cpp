#include <iostream>
#include <vector>
#include <fstream>
using  namespace std;


class ImageElement;

class Poster {
public:
    Poster() {height = 0;};
    virtual void drawPoster() = 0;
    virtual void addLine(string line) = 0;
    virtual void addImage(Poster* i) = 0;
    void setHeight(int h) {height = h;};
//    void setLine(string l) {line = l;};
    int getHeight() {return height;};
    virtual ~Poster() {};

private:
    int height;
    string line;
};

class ImageElement : public Poster {
public:
    ImageElement() : Poster() {};
    void addLine(string line) override {lines.push_back(line);};
    void addImage(Poster *i) override {};
    void drawPoster() override {
        for (string l: lines)
            cout << l << endl; };
    ~ImageElement() {};

private:
    vector<string> lines;
};

class BaseImage : public Poster {
public:
    BaseImage() : Poster() {
        int h = 5;
        setHeight(h);
        imageHeight.reserve(getHeight());
    };
    void addLine(string line) override {};
    void drawPoster() override {
        cout << "Header" << endl;
        for (Poster* p: imageHeight) {
            cout << "drawing an image" << endl;
            p->drawPoster();
        }
        cout << "Footer" << endl;
    };
    void addImage(Poster *i) override {
        //if (getHeight() < imageHeight.size()) {
            imageHeight.push_back( i);
        //}
        //else {
        // cout << "Full. Can't add more to poster" << endl;
        //}
    }


private:
    vector<Poster*> imageHeight;
};

class Decorator : public Poster {
public:
    Decorator() {topping = nullptr;};
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
        } else{
            topping->addImage(i);
        }
    }
    //virtual void drawImage() {};
    void drawPoster() override {
        if (topping == nullptr) return;
        else {
            topping->drawPoster();
        }
    }
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
        readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/maskAlert.txt");
    }
    void drawPoster() override {
        addLine("MASK MASK MASK");
        for (string l: lines) {
            addLine(l);
        }
        Decorator::drawPoster();
    }
    ~Mask() {};

};

class Sanitiser : public Decorator {
public:
    Sanitiser() : Decorator() {
        readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/sanitiser.txt");
    }
    void drawPoster() override {
        addLine("SANITISE SANITISE SANITISE");
        for (string l: lines) {
            addLine(l);
        }
        Decorator::drawPoster();
    }
    ~Sanitiser() {};
};

class WashHands : public Decorator {
public:
    WashHands() : Decorator() {
        readFile("/home/jo/CLionProjects/Software-Modelling/Assignments/A2/washhands.txt");
    }
    void drawPoster() override {
        addLine("WASH WASH WASH");
        for (string l: lines) {
            addLine(l);
        }
        Decorator::drawPoster();
    }
    ~WashHands() {};
};


int main() {


    Poster* e1;
    e1 = new Mask();
    e1->addImage(new Sanitiser());
    e1->addImage(new Mask());
    e1->addImage(new ImageElement());

    Poster* e2;
    e2 = new Sanitiser();
    e2->addImage(new ImageElement());
    e2->addImage(new ImageElement());

    Poster* e3 = new WashHands();
    e3->addImage(new ImageElement());

    Poster* poster = new BaseImage();
    poster->addImage(e1);
    poster->addImage(e2);
    poster->addImage(e3);

    poster->drawPoster();

    delete e1;
    delete e2;
    delete poster;


    return 0;

}
