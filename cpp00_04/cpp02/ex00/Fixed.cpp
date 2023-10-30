#include "Fixed.hpp"

Fixed::Fixed(int value):_value(value)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed &number)
{
    std::cout << "Copy constructor called\n";
    *this = number;
}

Fixed& Fixed::operator=(Fixed &source)
{
    std::cout << "Copy assignment operator called\n";
    _value = source.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits()
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

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}