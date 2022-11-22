#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	void ADD(void);
	void SEARCH(void);
	void EXIT(void);


private:
	int		counter;
	Contact Contact[8];
};

#endif