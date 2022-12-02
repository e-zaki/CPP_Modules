#include <iostream>

int main( void )
{
	std::string	str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;

	std::string	&stringREF = str;

	// memory address of str
	std::cout << &str << std::endl;

	// memory address held by stringPTR
	std::cout << &stringPTR << std::endl;

	// memory address held by stringREF
	std::cout << &stringREF << std::endl;

	// value of str
	std::cout << str << std::endl;

	// value pointed by stringPTR
	std::cout << *stringPTR << std::endl;

	// value pointed by stringREF
	std::cout << stringREF << std::endl;


	return 0;
}