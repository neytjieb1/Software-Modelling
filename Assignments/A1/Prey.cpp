#include "Prey.h"

Prey::Prey()
{
    cout << "Prey Created." << endl;
}

Prey::Prey(int HP, string type, int damage)
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
    return new Prey(this->getHP(), this->getType(), this->getDamage());
}

int Prey::getHP()
{
    return this->HP;
}

void Prey::setHP(int HP)
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

int Prey::getDamage()
{
    return this->damage;
}

void Prey::setDamage(int damage)
{
    this->damage = damage;
}

bool Prey::run()
{
    return ((rand() % 100) + 1) > 50;
}

int Prey::fight()
{
    if ((rand() % 100 + 1) > 80)
        return this->getDamage();
    return 0;
}

int Prey::takeDamage(int damage)
{
    this->setHP(this->getHP() - damage);
    return this->getHP();
}