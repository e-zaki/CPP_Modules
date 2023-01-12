#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

# include "Form.hpp"

class Bureaucrat {

public:

	Bureaucrat( void );
	Bureaucrat( std::string name,  int grade );
	Bureaucrat( const Bureaucrat& obj );
	Bureaucrat& operator= ( const Bureaucrat& obj );
	~Bureaucrat( void );
	
	const std::string	getName() const;
	int					getGrade() const;

	void				IncrementGrade();
	void				DecrementGrade();

	class GradeTooHighException : public std::exception {
	public:
		explicit GradeTooHighException();
		const char* what() const throw();

	};
	
	class GradeTooLowException : public std::exception {
	public:
		explicit GradeTooLowException();
		const char* what() const throw();

	};

	void	signForm( Form& Form );

	void	executeForm(Form const & form);


private:

	const std::string	_name;
	int	_grade;

};

std::ostream&	operator<< ( std::ostream& os, const Bureaucrat& obj );

#endif