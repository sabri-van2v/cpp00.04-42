#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:

    MateriaSource();
    MateriaSource(MateriaSource const &a);
    MateriaSource &operator=(MateriaSource const &a);
    ~MateriaSource();
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);

private:

    AMateria *_materias[4];
};

#endif