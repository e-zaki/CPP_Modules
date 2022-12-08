#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {

public:

	Harl();

	void	complain( std::string level );

private:

	std::string	_level;

	void	debug( void );
	void	info ( void );
	void	warning( void );
	void	error( void );

};


#endif