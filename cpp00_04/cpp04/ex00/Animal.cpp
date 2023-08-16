#include "Animal.hpp"

Animal::Animal(std::string type):_type(type)
{
    std::cout << "Animal constructor\n";
}

Animal::Animal(Animal const &a)
{
    *this = a;
    std::cout << "Animal copy constructor\n";
}

Animal::~Animal()
{
    std::cout << "Animal destructor\n";
}

Animal &Animal::operator=(Animal const &a)
{
    _type = a._type;
    return (*this);
}

std::string Animal::getType() const
{
    return (_type);
}

void Animal::makeSound() const
{
    std::cout << "default\n";
}