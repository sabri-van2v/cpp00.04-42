#include "Weapon.hpp"

Weapon::Weapon(): _type("his fist"){}

Weapon::Weapon(std::string str): _type(str){}

Weapon::~Weapon(){}

std::string Weapon::getType()
{
    return (this->_type);
}

void    Weapon::setType(std::string str)
{
    _type = str;
}