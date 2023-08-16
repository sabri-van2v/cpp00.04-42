#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    std::cout << "constructor FragTrap called\n";
    _hit_point = 100;
    _energie_point = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "constructor FragTrap called\n";
    _hit_point = 100;
    _energie_point = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &ft):ClapTrap(ft)
{
    std::cout << "constructor of copy FragTrap called\n";
}

FragTrap& FragTrap::operator=(FragTrap const &ft)
{
    ClapTrap::operator=(ft);
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap called\n";
}

void FragTrap::attack(const std::string& target)
{
    if (_energie_point > 0 && _hit_point > 0)
    {
        _energie_point--;
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " point of damage !" << std::endl;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << _name << " : Want a high fives\n";
}