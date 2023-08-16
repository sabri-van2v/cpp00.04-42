#include "Character.hpp"

Character::Character(std::string name):_name(name)
{
    for (int i = 0; i < 4; i++)
        _items[i] = NULL;
}

Character::Character(Character const &a)
{
    for (int i = 0; i < 4; i++)
        _items[i] = NULL;
    *this = a;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete _items[i];
}

Character &Character::operator=(Character const &a)
{
    if (this == &a)
        return (*this);
    _name = a._name;
    for (int i = 0; i < 4; i++)
    {
        delete _items[i];
        _items[i] = NULL;
    }
    for (int i = 0; i < 4; i++)
    {
        if (a._items[i])
            _items[i] = a._items[i]->clone();
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    if (m)
        for (int i = 0; i < 4; i++)
            if (!_items[i])
            {
                _items[i] = m;
                return ;
            }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        if (_items[idx])
        {
            delete _items[idx];
            _items[idx] = 0;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3)
        if (_items[idx])
            _items[idx]->use(target);
}
