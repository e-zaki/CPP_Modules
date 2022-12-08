#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	if (N  < 0) {
		std::cout << "\033[0;31m"
				  << "N must be positive :p"
				  << "\033[0;37m\n\n";
		return 0;
	}

	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N ; i++) {
		horde[i].setName(name);
	}

	return horde;
}
