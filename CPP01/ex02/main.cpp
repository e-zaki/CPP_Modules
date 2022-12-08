#include <iostream>

int main( void )
{
	std::string	str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;

	std::string	&stringREF = str;

	std::cout << "memory address of str:\n"
			  << &str << std::endl;

	std::cout << "\nmemory address held by stringPTR:\n"
			  << &stringPTR << std::endl;

	std::cout << "\nmemory address held by stringREF:\n"
			  << &stringREF << std::endl;

	std::cout << "\nvalue of str:\n"
			  << str << std::endl;

	std::cout << "\nvalue pointed by stringPTR:\n"
			  << *stringPTR << std::endl;

	std::cout << "\nvalue pointed by stringREF:\n"
			  << stringREF << std::endl;

	return 0;
}