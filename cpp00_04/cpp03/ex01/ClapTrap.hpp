#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &ct);
    ~ClapTrap();
    ClapTrap &operator=(ClapTrap const &ct);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:

    std::string _name;
    int         _hit_point;
    int         _energie_point;
    int         _attack_damage;
};

#endif