#include "Contact.hpp"

// Contact Methods

void	Contact::RightAllign(std::string str)
{
	if (str.length() <= 10)
		std::cout << std::right << std::setfill(' ') << std::setw(10) << str;
	else
		std::cout << str.substr(0, 9) << '.';
}

// Displays Contact infos line by line
void	Contact::DisplayFields(void)
{
	std::cout << std::left << std::setfill(' ') << std::setw(20)
			  << "First name: " << this->firstname << std::endl;

	std::cout << std::left << std::setfill(' ') << std::setw(20)
			  << "Last name:" << this->lastname << std::endl;

	std::cout << std::left << std::setfill(' ') << std::setw(20)
			  << "Nickname:" << this->nickname << std::endl;

	std::cout << std::left << std::setfill(' ') << std::setw(20)
			  << "Phone number:" << this->phone_nbr << std::endl;

	std::cout << std::left << std::setfill(' ') << std::setw(20)
			  << "Darkest secret:" << this->secret << "\n\n";
}

void	Contact::DisplayRow(int idx)
{
	std::cout << "   |       " <<  idx;
	std::cout <<   " | ";
	this->RightAllign(this->firstname);
	std::cout <<   " | ";
	this->RightAllign(this->lastname);
	std::cout <<   " | ";
	this->RightAllign(this->nickname);
	std::cout <<  " |" << std::endl;
	std::cout << "   --------------------------------------------------" << std::endl;

}

void	Contact::getInputs()
{
		this->firstname = getName("first name: ");
		this->lastname  = getName("last name: ");
		this->nickname = getName("nickname: ");
		this->phone_nbr = getPhoneNum("Phone number: ");
		this->secret = getName("darkest secret: ");
}