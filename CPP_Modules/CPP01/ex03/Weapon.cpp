#include "Weapon.hpp"

Weapon::Weapon(std::string input) {

	_type = input;

	return ;
}

const std::string&	Weapon::getType() {
	
	const std::string &stringREF = _type;

	return stringREF;
}

void	Weapon::setType(std::string str) {

	_type = str;
	return ;
}
