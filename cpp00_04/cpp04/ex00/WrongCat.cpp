#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("cat")
{
    std::cout << "WrongCat constructor\n";
}

WrongCat::WrongCat(WrongCat const &a):WrongAnimal(a)
{
    std::cout << "WrongCat copy constructor\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor\n";
}

WrongCat &WrongCat::operator=(WrongCat const &a)
{
    WrongAnimal::operator=(a);
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "meow\n";
}