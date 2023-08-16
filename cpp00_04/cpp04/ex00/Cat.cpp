#include "Cat.hpp"

Cat::Cat():Animal("cat")
{
    std::cout << "Cat constructor\n";
}

Cat::Cat(Cat const &a):Animal(a)
{
    std::cout << "Cat copy constructor\n";
}

Cat::~Cat()
{
    std::cout << "Cat destructor\n";
}

Cat &Cat::operator=(Cat const &a)
{
    Animal::operator=(a);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "meow\n";
}