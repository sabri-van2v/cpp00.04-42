#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
public:

    Animal(std::string type = "");
    Animal(Animal const &a);
    virtual ~Animal();
    Animal &operator=(Animal const &a);
    virtual void makeSound() const;
    std::string getType() const;

protected:

    std::string _type;
};

#endif