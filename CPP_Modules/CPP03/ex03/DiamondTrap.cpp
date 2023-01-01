#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("_clap_name", 100, 50, 30), _Name("") {

	std::cout << "DiamondTrap Default Constructor Called" << std::endl;

}

DiamondTrap::DiamondTrap( const DiamondTrap &obj ) {

	std::cout << "DiamondTrap Copy Constructor Called" << std::endl;

	this->operator=(obj);
}

DiamondTrap::DiamondTrap( std::string name ) 
	: ClapTrap(name + "_clap_name", 100, 50, 30), _Name(name) {

	std::cout << "DiamondTrap Parameter Constructor Called" << std::endl;

}

DiamondTrap&	DiamondTrap::operator= ( const DiamondTrap &obj ) {

	ClapTrap::operator=(obj);

	_Name = obj._Name;

	return *this;
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "DiamondTrap Destructor Called" << std::endl;

}

void	DiamondTrap::whoAmI( void ) {

	std::cout << "I'm " << _Name << ", aka : " << ClapTrap::_Name << " O_o" << std::endl;

}

std::string	DiamondTrap::getName( void ) {

	return _Name;
}
