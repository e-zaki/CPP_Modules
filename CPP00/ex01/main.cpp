#include "PhoneBook.hpp"

int main()
{
    PhoneBook   phonebook;
    std::string str;

    while (1)
    {
        std::cout << "Enter one of Commands [ ADD / SEARCH / EXIT ]:\n---> ";
        std::getline(std::cin, str);
        if (str == "EXIT")
            break ;
        else if (str == "ADD") {
            phonebook.ADD();
        }
        else if (str == "SEARCH") {
            phonebook.SEARCH();
        }
        else
            std::cout << "Enter a valid command :/" << std::endl;
    }
    return (0);
}