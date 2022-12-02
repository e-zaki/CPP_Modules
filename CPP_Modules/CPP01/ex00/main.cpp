#include "Zombie.hpp"

int main()
{
	Zombie	*z1 = newZombie("Ohio");
	
	Zombie	z2("Walsh");

	randomChump("Uglix");

	z1->announce();

	z2.announce();


	delete z1;

	// std::string test = 0; 	// --> segfault

	system("leaks Zombie");

	return 0;
}
