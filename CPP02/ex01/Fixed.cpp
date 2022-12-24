#include "Fixed.hpp"

const int	Fixed::_nbFracBits = 8;

Fixed::Fixed( void ) : _FixedPtNum( 0 ) {

	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed( const int num ) {

	std::cout << "Int constructor called" << std::endl;

	setRawBits( num * (1 << _nbFracBits) );
}

Fixed::Fixed ( const float FpNum ) {

	std::cout << "Float constructor called" << std::endl;

	setRawBits( roundf(FpNum * (1 << _nbFracBits)) );
}

Fixed::Fixed(const Fixed &old_obj ) {

	std::cout << "Copy constructor called" << std::endl;

	this->operator=(old_obj);

	return ;
}

Fixed&	Fixed::operator= (const Fixed& fixed) {
	
	std::cout << "Copy Assignment operator called" << std::endl;

	_FixedPtNum = fixed.getRawBits();

	return *this;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

std::ostream& operator<<(std::ostream& os, const Fixed & obj)
{
	os << obj.toFloat();

	return os;
}


int		Fixed::getRawBits( void ) const {

	return this->_FixedPtNum;
}

void	Fixed::setRawBits( int const raw ) {

	_FixedPtNum = raw;

	return ;
}

float	Fixed::toFloat( void ) const {

	return ((float) _FixedPtNum / (float) (1 << _nbFracBits));
}

int		Fixed::toInt( void ) const {
	
	int i = roundf(toFloat());

	return i;
}