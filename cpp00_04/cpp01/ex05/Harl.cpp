#include "Harl.hpp"

Harl::Harl()
{
    _level[0] = "DEBUG";
    _level[1] = "INFO";
    _level[2] = "WARNING";
    _level[3] = "ERROR";
    f[0] = &Harl::debug;
    f[1] = &Harl::info;
    f[2] = &Harl::warning;
    f[3] = &Harl::error;
}

Harl::~Harl()
{}

void    Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
        if (_level[i] == level)
            (this->*f[i])();
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do !\n";
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger !\nIf you did, I wouldn't be asking for more !\n";
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
    std::cout << "This is unacceptable !\nI want to speak to the manager now.\n";
}