#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat B("B", 3);
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Tree");
	B.signForm(*rrf);
	rrf->execute(B);
	Form* wrong_rrf;
	wrong_rrf = someRandomIntern.makeForm("Form that doesn't exist", "clay");
}