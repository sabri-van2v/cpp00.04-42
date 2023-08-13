#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{}

Zombie::Zombie(): _name("")
{}

Zombie::~Zombie()
{
    std::cout << _name << ": destroy" << std::endl;
}

void    Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    _name = name;
}