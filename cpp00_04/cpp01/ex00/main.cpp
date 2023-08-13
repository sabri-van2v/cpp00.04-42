#include "Zombie.hpp"

int main()
{
    Zombie *Pablo = newZombie("Pablo");

    Pablo->announce();
    randomChump("Jeremy");
    delete Pablo;
}