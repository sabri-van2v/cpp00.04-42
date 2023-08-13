#include "HumanB.hpp"

HumanB::HumanB(std::string str, Weapon &weapon_for_human):
_name(str), _weapon(&weapon_for_human)
{}

HumanB::HumanB(std::string str):
_name(str), _weapon(0)
{}

HumanB::~HumanB(){}

void    HumanB::setWeapon(Weapon &weapon_for_human)
{
    _weapon = &weapon_for_human;
}

void    HumanB::attack()
{
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " attacks with their " << "his fits" << std::endl;
}