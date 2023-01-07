#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("") {

	std::cout << "WrongAnimal default Constructor Called" << std::endl;

}

WrongAnimal::WrongAnimal( const WrongAnimal &obj ) {

	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;

	this->operator=(obj);
}

WrongAnimal::WrongAnimal( std::string Type ) : type(Type) {

	std::cout << "WrongAnimal param Constructor Called" << std::endl;

	
}

WrongAnimal&	WrongAnimal::operator= ( const WrongAnimal &obj ) {

	type = obj.type;

	return *this;
}

WrongAnimal::~WrongAnimal( void ) {

	std::cout << "WrongAnimal Destructor Called" << std::endl;

}

void	WrongAnimal::makeSound( void ) const {

	std::cout << ">>>>>> WrongAnimal sound.. " << std::endl;

}

std::string	WrongAnimal::getType( void ) const {

	return this->type;
}


