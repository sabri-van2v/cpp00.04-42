#include "Dog.hpp"

Dog::Dog():Animal("dog")
{
    std::cout << "Dog constructor\n";
}

Dog::Dog(Dog const &a):Animal(a)
{
    std::cout << "Dog copy constructor\n";
}

Dog::~Dog()
{
    std::cout << "Dog destructor\n";
}

Dog &Dog::operator=(Dog const &a)
{
    Animal::operator=(a);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "woaf\n";
}