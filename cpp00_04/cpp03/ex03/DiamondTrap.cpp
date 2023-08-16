#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap("unknown_clap_name"), _name("unknown")
{
    std::cout << "constructor DiamondTrap called\n";
    _hit_point = 100;
	_energie_point = 50;
	_attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), _name(name)
{
    std::cout << "constructor DiamondTrap called\n";
    _hit_point = 100;
	_energie_point = 50;
	_attack_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &dt):ClapTrap(dt), ScavTrap(), FragTrap()
{
    std::cout << "constructor of copy DiamondTrap called\n";
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &dt)
{
    ClapTrap::operator=(dt);
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor DiamondTrap called\n";
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "name : " << _name << " and sub-object : " << ClapTrap::_name << std::endl;
}
