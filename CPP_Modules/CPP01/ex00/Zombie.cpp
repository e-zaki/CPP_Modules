#include "Zombie.hpp"

Zombie::Zombie(std::string Zname) : _name(Zname) {
	std::cout << _name << " created 🧟" << std::endl;
	return ;
}

Zombie::~Zombie() {

	std::cout << _name << " destroyed" << std::endl;

	return ;
}


void	Zombie::announce(void) {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";

	return ;
}