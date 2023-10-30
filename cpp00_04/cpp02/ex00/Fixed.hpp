#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:

    Fixed(int value = 0);
    Fixed(Fixed &number);
    Fixed &operator=(Fixed &source);
    ~Fixed();
    int     getRawBits(void);
    void    setRawBits(int const raw);
    float   toFloat(void) const;

    private:

    static int const _nb_bits = 8;
    int _value;
};

#endif