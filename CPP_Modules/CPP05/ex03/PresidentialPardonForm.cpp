#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("", 25, 5), _target("") {

}

PresidentialPardonForm::PresidentialPardonForm( std::string target )
	: Form(target, 25, 5), _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& form ) {

	operator=(form);
}

PresidentialPardonForm& PresidentialPardonForm::operator= ( const PresidentialPardonForm& form ) {

	if (this != &form)
	{
		_target = form._target;
		Form::operator=(form);
	}

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {

}

void	PresidentialPardonForm::execute(Bureaucrat const & executer) const {
	
	Form::execute(executer);

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	
}