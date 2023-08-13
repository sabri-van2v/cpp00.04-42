#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:

    HumanB(std::string str, Weapon &weapon_for_human);
    HumanB(std::string str);
    ~HumanB();

    void    attack();
    void    setWeapon(Weapon &weapon_for_human);

    private:

    std::string _name;
    Weapon      *_weapon;
};

#endif