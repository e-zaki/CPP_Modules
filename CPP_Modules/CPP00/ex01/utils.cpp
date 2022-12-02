#include "PhoneBook.hpp"

bool emptyEntry(std::string s){
    if (s == "")
		return true;
	for (int i = 0; i < (int) s.length(); i++){
        if (!std::isspace(s[i]))
            return false;
    }
    return true;
}

bool printable(std::string s){
	for (int i = 0; i < (int) s.length(); i++){
        if (!std::isprint(s[i]))
            return false;
    }
    return true;
}

bool OnlyDigits(std::string s){
    if (s == "")
		return false;
	for (int i = 0; i < (int) s.length(); i++){
        if (!std::isdigit(s[i]))
            return false;
    }
    return true;
}

// Ensures we get non-empty input
std::string		getName(std::string msg)
{
	std::string	input;

	std::cout << msg;
	while (true)
	{
		std::getline(std::cin, input);
		
		if (std::cin.eof())
		{
			std::cout << "\n\033[0;31mEOF :/\033[0;37m\n";
			exit(1);
		}
		if (emptyEntry(input) || !printable(input))
		{
			std::cout << "\033[0;31mInvalid Input!\033[0;37m\n";
			// left allign output txt (20 chars wide)
			std::cout << "Try again:   ";
			continue;
		}
		return input;
	}
}

// Ensures we get only-digits input string
std::string		getPhoneNum(std::string msg)
{
	std::string	input;

	std::cout << msg;
	while (true)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
				std::cout << "\n\033[0;31mEOF :/\033[0;37m\n";
				exit(1);

		}
		if (!OnlyDigits(input))
		{
			std::cout << "\033[0;31mAccepts only Digits!\033[0;37m\n";
			// left allign output txt (20 chars wide)
			std::cout << std::left << std::setfill(' ') << std::setw(15)
			  		  << "Try again: ";
		}
		else
			return (input);
	}
}

