#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:

    Weapon();
    Weapon(std::string str);
    ~Weapon();

    void        setType(std::string str);
    std::string getType();

    private:

    std::string  _type;
};

#endif