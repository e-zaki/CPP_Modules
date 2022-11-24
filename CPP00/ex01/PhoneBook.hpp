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
	int			counter;
	int			PhoneBookSize;
	Contact 	contact[8];
	std::string	InputBuff[5];

	void	GetInputs(void);
	int		NoEmptyFields();

};

#endif