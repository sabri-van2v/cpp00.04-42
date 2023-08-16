#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character :  public ICharacter
{
public:
    Character(std::string name = "unknown");
    Character(Character const &a);
    virtual ~Character();
    Character &operator=(Character const &a);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
private:
    AMateria *_items[4];
    std::string _name;
};

#endif