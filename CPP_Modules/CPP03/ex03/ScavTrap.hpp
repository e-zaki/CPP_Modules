#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( const ScavTrap &obj );
	ScavTrap( std::string	name );
	ScavTrap&	operator= ( const ScavTrap &obj );
	~ScavTrap( void );

	void	attack(const std::string& target);
	void	guardGate( void );


};


#endif