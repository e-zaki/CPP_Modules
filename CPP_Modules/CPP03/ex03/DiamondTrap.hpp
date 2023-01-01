#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:

	DiamondTrap( void );
	DiamondTrap( const DiamondTrap &obj );
	DiamondTrap( std::string name );
	DiamondTrap&	operator= ( const DiamondTrap &obj );
	~DiamondTrap( void );

	using	ScavTrap::attack;
	void	whoAmI( void );
	std::string getName( void );

private:

	std::string	_Name;

};


#endif
