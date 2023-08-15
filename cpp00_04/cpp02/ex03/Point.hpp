#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    public:

    Point();
    Point(const float x = 0, const float y = 0);
    Point(const Point &p);
    ~Point();
    Point &operator=(const Point &p);
    float get_x() const;
    float get_y() const;

    private:

    Fixed const _x;
    Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif