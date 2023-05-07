#include "RPN.hpp"

int main(int ac, char *av[])
{
    if (ac == 2) {
        RPN Calculate(av[1]);
    }
    else {
        std::cerr << "Error\n";
    }
    return 0;
}
