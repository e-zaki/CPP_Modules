#include <iostream>

// using namespaces is forbidden

int main(int argc, char **argv)
{
	std::string	str;
	int		i, j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 0;
	while (++i < argc)
	{
		str = argv[i];
		j = -1;
		while (str[++j])
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] -= 32;
			std::cout << str[j];
		}
	}	
	std::cout << '\n';
}