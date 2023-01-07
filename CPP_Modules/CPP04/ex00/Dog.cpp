#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {

	std::cout << "Dog default Constructor Called" << std::endl;

}

Dog::Dog( const Dog &obj ) {

	std::cout << "Dog Copy Constructor Called" << std::endl;

	this->operator=(obj);
}


Dog&	Dog::operator= ( const Dog &obj ) {

	Animal::operator=(obj);

	return *this;
}

Dog::~Dog( void ) {

	std::cout << "Dog Destructor Called" << std::endl;

}

void	Dog::makeSound( void ) const {

	std::cout << ">>>>>> bark! bark! bark.." << std::endl;

}
