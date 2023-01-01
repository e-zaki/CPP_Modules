#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("", 100, 50, 20){

	std::cout << "ScavTrap Default Constructor Called" << std::endl;

}

ScavTrap::ScavTrap( const ScavTrap &obj ) {

	std::cout << "ScavTrap Copy Constructor Called" << std::endl;

	this->operator=(obj);
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20) {

	std::cout << "ScavTrap Parameter Constructor Called" << std::endl;

}

ScavTrap&	ScavTrap::operator= ( const ScavTrap &obj ) {

	ClapTrap::operator=(obj);

	return *this;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap Destructor Called" << std::endl;

}

void	ScavTrap::attack(const std::string& target) {

	if (_EnergyPoints > 0 && _HitPoints > 0) {
	
		std::cout << "ScavTrap " << _Name << " attacks " << target << " causing " 
				  << _AttackDamage << " points of damage!" << std::endl;
		(_EnergyPoints)--;

	}
	else
		std::cout << _Name << " couldn't attack someone :(" << std::endl;

}

void	ScavTrap::guardGate( void ) {

	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;

}


