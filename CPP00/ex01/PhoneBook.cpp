#include "PhoneBook.hpp"

# define PHB_SIZE 8

PhoneBook::PhoneBook(void) {
	this->counter = 0;
	this->PhoneBookSize = 0;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	PhoneBook::GetInputs(void)
{
	std::cout << "\nfirst name: ";
	if (!std::cin.eof())
	std::getline(std::cin, this->InputBuff[0]);

	std::cout << "last name: ";
	std::getline(std::cin, this->InputBuff[1]);

	std::cout << "nickname: ";
	std::getline(std::cin, this->InputBuff[2]);

	std::cout << "phone number: ";
	std::getline(std::cin, this->InputBuff[3]);

	std::cout << "darkest secret: ";
	std::getline(std::cin, this->InputBuff[4]);
}

int		PhoneBook::NoEmptyFields()
{
	if (this->InputBuff[0] == "")
		return (0);
	else if (this->InputBuff[1] == "")
		return (0);
	else if (this->InputBuff[2] == "")
		return (0);
	else if (this->InputBuff[3] == "")
		return (0);
	else if (this->InputBuff[4] == "")
		return (0);
	return (1);
}

void	Contact::Assign(std::string InputBuff[5])
{
		this->firstname = InputBuff[0];
		this->lastname = InputBuff[1];
		this->nickname = InputBuff[2];
		this->phone_nbr = InputBuff[3];
		this->secret = InputBuff[4];
}

// PhoneBook Methods

void	PhoneBook::ADD(void) {
	std::string		data;
	int				idx;

	idx = this->counter;
	if (idx == PHB_SIZE)
		this->counter = 0;

	this->GetInputs();

	if (this->NoEmptyFields())
	{
		this->contact[this->counter].Assign(this->InputBuff);

		this->counter++;
		if (this->PhoneBookSize < PHB_SIZE)
			this->PhoneBookSize++;

		std::cout << "\nContact added Successfully :)\n\n";
	}
	else
		std::cout << "\nEmpty field detected, Try Again!\n\n";

}

void	Contact::RightAllign(std::string str)
{
	if (str.length() <= 10)
		std::cout << std::right << std::setfill(' ') << std::setw(10) << str;
	else
		std::cout << str.substr(0, 9) << '.';
}

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

void	PhoneBook::SEARCH() {
	std::string		str;

	std::cout << "\n\n   |  index  | first name |  last name |  nickname  |\n";
	std::cout << "   --------------------------------------------------" << std::endl;
	for	(int i = 0; i < this->PhoneBookSize; i++)
		this->contact[i].DisplayRow(i);
	
	std::cout << std::endl;
	std::cout << "Enter Index of Desired entry : ";
	std::getline(std::cin, str);
	std::cout << std::endl;

	if (str == "" || !isdigit(str[0]) || str.length() > 1)
		std::cout << "Invalid Entry\n\n";
	else if ((str[0] - 48) > this->PhoneBookSize)
		std::cout << "Entry is out of range\n\n";
	else
		this->contact[str[0] - 48].DisplayFields();
}

void	PhoneBook::EXIT() {

}
