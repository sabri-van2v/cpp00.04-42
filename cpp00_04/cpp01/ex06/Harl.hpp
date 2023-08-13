#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    public:

    Harl();
    ~Harl();
    void complain(std::string level);

    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    std::string  _level[4];
    void (Harl::*f[4])(void);
};

#endif