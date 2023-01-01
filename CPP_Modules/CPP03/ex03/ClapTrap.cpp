#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) 
	: _Name(""), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {

	std::cout << "ClapTrap default Constructor Called" << std::endl;

}

ClapTrap::ClapTrap( const ClapTrap &obj ) {

	std::cout << "ClapTrap Copy Constructor Called" << std::endl;

	this->operator=(obj);
}

ClapTrap::ClapTrap( std::string name ) 
	: _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {

	std::cout << "ClapTrap param Constructor Called" << std::endl;

	
}

ClapTrap::ClapTrap( std::string name , unsigned int HP, unsigned int EP, unsigned int AD) 
	: _Name(name), _HitPoints(HP), _EnergyPoints(EP), _AttackDamage(AD) {

	std::cout << "ClapTrap params Constructor Called" << std::endl;

	
}

ClapTrap&	ClapTrap::operator= ( const ClapTrap &obj ) {

	_Name = obj._Name;
	_HitPoints = obj._HitPoints;
	_EnergyPoints = obj._EnergyPoints;
	_AttackDamage = obj._AttackDamage;

	return *this;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap Destructor Called" << std::endl;

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

		std::cout << _Name << " takes " << amount << " points of damage!" << std::endl;
		_HitPoints -= amount;

	}
	else {
		std::cout << _Name << " is completely damaged!" << std::endl;
		_HitPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (_EnergyPoints > 0 && _HitPoints > 0) {

		std::cout <<_Name << "  restores " << amount << " of Hit points" << std::endl;
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

void	ClapTrap::setName(std::string str)
{
	_Name = str;
}

void	ClapTrap::setHitPoints(unsigned int HP)
{
	_HitPoints = HP;
}

void	ClapTrap::setEnergyPoints(unsigned int EP)
{
	_EnergyPoints = EP;
}

void	ClapTrap::setAttackDamage(unsigned int AD)
{
	_AttackDamage = AD;
}
