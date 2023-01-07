#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {

	std::cout << "Dog default Constructor Called" << std::endl;

	brain = new Brain;
}

Dog::Dog( const Dog &obj ) {

	std::cout << "Dog Copy Constructor Called" << std::endl;

	this->operator=(obj);
}


Dog&	Dog::operator= ( const Dog &obj ) {

	if (this == &obj)
		return *this;

	Animal::operator=(obj);

	if (brain)
		delete brain;

	brain = new Brain;
	*brain = *(obj.brain);

	return *this;
}

Dog::~Dog( void ) {

	std::cout << "Dog Destructor Called" << std::endl;

	delete brain;
}

void	Dog::makeSound( void ) const {

	std::cout << ">>>>>> bark! bark! bark.." << std::endl;

}

void	Dog::showBrain( void ) const {

	brain->DisplayIdeas();

}
