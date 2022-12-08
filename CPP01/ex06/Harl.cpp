#include "Harl.hpp"

Harl::Harl() {

	return ;
}

void	Harl::debug( void ) {

	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra meat for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n"
			  << "I really do!\n\n";

	return ;
}

void	Harl::info( void ) {

	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra meat costs more money.\n"
			  << "You didn’t put enough meat in my burger! If you did, "
			  << "I wouldn’t be asking for more!\n\n";

	return ;
}

void	Harl::warning( void ) {

	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra meat for free.\n"
			  << "I’ve been coming for years whereas you started working here since last month.\n\n";

	return ;
}

void	Harl::error( void ) {

	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";

	return ;
}


enum string_code {
	e_debug,
	e_info,
	e_warning,
	e_error,
	e_other
};

int	Harl::hashit(std::string level) {

	std::string	arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int	hashcode[4] = {e_debug, e_info, e_warning, e_error};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == arr[i])
			return hashcode[i];
	}
	return e_other;
}


void	Harl::complain( std::string level ) {

	void	(Harl::*f[4])( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	int	i = 4;

	switch (hashit(level)) {
		case e_debug:
			i = 0;
			break;
		case e_info:
			i = 1;
			break;
		case e_warning:
			i = 2;
			break;
		case e_error:
			i = 3;
			break;
		}
	
	if (i == 4) {
		std::cout << "[ Probably complaining about insignificant problems ]\n";
	}

	for ( ; i < 4; i++)
		(this->*f[i])();

	return ;
}