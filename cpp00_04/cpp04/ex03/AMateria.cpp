#include "AMateria.hpp"

AMateria::AMateria(std::string const &type):_type(type)
{}

AMateria::AMateria():_type("default")
{}

AMateria::AMateria(AMateria const &a)
{
    *this = a;
}

AMateria::~AMateria()
{}

AMateria &AMateria::operator=(AMateria const &a)
{
    _type = a._type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "cannot use the default materia against " << target.getName() << std::endl;
}
