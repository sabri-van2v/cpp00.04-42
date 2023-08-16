#include "Brain.hpp"
#include <cstdlib>

Brain::Brain()
{
    std::string list[4] = {
        "eat",
        "sleep",
        "drink",
        "play"
    };
    for (int i = 0; i < 100; i++)
        _ideas[i] = list[rand() % 4];
    std::cout << "Brain constructor\n";
}

Brain::Brain(Brain const &a)
{
    *this = a;
    std::cout << "Brain copy constructor\n";
}

Brain::~Brain()
{
    std::cout << "Brain destructor\n";
}

Brain &Brain::operator=(Brain const &a)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = a._ideas[i];
    return (*this);
}

std::string Brain::getIdea(int i)
{
    return (_ideas[i]);
}