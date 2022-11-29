#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "utils.hpp"

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

#endif
