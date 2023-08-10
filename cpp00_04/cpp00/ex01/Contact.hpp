#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    public:

    Contact();
    ~Contact();

    void        print_contact();
    bool        not_void();

    void        set_first_name(std::string str);
    void        set_last_name(std::string str);
    void        set_nickname(std::string str);
    void        set_phone_number(std::string str);
    void        set_darkest_secret(std::string str);

    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();

    private:

    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
};

#endif