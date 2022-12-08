#include "Weapon.hpp"

Weapon::Weapon( std::string input ) {

	_type = input;

	return ;
}

std::string const&	Weapon::getType() {
	
	std::string const& stringREF = _type;

	return stringREF;
}

void	Weapon::setType( std::string str ) {

	_type = str;

	return ;
}
