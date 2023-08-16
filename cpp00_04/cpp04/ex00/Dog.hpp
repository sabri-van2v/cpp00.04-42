#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:

    Dog();
    Dog(Dog const &a);
    ~Dog();
    Dog &operator=(Dog const &a);
    void makeSound() const;
};

#endif