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
