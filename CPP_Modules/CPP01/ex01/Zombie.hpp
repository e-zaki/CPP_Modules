#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {


public:

	Zombie();
	~Zombie( void );

	void	announce( void );
	void	setName(std::string name);

private:

	std::string	_name;

};

Zombie* zombieHorde( int N, std::string name );

void	distroyHorde( int N, Zombie *arr);

#endif