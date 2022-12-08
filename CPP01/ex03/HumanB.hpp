#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB {

public:

	HumanB(std::string name);
	// ~HumanB();

	void	attack( void );
	void	setWeapon(Weapon &w);
	void	unsetWeapon( void );

private:
	
	std::string	_name;
	Weapon		*wB;

};

#endif