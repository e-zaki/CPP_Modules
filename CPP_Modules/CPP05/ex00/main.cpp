#include "Bureaucrat.hpp"

int main(void)
{
	try {

		try {

			Bureaucrat TooLow("TooLow", 149);


			TooLow.DecrementGrade();
			std::cout << TooLow << std::endl;
			TooLow.DecrementGrade();
			std::cout << TooLow << std::endl;

		} catch (const Bureaucrat::GradeTooLowException e) {

			std::cout << e.what() << std::endl;

		} 
		Bureaucrat TooHigh("TooHigh", 3);

		TooHigh.IncrementGrade();
		std::cout << TooHigh << std::endl;
		TooHigh.IncrementGrade();
		std::cout << TooHigh << std::endl;
		TooHigh.IncrementGrade();
		std::cout << TooHigh << std::endl;

	} catch (const Bureaucrat::GradeTooHighException e) {
			std::cout << e.what() << std::endl;
	}

	return 0;
}