#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("unknown"), _hit_point(10),
_energie_point(10), _attack_damage(0)
{
    std::cout << "constructor ClapTrap called\n";
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_point(10),
_energie_point(10), _attack_damage(0)
{
    std::cout << "constructor ClapTrap called\n";
}

ClapTrap::ClapTrap(ClapTrap const &ct)
{
    std::cout << "constructor of copy ClapTrap called\n";
    *this = ct;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor ClapTrap called\n";
}

ClapTrap& ClapTrap::operator=(ClapTrap const &ct)
{
    _name = ct._name;
    _hit_point = ct._hit_point;
    _energie_point = ct._energie_point;
    _attack_damage = ct._attack_damage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_energie_point > 0 && _hit_point > 0)
    {
        _energie_point--;
        std::cout << _name << " attacks " << target << ", causing " << _attack_damage << " point of damage !" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_point > 0)
    {
        std::cout << _name << " take " << amount << " damage !" << std::endl;
        _hit_point -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energie_point > 0 && _hit_point > 0)
    {
        _energie_point--;
        _hit_point += amount;
        std::cout << _name << " repaired " << amount << " hit point !" << std::endl;
    }
}