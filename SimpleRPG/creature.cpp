#include "creature.h"

char Creature::symbol() const
{
    return mSymbol;
}

int Creature::health() const
{
    return mHealth;
}

int Creature::damage() const
{
    return mDamage;
}

int Creature::gold() const
{
    return mGold;
}

void Creature::reduceHealth(int health)
{
    mHealth -= health;
}

bool Creature::isDead()
{
    return mHealth <= 0;
}

void Creature::addGold(int gold)
{
    mGold += gold;
}

std::string Creature::name() const
{
    return mName;
}
