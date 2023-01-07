#include "Animal.hpp"

Animal::Animal( void ) : type("") {

	std::cout << "Animal default Constructor Called" << std::endl;

}

Animal::Animal( const Animal &obj ) {

	std::cout << "Animal Copy Constructor Called" << std::endl;

	this->operator=(obj);
}

Animal::Animal( std::string Type ) : type(Type) {

	std::cout << "Animal param Constructor Called" << std::endl;

	
}

Animal&	Animal::operator= ( const Animal &obj ) {

	type = obj.type;

	return *this;
}

Animal::~Animal( void ) {

	std::cout << "Animal Destructor Called" << std::endl;

}

void	Animal::makeSound( void ) const {

	std::cout << ">>>>>> Animal sound.. " << std::endl;

}

std::string	Animal::getType( void ) const {

	return this->type;
}


