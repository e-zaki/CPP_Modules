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

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	int					_FixedPtNum;
	static const int	_nbFracBits;

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);


#endif