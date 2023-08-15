#include "Point.hpp"

Point::Point():_x(Fixed(0)), _y(Fixed(0)){}

Point::Point(const float x, const float y):_x(Fixed(x)), _y(Fixed(y)){}

Point::Point(const Point &p):_x(p._x), _y(p._y){}

Point::~Point(){}

Point &Point::operator=(const Point &p)
{
    (void)p;
    return (*this);
}

float Point::get_x() const
{
    return (_x.toFloat());
}

float Point::get_y() const
{
    return (_y.toFloat());
}
