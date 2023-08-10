#include "PhoneBook.hpp"
#include <cstdio>

void    add(PhoneBook &phonebook)
{
    Contact new_contact;
    std::string  str;

    std::cout << "first name : ";
    std::getline(std::cin, str);
    new_contact.set_first_name(str);
    std::cout << "last name : ";
    std::getline(std::cin, str);
    new_contact.set_last_name(str);
    std::cout << "nickname : ";
    std::getline(std::cin, str);
    new_contact.set_nickname(str);
    std::cout << "phone number : ";
    std::getline(std::cin, str);
    new_contact.set_phone_number(str);
    std::cout << "darkest secret : ";
    std::getline(std::cin, str);
    new_contact.set_darkest_secret(str);
    if (new_contact.not_void())
        phonebook.add_contact(new_contact);
    else
        std::cout << "contact not added : an information is void\n";
}

void    search(PhoneBook &phonebook)
{
    std::string  str;
    Contact contact;

    if (not phonebook.contains())
        return (void)(std::cout << "The Directory is void\n");
    phonebook.print_phonebook();
    std::cout << "choose a contact : ";
    getline(std::cin, str);
    if (str[0] >= '1' && str[0] <= '8' && str.size() == 1)
        phonebook.print_selection(str[0] - 1 - '0');
    else
        std::cout << "contact not found\n";
}

int main()
{
    PhoneBook   phonebook;
    std::string      str;

    std::cout << "Welcome to the repertory\n";
    std::cout << "You can run one of these commands :\n";
    std::cout << "ADD --- SEARCH --- EXIT\n";
    while (not std::cin.eof())
    {
        std::cout << "run a command : ";
        std::getline(std::cin, str);
        if (str == "ADD")
           add(phonebook);
        else if (str == "SEARCH")
            search(phonebook);
        else if (str == "EXIT")
            break ;
        else
            std::cout << "bad command\n";
    }
}