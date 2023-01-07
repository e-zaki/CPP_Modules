#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {

	std::cout << "Cat default Constructor Called" << std::endl;

}

Cat::Cat( const Cat &obj ) {

	std::cout << "Cat Copy Constructor Called" << std::endl;

	this->operator=(obj);
}


Cat&	Cat::operator= ( const Cat &obj ) {

	Animal::operator=(obj);

	return *this;
}

Cat::~Cat( void ) {

	std::cout << "Cat Destructor Called" << std::endl;

}

void	Cat::makeSound( void ) const {

	std::cout << ">>>>>> Meow.. Miaow!" << std::endl;

}
