#include "HumanA.hpp"
#include "HumanB.hpp"

int mainf()
{
	{
		Weapon club = Weapon("crude spiked club");
		Weapon katana = Weapon("katana");
		HumanA bob("Bob", club);
		bob.attack();
		bob.setWeapon(katana);
		// club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("Indian Sword");
		jim.attack();
	}
	return 0;
}

int main()
{
	mainf();
	// system("leaks main");

	return 0;
}