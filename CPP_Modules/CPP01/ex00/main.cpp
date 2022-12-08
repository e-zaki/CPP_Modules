#include "Zombie.hpp"

int	testLeaksFct() {

	Zombie	*obj = newZombie("Leaked Zombie");

	obj->announce();

	delete	obj;

	return 0;
}

int main()
{
	Zombie	*z1 = newZombie("Ohio");
	
	Zombie	z2("Walsh");

	randomChump("Uglix");

	z1->announce();

	z2.announce();

	// testLeaksFct();

	delete z1;


	// system("leaks Zombie");

	return 0;
}
