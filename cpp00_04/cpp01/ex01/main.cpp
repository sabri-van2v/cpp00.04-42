#include "Zombie.hpp"

int main()
{
    Zombie *Pablo = zombieHorde(4, "Pablo");

    for (int i = 0; i < 4; i++)
        Pablo[i].announce();
    delete [] Pablo;
}