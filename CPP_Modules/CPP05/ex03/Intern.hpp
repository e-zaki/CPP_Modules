#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:

	Intern( void );
	Intern( const Intern& obj );
	Intern& operator= ( const Intern& obj );
	~Intern( void );

	Form *CreateShr( std::string target );
	Form *CreateRob( std::string target );
	Form *CreatePres( std::string target );

	Form *makeForm( std::string name, std::string target );

};

#endif