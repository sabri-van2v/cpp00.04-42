#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(FragTrap const &st);
    FragTrap &operator=(FragTrap const &st);
    void attack(const std::string& target);
    void highFivesGuys();
};

#endif