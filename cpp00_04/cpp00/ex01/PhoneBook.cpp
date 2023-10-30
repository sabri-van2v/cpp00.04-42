#include "PhoneBook.hpp"

PhoneBook::PhoneBook():_index(0){}

PhoneBook::~PhoneBook(){}



void    PhoneBook::print_selection(int index)
{
    if (index < _index)
        _contact[index].print_contact();
    else
        std::cout << "contact not found\n";
}

void    PhoneBook::add_contact(Contact new_contact)
{
    _contact[_index % 8] = new_contact;
    _index++;
}

void    PhoneBook::print_column(std::string str)
{
    int number_of_space = 11 - str.size();

    while (--number_of_space > 0)
        std::cout << ' ';
    if (str.size() > 10)
    {
        str[9] = '.';
        str = str.substr(0, 10);
    }
    std::cout << str;
    std::cout << '|';
}

void    PhoneBook::print_phonebook()
{
    char        c;

    for(int i = 0; i < 8 && i < _index; i++)
    {
        std::cout << '|';
        for (int i = 0; i < 9; i++)
            std::cout << ' ';
        c = i + 1 + '0';
        std::cout << c;
        std::cout << '|';
        print_column(_contact[i].get_first_name());
        print_column(_contact[i].get_last_name());
        print_column(_contact[i].get_nickname());
        std::cout << std::endl;
    }
}

bool    PhoneBook::contains()
{
    return (_index);
}