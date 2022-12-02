#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon) : \
	_name(name), wB(weapon) {
	
	return ;
}

HumanB::HumanB(std::string name) : _name(name) {

	return ;
}

void	HumanB::attack() {

	std::cout << _name 
			  << "attacks with their "
			  << wB->getType();
	
	return ;
}

void	HumanB::setWeapon(Weapon w) {
	wB = &w;
}