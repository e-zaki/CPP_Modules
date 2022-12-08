#include "Harl.hpp"

int main(int argc, char *argv[]) {

	if (argc != 2) {

		std::cout << "\033[1;31m"
				  << "Wrong Nbr of Args :/"
				  << "\033[0;37\n";
		return 1;
	}

	std::string	level = argv[1];

	Harl	obj;

	obj.complain( level );

	return 0;
}
