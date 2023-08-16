#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:

    Dog();
    Dog(Dog const &a);
    ~Dog();
    Dog &operator=(Dog const &a);
    Brain *getBrain();
    void makeSound() const;

private:

    Brain *_brain;
};

#endif