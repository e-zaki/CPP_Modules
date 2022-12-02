#include "Zombie.hpp"

int func(void)
{
	Zombie	*horde = zombieHorde(7, "Bar Brothers");

	std::cout << "[3] ";
	horde[3].announce();

	std::cout << "[6] ";
	horde[6].announce();

	delete[] horde;


	return 0;
}

int main(void)
{
	func();
	system("leaks Zombie");

	return 0;
}