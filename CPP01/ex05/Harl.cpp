#include "Harl.hpp"

Harl::Harl() {
	
	_level = "";

	return ;
}

void	Harl::debug( void ) {

	if (_level == "DEBUG") {

		std::cout << "[ " << _level << " ]\n";
		std::cout << "I love having extra meat for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
	}

	return ;
}

void	Harl::info( void ) {

	if (_level == "INFO") {
		std::cout << "[ " << _level << " ]\n";
		std::cout << "I cannot believe adding extra meat costs more money."
				  << " You didn’t put enough meat in my burger! If you did, "
				  << "I wouldn’t be asking for more!\n\n";
	}

	return ;
}

void	Harl::warning( void ) {

	if (_level == "WARNING") {

		std::cout << "[ " << _level << " ]\n";
		std::cout << "I think I deserve to have some extra meat for free. "
				  << "I’ve been coming for years whereas you started working here since last month.\n\n";
	}

	return ;
}

void	Harl::error( void ) {

	if (_level == "ERROR") {

		std::cout << "[ " << _level << " ]\n";
		std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
	}

	return ;
}


void	Harl::complain( std::string level ) {

	_level = level;

	void	(Harl::*f)( void );

	f = &Harl::debug;
	(this->*f)();

	f = &Harl::info;
	(this->*f)();

	f = &Harl::warning;
	(this->*f)();

	f = &Harl::error;
	(this->*f)();

	return ;
}