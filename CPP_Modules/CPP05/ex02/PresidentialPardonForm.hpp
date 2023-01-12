#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( const PresidentialPardonForm& form );
	PresidentialPardonForm& operator= ( const PresidentialPardonForm& form );
	~PresidentialPardonForm( void );

	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};


#endif