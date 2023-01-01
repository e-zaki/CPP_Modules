#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap obj("Luffy");

	obj.beRepaired(5);
	for (int i = 0; i < 10; i++)
		obj.attack("Kaido");
	obj.takeDamage(5);

	return 0;
}