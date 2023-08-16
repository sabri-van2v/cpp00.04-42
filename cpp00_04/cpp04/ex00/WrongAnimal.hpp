#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:

    WrongAnimal(std::string type = "");
    WrongAnimal(WrongAnimal const &a);
    virtual ~WrongAnimal();
    WrongAnimal &operator=(WrongAnimal const &a);
    void makeSound() const;
    std::string getType() const;

protected:

    std::string _type;
};

#endif