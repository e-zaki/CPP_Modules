#ifndef SHRUBBERRYCREATIONFORM_HPP
#define SHRUBBERRYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

public:

	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( const ShrubberyCreationForm& form );
	ShrubberyCreationForm& operator= ( const ShrubberyCreationForm& form );
	~ShrubberyCreationForm( void );

	void execute(Bureaucrat const & executor) const;


private:
	std::string _target;
};


#endif