#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:

    HumanA(std::string str, Weapon &weapon_for_human);
    ~HumanA();
    void    attack();

    private:

    std::string _name;
    Weapon      &_weapon;
};

#endif