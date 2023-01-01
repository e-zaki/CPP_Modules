#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	obj("Dio");

	std::cout << "\nName: " << obj.getName() << std::endl;
	std::cout << "\nName: " << obj.ClapTrap::getName() << std::endl;
	std::cout << "Hit Points: " << obj.getHitPoints() << std::endl;
	std::cout << "Energy Points: " << obj.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << obj.getAttackDamage() << "\n\n";

	obj.beRepaired(13);
	std::cout << "Hit Points: " << obj.getHitPoints() << std::endl;

	obj.guardGate();		// inherited from ScavTrap
	obj.highFivesGuys();	// inherited from FragTrap
	obj.whoAmI();
	std::cout << std::endl;
	return 0;
}