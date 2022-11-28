#include "PhoneBook.hpp"

int main()
{
    PhoneBook   phonebook;
    std::string str;

    while (!std::cin.eof())
    {
        std::cout << "\033[0;33mEnter one of Commands [ ADD / SEARCH / EXIT ]:"
                  << "\n--->\033[0;37m ";
        std::getline(std::cin, str);
        if (str == "EXIT") {
            phonebook.EXIT();
            break ;
        }
        else if (str == "ADD") {
            phonebook.ADD();
        }
        else if (str == "SEARCH") {
            phonebook.SEARCH();
        }
        else
            std::cout << "\033[0;31m\nEnter a valid command :/\033[0;37m\n" << std::endl;
    }
    if (std::cin.eof())
        std::cout << "\033[0;31mEOF :/\033[0;37m\n\n";
    return (0);
}