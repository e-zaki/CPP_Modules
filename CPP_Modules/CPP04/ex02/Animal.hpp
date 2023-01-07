#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class	Animal {

public:

	Animal( void );
	Animal( const Animal &obj );
	Animal( std::string type );
	Animal&	operator= ( const Animal &obj );
	virtual	~Animal( void );

	virtual void	makeSound( void ) const = 0;
	std::string	getType( void ) const;

protected:

	std::string	type;

};

#endif