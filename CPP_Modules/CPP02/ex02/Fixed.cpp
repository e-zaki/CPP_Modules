#include "Fixed.hpp"

const int	Fixed::_nbFracBits = 8;

Fixed::Fixed( void ) : _FixedPtNum( 0 ) {

	return ;
}

Fixed::Fixed( const int num ) {

	setRawBits( num * (1 << _nbFracBits) );
}

Fixed::Fixed ( const float FpNum ) {

	setRawBits( roundf(FpNum * (1 << _nbFracBits)) );
}

Fixed::Fixed(const Fixed &old_obj ) {

	this->operator=(old_obj);

	return ;
}

Fixed&	Fixed::operator= (const Fixed& fixed) {

	_FixedPtNum = fixed.getRawBits();

	return *this;
}

Fixed::~Fixed( void ) {

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

Fixed&	Fixed::operator++ () {

	++(_FixedPtNum);

	return *this;
}

Fixed&	Fixed::operator-- () {

	--(_FixedPtNum);

	return *this;
}

// int parameter means this is postfix operator++
Fixed Fixed::operator++ (int)
{
    // Create a temporary variable with our current Fixed
    Fixed temp(*this);

    // Use prefix operator to increment this digit
    ++(*this); // apply operator

    // return temporary result
    return temp; // return saved state
}

Fixed Fixed::operator-- (int)
{
    Fixed temp(*this);

    --(*this);

    return temp;
}

// Comparison operators 

bool	operator< (const Fixed& f1, const Fixed& f2)
{
	return ( f1.getRawBits() < f2.getRawBits() );
}

bool	operator> (const Fixed& f1, const Fixed& f2)
{
	return (f1.getRawBits() > f2.getRawBits());
}

bool	operator>= (const Fixed& f1, const Fixed& f2)
{
	return (f1.getRawBits() >= f2.getRawBits());
}

bool	operator<= (const Fixed& f1, const Fixed& f2)
{
	return (f1.getRawBits() <= f2.getRawBits());
}

bool	operator== (const Fixed& f1, const Fixed& f2)
{
	return (f1.getRawBits() == f2.getRawBits());
}

bool	operator!= (const Fixed& f1, const Fixed& f2)
{
	return (f1.getRawBits() != f2.getRawBits());
}

const Fixed	&Fixed::min(const Fixed& f1, const Fixed& f2)
{
	return (f1 < f2) ? f1 : f2;
}

Fixed	&Fixed::min(Fixed& f1, Fixed& f2)
{
	return (f1 < f2) ? f1 : f2;
}

const Fixed	&Fixed::max(const Fixed& f1, const Fixed& f2)
{
	return (f1 < f2) ? f2 : f1;
}

Fixed	&Fixed::max(Fixed& f1, Fixed& f2)
{
	return (f1 < f2) ? f2 : f1;
}

// Arithmetic operators

Fixed	Fixed::operator+ (const Fixed& fixed)
{
	float f = this->toFloat() + fixed.toFloat();

	return Fixed (f);
}

Fixed	Fixed::operator- (const Fixed& fixed)
{
	return Fixed( this->toFloat() - fixed.toFloat() );
}

Fixed	Fixed::operator* (const Fixed& fixed)
{
	Fixed	result;

	result.setRawBits( this->getRawBits() * fixed.getRawBits() );
	result.setRawBits(result.getRawBits() / (1 << _nbFracBits) );

	return result;
}

Fixed	Fixed::operator/ (const Fixed& fixed)
{
	return Fixed( this->toFloat() / fixed.toFloat() );
}


