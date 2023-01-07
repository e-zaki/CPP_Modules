#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {

	std::cout << "WrongCat default Constructor Called" << std::endl;

}

WrongCat::WrongCat( const WrongCat &obj ) {

	std::cout << "WrongCat Copy Constructor Called" << std::endl;

	this->operator=(obj);
}


WrongCat&	WrongCat::operator= ( const WrongCat &obj ) {

	WrongAnimal::operator=(obj);

	return *this;
}

WrongCat::~WrongCat( void ) {

	std::cout << "WrongCat Destructor Called" << std::endl;

}

void	WrongCat::makeSound( void ) const {

	std::cout << ">>>>>> Meow.. Miaow!" << std::endl;

}
