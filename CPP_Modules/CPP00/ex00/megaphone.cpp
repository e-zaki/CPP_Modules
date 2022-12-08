#include <iostream>

// using namespaces is forbidden

int main(int argc, char **argv)
{
	std::string	str;
	int		i;
	int		j;
	char	ch;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 0;
	while (++i < argc)
	{
		str = argv[i];
		j = -1;
		while (str[++j])
		{
			ch = std::toupper(str[j]);
			std::cout << ch;
		}
	}	
	std::cout << '\n';
}