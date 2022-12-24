#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <tgmath.h>

class Fixed {

public:

	Fixed( void );
	Fixed( const int num );
	Fixed( const float FpNum );
	Fixed( const Fixed &old_obj );
	~Fixed( void );

	Fixed&	operator= (const Fixed& fixed );

	// prefix has no parameter
	Fixed&	operator++ ();
	Fixed&	operator-- ();

	// postfix has an int parameter
	Fixed	operator++ (int);
	Fixed	operator-- (int);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	static Fixed		&min(Fixed&	f1, Fixed& f2);
	static const Fixed	&min(const Fixed& f1, const Fixed& f2);
	static Fixed		&max(Fixed&	f1, Fixed& f2);
	static const Fixed	&max(const Fixed& f1, const Fixed& f2);

	Fixed	operator+ (const Fixed& fixed);
	Fixed	operator- (const Fixed& fixed);
	Fixed	operator* (const Fixed& fixed);
	Fixed	operator/ (const Fixed& fixed);


private:

	int					_FixedPtNum;
	static const int	_nbFracBits;

};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);
bool			operator< (const Fixed& f1, const Fixed& f2);
bool			operator> (const Fixed& f1, const Fixed& f2);
bool			operator>= (const Fixed& f1, const Fixed& f2);
bool			operator<= (const Fixed& f1, const Fixed& f2);
bool			operator== (const Fixed& f1, const Fixed& f2);
bool			operator!= (const Fixed& f1, const Fixed& f2);

#endif