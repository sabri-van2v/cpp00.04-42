#include "Fixed.hpp"
#include "Point.hpp"

float get_segment(Point a, Point b)
{
    return std::sqrt(std::pow(b.get_x() - a.get_x(), 2) + std::pow(b.get_y() - a.get_y(), 2));
}

float get_area(Point a, Point b, Point c)
{
    float ab = get_segment(a, b);
    float bc = get_segment(b, c);
    float ac = get_segment(a, c);
    float half = (ab + bc + ac) / 2;
    return (std::sqrt(half * (half - ab) * (half - bc) * (half - ac)));
}

// float   barycentric(float area_p, float area)
// {
//     return (area_p / area);
// }

bool    borders(float abp, float bcp, float acp)
{
    return (!(abp and bcp and acp));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float abc = get_area(a, b, c);
    float abp = get_area(a, b, point);
    float bcp = get_area(b, c, point);
    float acp = get_area(a, c, point);

    Fixed result(abp + bcp + acp);
    Fixed area(abc);
    if (result == area && !borders(abp, bcp, acp))
        return (true);
    return (false);
}
