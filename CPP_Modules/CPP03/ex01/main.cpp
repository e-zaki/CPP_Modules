#include "ScavTrap.hpp"

int main(void)
{

	ScavTrap	obj1("Zakaria");
	ScavTrap	obj2("Mouad");
	
	std::cout << "\nName: " << obj1.getName() << std::endl;
	std::cout << "Hit Points: " << obj1.getHitPoints() << std::endl;
	std::cout << "Energy Points: " << obj1.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << obj1.getAttackDamage() << std::endl;
	
	std::cout << "\nName: " << obj2.getName() << std::endl;
	std::cout << "Hit Points: " << obj2.getHitPoints() << std::endl;
	std::cout << "Energy Points: " << obj2.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << obj2.getAttackDamage() << std::endl;


	obj1.guardGate();
	obj1.attack("Mouad");
	obj2.takeDamage( obj1.getAttackDamage() );
	obj1.attack("Mouad");
	obj2.takeDamage( obj1.getAttackDamage() );
	obj2.beRepaired(5);
	std::cout << "Hit Points: " << obj2.getHitPoints() << std::endl;

}