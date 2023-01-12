#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( const RobotomyRequestForm& form );
	RobotomyRequestForm& operator= ( const RobotomyRequestForm& form );
	~RobotomyRequestForm( void );

	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};


#endif