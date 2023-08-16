#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{}

Ice::Ice(Ice const &a):AMateria()
{
    *this = a;
}

Ice::~Ice()
{}

Ice &Ice::operator=(Ice const &a)
{
    AMateria::operator=(a);
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
