#ifndef CREATURE_H
#define CREATURE_H

#include <string>

class Creature
{
private:
    std::string mName;
    char mSymbol;
    int mHealth;
    int mDamage;
    int mGold;

public:
    void reduceHealth(int health);
    bool isDead();
    void addGold(int gold);

    std::string name() const;
    char symbol() const;
    int health() const;
    int damage() const;
    int gold() const;
};

#endif // CREATURE_H
