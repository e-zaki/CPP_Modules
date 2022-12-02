#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# define PhoneBookSize 8

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	void ADD(void);
	void SEARCH(void);
	void EXIT(void);


private:
	int			counter;					// counter: the index where to add new contact
	int			EntriesCount;				// available range of display 
	Contact 	contact[PhoneBookSize];
};

#endif