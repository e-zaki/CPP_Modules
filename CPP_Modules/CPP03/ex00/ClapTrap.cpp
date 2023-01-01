#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) 
	: _Name(""), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {

	std::cout << "Default Constructor Called" << std::endl;

}

ClapTrap::ClapTrap( const ClapTrap &obj ) {

	std::cout << "Copy Constructor Called" << std::endl;

	this->operator=(obj);
}

ClapTrap::ClapTrap( std::string name ) 
	: _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {

	std::cout << "Parameter Constructor Called" << std::endl;

	
}

ClapTrap&	ClapTrap::operator= ( const ClapTrap &obj ) {

	_Name = obj.getName();
	_HitPoints = obj.getHitPoints();
	_EnergyPoints = obj.getEnergyPoints();
	_AttackDamage = obj.getAttackDamage();

	return *this;
}


ClapTrap::~ClapTrap( void ) {

	std::cout << "Destructor Called" << std::endl;

}

void	ClapTrap::attack(const std::string& target) {

	if (_EnergyPoints > 0 && _HitPoints > 0) {
	
		std::cout << "ClapTrap " << _Name << " attacks " << target << " causing " 
				  << _AttackDamage << " points of damage!" << std::endl;
		(_EnergyPoints)--;

	}
	else
		std::cout << _Name << " couldn't attack someone :(" << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (_HitPoints >= amount) {

		std::cout << "ClapTrap " << _Name << " takes " << amount << " points of damage!" << std::endl;
		_HitPoints -= amount;

	}
	else {
		std::cout << _Name << " is completely damaged!" << std::endl;
		_HitPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (_EnergyPoints > 0 && _HitPoints > 0) {

		std::cout << "ClapTrap " << _Name << "  restores " << amount << " of Hit points" << std::endl;
		_HitPoints += amount;

		(_EnergyPoints)--;
	}
	else
		std::cout << _Name << " couldn't be repeaired :/" << std::endl;
}

std::string		ClapTrap::getName() const {
	return _Name;
}

unsigned int	ClapTrap::getHitPoints() const {
	return _HitPoints;
}

unsigned int	ClapTrap::getEnergyPoints() const {
	return _EnergyPoints;
}

unsigned int	ClapTrap::getAttackDamage() const {
	return _AttackDamage;
}

