#ifndef	POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {

public:
	Point( void );
	Point( float a, float b );
	Point( const Point &obj );
	~Point(  void );

	Point&	operator= ( const Point& pt);

	Fixed const	get_x_value( void ) const;
	Fixed const	get_y_value( void ) const;

private:
	
	Fixed const x;
	Fixed const y;

	
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
bool	ft_inline(Fixed x1, Fixed y1,  Fixed x2, Fixed y2, Fixed x, Fixed y);
Fixed	area(Fixed x1, Fixed y1, Fixed x2, Fixed y2, Fixed x3, Fixed y3);


#endif