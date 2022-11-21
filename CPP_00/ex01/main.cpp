#include "PhoneBook.hpp"

int main()
{
    PhoneBook   PB;
    Contact     Contact1;

    Contact1.firstname = "zakaria";
    Contact1.lastname = "ihihi";
    Contact1.nickname = "Mr_4lg0r";
    Contact1.phone_nbr = "+212-0123456789";

    PB.Contact[0] = Contact1;
    std::cout << "Contact infos:\n";
    std::cout << "  Index:  " << 0 << std::endl;
    std::cout << "  first name:  " << PB.Contact[0].firstname << std::endl;
    std::cout << "  last name:  " << PB.Contact[0].lastname << std::endl;
    std::cout << "  nickname:  " << PB.Contact[0].nickname << std::endl;
    std::cout << "  Phone:  " << PB.Contact[0].phone_nbr << std::endl;

    return (0);
}