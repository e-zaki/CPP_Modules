#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), wB(NULL) {

	return ;
}

void	HumanB::attack() {

	if (wB != NULL) {

	std::cout << _name 
			  << " attacks with their "
			  << wB->getType() << std::endl;

	}
	else {
		std::cout << "\033[1;33m"
				  << "Couldn't Attack, "
				  << _name
				  << " has no Weapon :/"
				  << "\033[0;37m\n";
	}
	
	return ;
}

void	HumanB::setWeapon(Weapon &w) {
	wB = &w;
}

void	HumanB::unsetWeapon( void ) {
	this->wB = NULL;
}