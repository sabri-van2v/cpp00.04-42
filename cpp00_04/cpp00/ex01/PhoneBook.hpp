#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    public:

    PhoneBook();
    ~PhoneBook();

    void    print_selection(int index);
    void    add_contact(Contact new_contact);
    void    print_phonebook();
    bool    contains();

    private:

    void    print_column(std::string str);

    Contact _contact[8];
    int     _index;
};

#endif