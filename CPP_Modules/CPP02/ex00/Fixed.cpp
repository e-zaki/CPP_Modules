#include "Fixed.hpp"

const int	Fixed::_nbFracBits = 8;

Fixed::Fixed( void ) : _FixedPtNum( 0 ) {

	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed( const Fixed &old_obj ) {

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

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;

	return this->_FixedPtNum;
}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;

	_FixedPtNum = raw;

	return ;
}