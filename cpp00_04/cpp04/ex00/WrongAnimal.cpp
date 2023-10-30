#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type):_type(type)
{
    std::cout << "WrongAnimal constructor\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &a)
{
    std::cout << "WrongAnimal copy constructor\n";
    *this = a;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor\n";
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &a)
{
    _type = a._type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "default\n";
}