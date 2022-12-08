#include "Zombie.hpp"

Zombie::Zombie(){

	std::cout << "Zombie Created 🧟" << std::endl;

	return ;
}

Zombie::~Zombie() {

	std::cout << _name << " destroyed 🧟" << std::endl;

	return ;
}

void	Zombie::setName(std::string name) {

	this->_name = name;

	return ;
}

void	Zombie::announce(void) {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";

	return ;
}