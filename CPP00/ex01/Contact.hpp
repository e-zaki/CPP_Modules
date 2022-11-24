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
	void	Assign(std::string buff[5]);
};

#endif
