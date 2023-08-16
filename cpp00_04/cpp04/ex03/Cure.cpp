#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{}

Cure::Cure(Cure const &a):AMateria()
{
    *this = a;
}

Cure::~Cure()
{}

Cure &Cure::operator=(Cure const &a)
{
    AMateria::operator=(a);
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}
