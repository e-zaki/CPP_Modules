#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

public:

	Fixed( void );
	Fixed( const Fixed &old_obj );
	~Fixed( void );

	Fixed&	operator= ( const Fixed& fixed );

	int		getRawBits( void ) const ;
	void	setRawBits( int const raw );

private:

	int					_FixedPtNum;
	static const int	_nbFracBits;

};


#endif