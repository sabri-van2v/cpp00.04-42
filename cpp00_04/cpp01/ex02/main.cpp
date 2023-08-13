#include <iostream>

int main()
{
    std::string str_brain("HI THIS IS BRAIN");
    std::string *stringPTR = &str_brain;
    std::string &stringREF = str_brain;

    std::cout << "string address : " << &str_brain << std::endl;
    std::cout << "value of stringPTR : " << stringPTR << std::endl;
    std::cout << "address of stringREF : " << &stringREF << std::endl;

    std::cout << "string value : " << str_brain << std::endl;
    std::cout << "value pointed by stringPTR : " << *stringPTR << std::endl;
    std::cout << "value of stringREF : " << stringREF << std::endl;
}