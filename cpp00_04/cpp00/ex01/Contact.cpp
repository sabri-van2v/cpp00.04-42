#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}



void        Contact::set_first_name(std::string str)
{
    _first_name = str;
}

void        Contact::set_last_name(std::string str)
{
    _last_name = str;
}

void        Contact::set_nickname(std::string str)
{
    _nickname = str;
}

void        Contact::set_phone_number(std::string str)
{
    _phone_number = str;
}

void        Contact::set_darkest_secret(std::string str)
{
    _darkest_secret = str;
}


void    Contact::print_contact()
{
    std::cout << "first name : " << _first_name << std::endl;
    std::cout << "last name : " << _last_name << std::endl;
    std::cout << "nickname : " << _nickname << std::endl;
    std::cout << "phone number : " << _phone_number << std::endl;
    std::cout << "darkest_secret : " << _darkest_secret << std::endl;
}

std::string Contact::get_first_name()
{
    return _first_name;
}

std::string Contact::get_last_name()
{
    return _last_name;
}

std::string Contact::get_nickname()
{
    return _nickname;
}


bool    Contact::not_void()
{
    return (_first_name not_eq "" && _last_name not_eq ""
    && _nickname not_eq "" && _phone_number not_eq ""
    && _darkest_secret not_eq "");
}