#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:

    Fixed();
    Fixed(int const value);
    Fixed(float const value);
    Fixed(const Fixed &number);
    Fixed &operator=(const Fixed &source);
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    private:

    static int const _nb_bits = 8;
    int _value;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif