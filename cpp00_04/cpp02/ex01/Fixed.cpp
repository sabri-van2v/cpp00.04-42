#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void):_value(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(float const value):_value(int(roundf(value * (1 << _nb_bits))))
{
    std::cout << "Float constructor called\n";
}

Fixed::Fixed(int const value):_value(value << _nb_bits)
{
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const Fixed &number)
{
    std::cout << "Copy constructor called\n";
    *this = number;
}

Fixed& Fixed::operator=(const Fixed &source)
{
    std::cout << "Copy assignment operator called\n";
    _value = source.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return (_value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    _value = raw;
}

float Fixed::toFloat(void) const
{
    return (float(_value) / (1 << _nb_bits));
}

int Fixed::toInt(void) const
{
    return (_value >> _nb_bits);
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}