#include "Brain.hpp"

Brain::Brain( void ) {

	std::ostringstream s;

	for (int i = 0; i < 100; i++) {
		s << "Idea nb " << i + 1;
		ideas[i] = s.str();
		s.str("");
	}
}

Brain::Brain( const Brain &obj ) {

	this->operator=(obj);
}

Brain&	Brain::operator= ( const Brain &obj ) {

	if (this == &obj)
		return *this;

	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];

	return *this;
}

Brain::~Brain( void ) {

}

void	Brain::DisplayIdeas() {

	for (int i = 0; i < 100; i++)
		std::cout << ideas[i] << std::endl;
		
}