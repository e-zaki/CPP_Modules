#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {

public:

	HumanA(std::string name, Weapon &wA);
	~HumanA();

	void	attack( void );


private:
	
	std::string	_name;
	Weapon		&wA;

};

#endif