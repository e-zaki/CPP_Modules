#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("", 72, 45), _target("") {

}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
	: Form(target, 72, 45), _target(target) {

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& form ) {

	operator=(form);
}

RobotomyRequestForm& RobotomyRequestForm::operator= ( const RobotomyRequestForm& form ) {

    if (this != &form)
    {
	    _target = form._target;
	    Form::operator=(form);
    }

    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {

}

void	RobotomyRequestForm::execute(Bureaucrat const & executer) const {
	
	Form::execute(executer);

    std::srand(std::time(nullptr));

    int randNum = std::rand() % 2;

    if (randNum == 0) {
        std::cout << _target << " has been robotomized successfully :)" << std::endl;
    } else {
        std::cout << _target << " hasn't been robotomized :(" << std::endl;
    }	
}