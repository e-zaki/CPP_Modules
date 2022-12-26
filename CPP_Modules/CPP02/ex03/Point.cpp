#include "Point.hpp"

Point::Point( void ) : x( 0 ), y( 0 ) {

	return ;
}

Point::Point( float a, float b ) : x( a ), y ( b ) {
	
	return ;
}

Point::Point( const Point &obj ) : x(obj.get_x_value()), y(obj.get_y_value())
{
	
	this->operator=(obj);

	return ;
}

Point::~Point( void ) {

	return ;
}

Point&	Point::operator= ( const Point& pt) {

	Point *p = new Point ( pt.x.toFloat(), pt.y.toFloat() );

	return *p;
}

Fixed const	Point::get_x_value( void ) const {

	return this->x;
}

Fixed const	Point::get_y_value( void ) const {

	return this->y;
}