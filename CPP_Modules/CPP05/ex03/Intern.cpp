#include "Intern.hpp"

Intern::Intern( void ) {

}

Intern::Intern( const Intern& obj ) {
	operator=(obj);
}


Intern& Intern::operator= ( const Intern& obj ) {

	(void) obj;

	return *this;
}


Intern::~Intern( void ) {

}


Form *Intern::CreateShr( std::string target) {
	
	Form *ptr = new ShrubberyCreationForm(target);
	return ptr;
}

Form *Intern::CreateRob( std::string target ) {

	Form *ptr = new RobotomyRequestForm(target);
	return ptr;

}

Form *Intern::CreatePres( std::string target ) {

	Form *ptr = new PresidentialPardonForm(target);
	return ptr;
}


Form	*Intern::makeForm( std::string name, std::string target ) {

	Form	*ptr = 0;
	
	Form*	(Intern::*f[3])( std::string target ) = { &Intern::CreateShr, &Intern::CreateRob, &Intern::CreatePres };

	std::string arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int i = 0;
	for ( ; i < 3; i++)
	{
		if (arr[i] == name)
		{
			ptr = (this->*f[i])( target );
			break ;
		}
	}

	if (i == 3 && !ptr)
		std::cerr << "\033[0;31mForm with such a name doesn't exist!\033[0;37m" << std::endl;

	return ptr;
}
