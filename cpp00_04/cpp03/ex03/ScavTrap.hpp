#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:

    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(ScavTrap const &st);
    ScavTrap &operator=(ScavTrap const &st);
    void attack(const std::string& target);
    void guardGate();
};

#endif