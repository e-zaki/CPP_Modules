#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "utils.hpp"

class Contact {

public:

	void	DisplayRow(int idx);
	void	DisplayFields();
	void	getInputs();

private:

	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_nbr;
	std::string	secret;
	
	void	RightAllign(std::string str);

};
#endif
