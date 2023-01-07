#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>

class	Brain {

public:

	Brain( void );
	Brain( const Brain &obj );
	Brain&	operator= ( const Brain &obj );
	~Brain( void );

	void	DisplayIdeas();

private:
	std::string ideas[100];

};

#endif