#include "Bureaucrat.hpp"

int main(void)
{
	Form formA("Form_A", 10, 10);
	Form formB("Form_A", 7, 10);

	Bureaucrat B1("B1", 4);
	Bureaucrat B2("B2", 8);
	Bureaucrat B3("B3", 9);

	try {

		B1.signForm(formA);
		B2.signForm(formA);
	}
	catch (std::exception& e) {

		std::cerr << e.what() << std::endl;
	}
	try {
		formB.beSigned(B3);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;

	}
	return 0;
}