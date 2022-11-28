#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact {
private:

	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_nbr;
	std::string	secret;

public:

	void	RightAllign(std::string str);
	void	DisplayRow(int idx);
	void	DisplayFields();
	void	getInputs();
};


// prototypes of additional used functs:

int				getIndex(int nbr_contacts);
std::string		getPhoneNum(std::string msg);
std::string		getName(std::string msg);
bool 			OnlyDigits(std::string s);
bool			printable(std::string s);
bool			emptyEntry(std::string s);

#endif
