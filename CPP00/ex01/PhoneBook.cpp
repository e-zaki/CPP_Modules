#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->counter = 0;
	this->EntriesCount = 0;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

// PhoneBook Methods

void	PhoneBook::ADD(void) {
	std::string		data;
	int				idx;

	idx = this->counter;
	if (idx == PhoneBookSize)
		this->counter = 0;

	// Extract Contact infos from the user
	this->contact[this->counter].getInputs();

	this->counter++;
	if (this->EntriesCount < PhoneBookSize)
		this->EntriesCount++;

	std::cout << "\n\033[0;32mContact added Successfully :)\033[0;37m\n\n";

}

void	PhoneBook::SEARCH() {
	int	idx;

	if (this->EntriesCount == 0){
		std::cout << "\n\033[0;36mPhoneBook Is Empty :/\033[0;37m\n\n";
		return ;
	}
	std::cout << "\n   --------------------------------------------------" << std::endl;
	std::cout << "   |  index  | first name |  last name |  nickname  |\n";
	std::cout << "   --------------------------------------------------" << std::endl;

	for	(int i = 0; i < this->EntriesCount; i++)
		this->contact[i].DisplayRow(i);
	
	idx = getIndex(this->EntriesCount);
	std::cout << std::endl;
	this->contact[idx].DisplayFields();
}

void	PhoneBook::EXIT() {
	std::cout << "\033[0;36m<<  Exit Program  >>\033[0;37m\n\n";
}


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

int	getIndex(int nbr_contacts) {
	std::string	input;

	std::cout << std::endl;
	std::cout << "Enter Index of Desired entry : ";
	while (true)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "\n\033[0;31mEOF :/\033[0;37m\n";
			exit(1);
		}
		if (input == "" || !isdigit(input[0]) || input.length() > 1)
			std::cout << "\033[0;31mInvalid Entry\033[0;37m\nTry Again: ";
		else if ((input[0] - 48) >= nbr_contacts)
			std::cout << "\033[0;31mIndex is out of range\033[0;37m\nTry Again: ";
		else
			return (input[0] - 48);
	}
	
}
