#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon_for_human):
_name(str), _weapon(weapon_for_human)
{}

HumanA::~HumanA(){}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}