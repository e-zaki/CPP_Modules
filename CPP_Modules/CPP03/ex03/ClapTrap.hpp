#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public:

	ClapTrap( void );
	ClapTrap( const ClapTrap &obj );
	ClapTrap( std::string	name );
	ClapTrap( std::string	name, unsigned int HP, unsigned int EP, unsigned int AD );
	ClapTrap&	operator= ( const ClapTrap &obj );
	~ClapTrap( void );

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	std::string		getName() const;
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;
	
	void			setName(std::string str);
	void			setHitPoints(unsigned int HP);
	void			setEnergyPoints(unsigned int EP);
	void			setAttackDamage(unsigned int AD);

protected:

	std::string		_Name;
	unsigned int	_HitPoints;
	unsigned int	_EnergyPoints;
	unsigned int	_AttackDamage;

};


#endif