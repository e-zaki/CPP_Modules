#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {

	std::cout << "Cat default Constructor Called" << std::endl;

	brain = new Brain;

}

Cat::Cat( const Cat &obj ) {

	std::cout << "Cat Copy Constructor Called" << std::endl;

	this->operator=(obj);
	
}


Cat&	Cat::operator= ( const Cat &obj ) {

	if (this == &obj)		// self-assignment guard
		return *this;

	Animal::operator=(obj);

	if (brain)
		delete brain;

	brain = new Brain;
	*brain = *(obj.brain);

	return *this;
}

Cat::~Cat( void ) {

	std::cout << "Cat Destructor Called" << std::endl;

	delete brain;
}

void	Cat::makeSound( void ) const {

	std::cout << ">>>>>> Meow.. Miaow!" << std::endl;

}

void	Cat::showBrain( void ) const {

	brain->DisplayIdeas();

}
