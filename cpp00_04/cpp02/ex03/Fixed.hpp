#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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

    static Fixed   &min(Fixed &f1, Fixed &f2);
    static const Fixed   &min(const Fixed &f1, const Fixed &f2);
    static Fixed   &max(Fixed &f1, Fixed &f2);
    static const Fixed   &max(const Fixed &f1, const Fixed &f2);
    bool operator>(const Fixed &f);
    bool operator<(const Fixed &f);
    bool operator>=(const Fixed &f);
    bool operator<=(const Fixed &f);
    bool operator==(const Fixed &f);
    bool operator!=(const Fixed &f);
    Fixed operator+(const Fixed &f);
    Fixed operator-(const Fixed &f);
    Fixed operator*(const Fixed &f);
    Fixed operator/(const Fixed &f);
    Fixed operator++();
    Fixed operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    private:

    static int const _nb_bits = 8;
    int _value;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif