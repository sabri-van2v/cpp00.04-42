#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "constructor ScavTrap called\n";
    _hit_point = 100;
    _energie_point = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout << "constructor ScavTrap called\n";
    _hit_point = 100;
    _energie_point = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &st):ClapTrap(st)
{
    std::cout << "constructor of copy ScavTrap called\n";
}

ScavTrap& ScavTrap::operator=(ScavTrap const &st)
{
    ClapTrap::operator=(st);
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap called\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (_energie_point > 0 && _hit_point > 0)
    {
        _energie_point--;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " point of damage !" << std::endl;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << _name << " : Gate keeper on\n";
}