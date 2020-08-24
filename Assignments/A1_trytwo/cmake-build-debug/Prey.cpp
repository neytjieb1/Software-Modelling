#include "Prey.h"

Prey::Prey()
{
    cout << "Prey Created." << endl;
}

Prey::Prey(double HP, string type, double damage)
{
    srand(0);
    cout << "Prey Created." << endl;
    this->setHP(HP);
    this->setType(type);
    this->setDamage(damage);
}

Prey::~Prey()
{
    cout << "Prey Destroyed." << endl;
}

Prey *Prey::clone()
{
    cout << "Cloned ";
    return new Prey(this->getHP(), this->getType(), this->getDamage());
}

double Prey::getHP()
{
    return this->HP;
}

void Prey::setHP(double HP)
{
    this->HP = HP;
}

string Prey::getType()
{
    return this->type;
}

void Prey::setType(string type)
{
    this->type = type;
}

double Prey::getDamage()
{
    return this->damage;
}

void Prey::setDamage(double damage)
{
    this->damage = damage;
}

bool Prey::run()
{
    return ((rand() % 100) + 1) > 50;
}

double Prey::fight()
{
    if ((rand() % 100 + 1) > 80)
        return this->getDamage();
    return 0;
}

double Prey::takeDamage(double damage)
{
    this->setHP(this->getHP() - damage);
    return this->getHP();
}

void Prey::printInfo() {
    cout << "Prey:\tHP: " << HP << "\tDamage: " << damage << endl;
}