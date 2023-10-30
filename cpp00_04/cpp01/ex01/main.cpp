#include "Zombie.hpp"

int main()
{
    Zombie *Pierre = zombieHorde(4, "Pierre");

    for (int i = 0; i < 4; i++)
        Pierre[i].announce();
    delete [] Pierre;
}
