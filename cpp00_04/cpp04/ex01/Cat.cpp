#include "Cat.hpp"

Cat::Cat():Animal("cat"), _brain(new Brain)
{
    std::cout << "Cat constructor\n";
}

Cat::Cat(Cat const &a):Animal()
{
    *this = a;
    std::cout << "Cat copy constructor\n";
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor\n";
}

Cat &Cat::operator=(Cat const &a)
{
    Animal::operator=(a);
    _brain = new Brain;
    *_brain = *(a._brain);
    return (*this);
}

Brain *Cat::getBrain()
{
    return (_brain);
}

void Cat::makeSound() const
{
    std::cout << "meow\n";
}