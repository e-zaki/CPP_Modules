#include "Zombie.hpp"

void func(void)
{
	// N : size of zombie's horde

	int N = 4;

	Zombie	*horde = zombieHorde(N, "Bar Brothers");

	for (int i = 0; i < N && horde; i++) {
		std::cout << "[" << i << "] ";
		horde[i].announce();
	}

	delete[] horde;

	return ;
}

int main(void)
{
	func();
	// system("leaks Zombie");

	return 0;
}