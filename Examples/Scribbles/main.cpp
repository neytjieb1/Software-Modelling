#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {cout << "Construct Vehicle\n";};
    virtual ~Vehicle() {};
    virtual int fire() = 0;
    virtual void takeDamage(int) = 0;
    virtual void drawUnit() = 0;

protected:
    int damage;
};

class SiegeTank : public Vehicle {
public:
    SiegeTank() {cout << "Construct SiegeTank" << endl;};
    virtual ~SiegeTank() {};
    virtual int fire() {cout << "fire" << endl;};
    virtual void takeDamage(int i) {cout << "Damage" << endl;};
    virtual void drawUnit() {cout << "drawing\n";};
protected:
    int damage;
};

class Upgrade : public Vehicle {
public:
    Upgrade(Vehicle* v) {vehicle = v;};
    virtual~ Upgrade() {};
    /*virtual int fire() override = 0;
    virtual void takeDamage(int) override = 0;
    virtual void drawUnit() override = 0;*/

private:
    Vehicle* vehicle;
    int damage;
};

/*class ConcreteUpgrade: public Upgrade {
public:
    ConcreteUpgrade() : Upgrade(new SiegeTank()) {};
    ~ConcreteUpgrade() {};
    int fire() override {cout << "fire\n";};
    void takeDamage(int) override {cout << "damage\n";};
    void drawUnit() override {cout << "draw\n";};
};*/


int main() {
    SiegeTank* st = new SiegeTank();
    st->drawUnit();

    //Upgrade* cUpgrade = new ConcreteUpgrade();
    //cUpgrade->takeDamage(5);
    return 0;
}
