#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : \
	_name(name), wA(weapon) {
	
	return ;
}

void	HumanA::attack() {

	std::cout << _name 
			  << " attacks with their "
			  << wA.getType() << std::endl;
	
	return ;
}

void	HumanA::setWeapon(Weapon &w) {
	wA = w;
}