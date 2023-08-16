#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:

    Brain();
    Brain(Brain const &a);
    ~Brain();
    Brain &operator=(Brain const &a);
    std::string getIdea(int i);

private:

    std::string _ideas[100];
};

#endif