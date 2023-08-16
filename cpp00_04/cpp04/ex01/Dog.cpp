#include "Dog.hpp"

Dog::Dog():Animal("dog"), _brain(new Brain)
{
    std::cout << "Dog constructor\n";
}

Dog::Dog(Dog const &a):Animal()
{
    *this = a;
    std::cout << "Dog copy constructor\n";
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor\n";
}

Dog &Dog::operator=(Dog const &a)
{
    Animal::operator=(a);
    _brain = new Brain;
    *_brain = *(a._brain);
    return (*this);
}

Brain *Dog::getBrain()
{
    return (_brain);
}

void Dog::makeSound() const
{
    std::cout << "woaf\n";
}