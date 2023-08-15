#include "Point.hpp"

int main( void )
{
	const Point a(-6, 0);
	const Point b(0, 6);
	const Point c(6, 0);
	const Point p1(1.5, 1.5);
	const Point p2(4, 0);

	std::cout << "p1 is " << (bsp(a, b, c, p1) ? "yes" : "no") << std::endl;
	std::cout << "p2 is " << (bsp(a, b, c, p2) ? "yes" : "no") << std::endl;
}