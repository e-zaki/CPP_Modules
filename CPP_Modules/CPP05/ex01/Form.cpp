#include "Form.hpp"

Form::Form() 
	: _name(""), _Signed(false), _RequiredToSign(150), _RequiredToExec(150)
{

	std::cout << "Form Constructor Called" << std::endl;

}

Form::Form( std::string name, int gradeToSign, int gradeToExec ) 
	: _name(name), _Signed(false), _RequiredToSign(gradeToSign), _RequiredToExec(gradeToExec)
{

	if (gradeToSign < 1) {
		throw GradeTooHighException(">>>>> Required grade to sign is too High.");
	}
	else if (gradeToSign > 150) {
		throw GradeTooLowException(">>>>> Required grade to sign is too low.");
	}

	if (gradeToExec < 1) {
		throw GradeTooHighException(">>>>> Required grade to execute is too High.");
	}
	else if (gradeToExec > 150) {
		throw GradeTooLowException(">>>>> Required grade to execute is too low.");
	}

	std::cout << "Form Constructor Called" << std::endl;

}


Form::Form( const Form& obj )
	 : _name( obj._name ), _RequiredToSign(obj._RequiredToSign), _RequiredToExec(obj._RequiredToExec)
{

	this->operator=(obj);
}

Form& Form::operator= ( const Form& obj )
{

	if (this != &obj) {
		_Signed = obj._Signed;
	}

	return *this;
}

Form::~Form( void ) {

	std::cout << "Form Destructor Called" << std::endl;
}

const std::string	Form::getName() const
{
	return _name;
}

bool	Form::FormSigned() const
{
	return _Signed;
}

int	Form::getGradeToSign() const
{
	return _RequiredToSign;
}

int	Form::getGradeToExec() const
{
	return _RequiredToExec;
}



std::ostream&	operator<< ( std::ostream& os, const Form& obj ) {

	os << "Form name: " << obj.getName()
	   << "\nForm status: ";
	
	if (obj.FormSigned())
		os << "Signed";
	else
		os << "not Signed";
	
	os << "\nRequired grade to sign Form: " << obj.getGradeToSign()
	   << "\nRequired grade to execute Form: " << obj.getGradeToExec()
	   << '\n';

	return os;
}

Form::GradeTooHighException::GradeTooHighException(const std::string& msg) : _message(msg) {}
Form::GradeTooLowException::GradeTooLowException(const std::string& msg) : _message(msg) {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Form::GradeTooHighException::what() const throw() {

	return _message.c_str();
}

const char* Form::GradeTooLowException::what() const throw() {

	return _message.c_str();
}

void Form::beSigned( const Bureaucrat& B ) {
	
	std::string msg;

	if (FormSigned()) {
		msg =  ">>>>> " + B.getName() + " couldn’t sign " + getName() + " because it's already signed.";
		std::cerr << msg << std::endl;
	}
	else if (B.getGrade() > this->getGradeToSign()) {
		msg =  ">>>>> " + B.getName() + " couldn’t sign " + getName() + " because grade is too low.";
		throw Form::GradeTooLowException(msg);
	}
	else {
		msg =  ">>>>> " + B.getName() + " signed " + getName() + ".";
		std::cout << msg << std::endl;
		_Signed = true;
	}
}
