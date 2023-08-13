#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl    h;

    if (argc == 2)
    {
        std::string  levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        int i = 0;
        while (i < 4 && argv[1] != levels[i])
            i++;
        switch (i)
        {
            case 0:
                std::cout << "[ " << levels[0] << " ]" << std::endl;
                h.complain(levels[0]);
                std::cout << std::endl;
                // fall through
            case 1:
                std::cout << "[ " << levels[1] << " ]" << std::endl;
                h.complain(levels[1]);
                std::cout << std::endl;
                // fall through
            case 2:
                std::cout << "[ " << levels[2] << " ]" << std::endl;
                h.complain(levels[2]);
                std::cout << std::endl;
                // fall through
            case 3:
                std::cout << "[ " << levels[3] << " ]" << std::endl;
                h.complain(levels[3]);
                std::cout << std::endl;
                break ;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]\n";
                break ;
        }
    }
}