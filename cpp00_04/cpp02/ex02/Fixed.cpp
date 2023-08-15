#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void):_value(0)
{}

Fixed::Fixed(float const value):_value(int(roundf(value * (1 << _nb_bits))))
{}

Fixed::Fixed(int const value):_value(value << _nb_bits)
{}

Fixed::Fixed(const Fixed &number)
{
    *this = number;
}

Fixed& Fixed::operator=(const Fixed &source)
{
    _value = source.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{}

int Fixed::getRawBits() const
{
    return (_value);
}

void    Fixed::setRawBits(int const raw)
{
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



Fixed   &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

const Fixed   &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1._value < f2._value)
        return (f1);
    return (f2);
}

Fixed   &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

const Fixed   &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1._value > f2._value)
        return (f1);
    return (f2);
}



bool Fixed::operator>(const Fixed &f)
{
    return (_value > f._value);
}

bool Fixed::operator<(const Fixed &f)
{
    return (_value < f._value);
}

bool Fixed::operator>=(const Fixed &f)
{
    return (_value >= f._value);
}

bool Fixed::operator<=(const Fixed &f)
{
    return (_value <= f._value);
}

bool Fixed::operator==(const Fixed &f)
{
    return (_value == f._value);
}

bool Fixed::operator!=(const Fixed &f)
{
    return (_value != f._value);
}



Fixed Fixed::operator+(const Fixed &f)
{
    Fixed   result;

    result._value = _value + f._value;
    return (result);
}

Fixed Fixed::operator-(const Fixed &f)
{
    Fixed   result;

    result._value = _value - f._value;
    return (result);
}

Fixed Fixed::operator*(const Fixed &f)
{
    Fixed   result;

    result._value = _value * (f._value >> _nb_bits);
    return (result);
}

Fixed Fixed::operator/(const Fixed &f)
{
    Fixed   result;

    result._value = _value * (1 << _nb_bits) / f._value;
    return (result);
}



Fixed Fixed::operator++()
{
    _value++;
    return (*this);
}

Fixed Fixed::operator--()
{
    _value--;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed stock = *this;
    ++_value;
    return (stock);
}

Fixed Fixed::operator--(int)
{
    Fixed stock = *this;
    --_value;
    return (stock);
}