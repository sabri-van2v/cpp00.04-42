#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:

    WrongCat();
    WrongCat(WrongCat const &a);
    ~WrongCat();
    WrongCat &operator=(WrongCat const &a);
    void makeSound() const;
};

#endif