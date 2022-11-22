#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->counter = 0;
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
	if (idx == 8)
		this->counter = 0;
	std::cout << "first name: ";
	std::cin >> this->Contact[idx].firstname;
	std::cout << this->Contact[idx].firstname;
	std::cout << "last name: ";
	std::cin >> this->Contact[idx].lastname;
	std::cout << "nickname: ";
	std::cin >> this->Contact[idx].nickname;
	std::cout << "phone number: ";
	std::cin >> this->Contact[idx].phone_nbr;
	std::cout << "darkest secret: ";
	std::cin >> this->Contact[idx].secret;

	//Assuming all the fields have been completed
	this->counter++;
}

void	PhoneBook::SEARCH() {
		std::cout << "first name: ";
		std::cout << this->Contact[0].firstname;
		std::cout << "last name: ";
		std::cout << this->Contact[0].lastname;
		std::cout << "nickname: ";
		std::cout << this->Contact[0].nickname;
		std::cout << "phone number: ";
		std::cout << this->Contact[0].phone_nbr;
		std::cout << "darkest secret: ";
		std::cout << this->Contact[0].secret;


}

void	PhoneBook::EXIT() {

}
