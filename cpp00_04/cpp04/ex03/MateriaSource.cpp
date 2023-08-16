#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &a)
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
    *this = a;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &a)
{
    if (this == &a)
        return (*this);
    for (int i = 0; i < 4; i++)
    {
        delete _materias[i];
        _materias[i] = NULL;
    }
    for (int i = 0; i < 4; i++)
    {
        if (a._materias[i])
            _materias[i] = a._materias[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_materias[i])
            delete _materias[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (m)
        for (int i = 0; i < 4; i++)
            if (_materias[i] == NULL)
            {
                _materias[i] = m;
                return ;
            }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
        if (_materias[i] && _materias[i]->getType() == type)
            return (_materias[i]->clone());
    return (0);
}

