#include "FragTrap.hpp"

int main(void)
{

	ClapTrap	obj("Lahbib");
	FragTrap	obj1("Zakaria");
	FragTrap	obj2("Mouad");

	std::cout << "\nName: " << obj.getName() << std::endl;
	std::cout << "Hit Points: " << obj.getHitPoints() << std::endl;
	std::cout << "Energy Points: " << obj.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << obj.getAttackDamage() << std::endl;
	
	std::cout << "\nName: " << obj1.getName() << std::endl;
	std::cout << "Hit Points: " << obj1.getHitPoints() << std::endl;
	std::cout << "Energy Points: " << obj1.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << obj1.getAttackDamage() << std::endl;
	
	std::cout << "\nName: " << obj2.getName() << std::endl;
	std::cout << "Hit Points: " << obj2.getHitPoints() << std::endl;
	std::cout << "Energy Points: " << obj2.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << obj2.getAttackDamage() << std::endl;


	obj1.highFivesGuys();
	obj1.attack("Mouad");
	obj2.takeDamage( obj1.getAttackDamage() );
	obj1.attack("Mouad");
	obj2.takeDamage( obj1.getAttackDamage() );
	obj2.beRepaired(5);
	std::cout << "Hit Points: " << obj2.getHitPoints() << std::endl;
	

}