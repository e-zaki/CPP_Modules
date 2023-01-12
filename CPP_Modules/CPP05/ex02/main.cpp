#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
	ShrubberyCreationForm	formA("Rockey");
	RobotomyRequestForm		formB("David");
	PresidentialPardonForm	formC("Smesh");

	Bureaucrat B1("B", 6);

	try {

	B1.signForm(formA);
	B1.signForm(formB);
	B1.signForm(formC);
	formA.execute(B1);
	B1.executeForm(formB);
	B1.executeForm(formC);
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}