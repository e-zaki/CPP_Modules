#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <exception>

class Bureaucrat ;

class Form {

public:
	Form( void );
	Form( const Form& obj );
	Form( std::string name, int gradeToSign, int gradeToExec ); 
	Form &operator= ( const Form& obj );
	~Form( void );


	class GradeTooHighException : public std::exception {
	public:
		explicit GradeTooHighException( const std::string& msg );
		~GradeTooHighException() throw();
		const char* what() const throw();
		
	private:
	const std::string	_message;

	};
	
	class GradeTooLowException : public std::exception {
	public:
		explicit GradeTooLowException( const std::string& msg );
		~GradeTooLowException() throw();
		const char* what() const throw();
	
	private:
	const std::string	_message;

	};
	
	class FormNotSignedException : public std::exception {
	public:
		explicit FormNotSignedException( const std::string& msg );
		~FormNotSignedException() throw();
		const char* what() const throw();
	
	private:
	const std::string	_message;

	};

	const std::string	getName() const;
	bool			 	FormSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExec() const;

	void beSigned(const Bureaucrat& B );

	virtual void execute(Bureaucrat const & executor) const = 0;

private:
	const std::string	_name;
	bool				_Signed;
	const int			_RequiredToSign;
	const int			_RequiredToExec;
};

std::ostream&	operator<< ( std::ostream& os, const Form& obj );

#include "Bureaucrat.hpp"


#endif