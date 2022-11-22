#include "PhoneBook.hpp"

int main()
{
    PhoneBook   phonebook;
    std::string str;

    while (1)
    {
        std::cout << "Enter Command: ";
        std::cin >> str;
        if (str.compare("EXIT") == 0)
            break ;
        else if (str.compare("ADD") == 0) {
            std::cout << "Execute ADD()" << std::endl;
            phonebook.ADD();
        }
        else if (str.compare("SEARCH") == 0) {
            std::cout << "Execute SEARCH()" << std::endl;
            phonebook.SEARCH();
        }
        else
            std::cout << "Enter a valid command :)" << std::endl;
    }
    return (0);
}