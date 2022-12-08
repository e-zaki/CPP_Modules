#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (argc != 4) {
		std::cerr << "\n\033[1;31m"
				  << "Wrong number of Args!" 
				  << "\033[0;37m\n\n";
		std::cout << "\033[1;33m" 
				  << "Usage: ./main [ filename ] "
				  << "[ str to replace ] [ substitution str ]"
				  << "\033[0;37m\n\n";
		return (1);
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (s1.empty()) {

		std::cerr << "\033[1;31m"
				  << "Second Argument can't be Empty string :/"
				  << "\033[0;37m\n";
        return 2;
	}

	// We'll read from filename
	std::ifstream	inf ( filename );

	if (!inf)
	{
		std::cerr << "\033[1;31m"
				  << "Uh oh, "
				  << filename
				  << " could not be opened for reading!"
				  << "\033[0;37m\n";
        return 2;
	}

	std::ofstream	outf ( filename + ".replace" );

	if (!outf)
	{
		std::cerr << "\033[1;31m"
				  << "Uh oh, "
				  << filename << ".replace"
				  << " could not be opened for writing!"
				  << "\033[0;37m\n";
        return 2;
	}
		
	std::string	txt;
	std::getline(inf, txt, '\0');
	
	std::size_t	l = s1.length();

	std::size_t	found = txt.find(s1);

	while (found != std::string::npos)
	{
		txt.erase(found, l);
		txt.insert(found, s2);
		found = txt.find(s1, found + s2.length());
	}
	outf << txt;

	std::cout << "\033[1;32m"
			  << filename
			  << "'s content have been modified & copied to "
			  << filename
			  << ".replace Successfully :)"
			  << "\033[0;37m"
			  << std::endl;

	inf.close();
	outf.close();

	return 0;
}