#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("", 100, 100, 30) {

	std::cout << "FragTrap Default Constructor Called" << std::endl;

}

FragTrap::FragTrap( const FragTrap &obj ) {

	std::cout << "FragTrap Copy Constructor Called" << std::endl;

	this->operator=(obj);
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30) {

	std::cout << "FragTrap Parameter Constructor Called" << std::endl;

}

FragTrap&	FragTrap::operator= ( const FragTrap &obj ) {

	ClapTrap::operator=(obj);

	return *this;
}

FragTrap::~FragTrap( void ) {

	std::cout << "FragTrap Destructor Called" << std::endl;

}

void	FragTrap::highFivesGuys( void ) {

	std::cout << "Let's make a Big high fives Guys :)" << std::endl;

}
