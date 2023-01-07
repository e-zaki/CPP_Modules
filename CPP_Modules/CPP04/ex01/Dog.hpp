#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {

public:

	Dog( void );
	Dog( const Dog &obj );
	Dog&	operator= ( const Dog &obj );
	~Dog( void );

	void	makeSound( void ) const;
	void	showBrain( void ) const;		// outputs brain ideas

private:
	Brain	*brain;

};

#endif