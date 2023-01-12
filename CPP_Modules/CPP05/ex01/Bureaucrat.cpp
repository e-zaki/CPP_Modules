#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150) {

	std::cout << "Bureaucrat Constructor Called" << std::endl;

}

Bureaucrat::Bureaucrat( std::string name, int grade ) 
	: _name(name), _grade(grade)  {

	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();

	std::cout << "Bureaucrat Constructor Called" << std::endl;

}


Bureaucrat::Bureaucrat( const Bureaucrat& obj )
	 : _name( obj._name ) {

	this->operator=(obj);
}

Bureaucrat& Bureaucrat::operator= ( const Bureaucrat& obj ) {

	if (this == &obj)
		return *this;

	_grade = obj._grade;

	return *this;


}

Bureaucrat::~Bureaucrat( void ) {

	std::cout << "Bureaucrat Destructor Called" << std::endl;
}

const std::string	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::IncrementGrade() {
		_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::DecrementGrade() {

	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

std::ostream&	operator<< ( std::ostream& os, const Bureaucrat& obj ) {

	os << obj.getName() << ", bureaucrat grade "
	   << obj.getGrade() << ".";

	return os;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}
Bureaucrat::GradeTooLowException::GradeTooLowException() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

	return ">>>>> Grade is Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

	return ">>>>> Grade is Too Low";
}

void	Bureaucrat::signForm( Form& form ) {

	form.beSigned(*this);

}
