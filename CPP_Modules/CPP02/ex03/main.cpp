#include "Point.hpp"

int main( void )
{
	Point	pt1( 0, 0 );
	Point	pt2( 0, 20 );
	Point	pt3( 30, 0 );
	Point	pt( 1, 2 );

 	if ( bsp(pt1, pt2, pt3, pt) )
    	std::cout << "Point is inside triangle\n";
	else
		std::cout <<"Point is outside triangle\n";
	return 0;
}