#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {}

BitcoinExchange::BitcoinExchange( std::string file ) : line(""), date(""), value("")
{
	//--- store database in a container (std::map) ---//

	std::ifstream datafile("data.csv");
	if (!datafile)
	{
		std::cerr << "Error: data file couldn't be opened.\n";
		exit(2);
	}

	std::getline(datafile, line);
    if (std::strcmp(line.c_str(), "date,exchange_rate"))
		std::cerr << "Error: title must be : `date,exchange_rate`\n";
	while(datafile)
	{
		std::getline(datafile, line);
		if (line.empty())
			continue ;
		size_t	pos = line.find(',');
		date = line.substr(0, pos);
        if (!isValidDate(date) || pos == std::string::npos)
            continue ;
		value = line.substr(pos + 1);
        if (nonDigitOccur(value, 0))
            continue ;
		val = std::atof(value.c_str());

		data[date] = val;
	}

	// Process Input File
    ProcessInFile(file);

}

void	BitcoinExchange::ProcessInFile( std::string file )
{
	std::ifstream inf(file);
	if (!inf)
	{
		std::cerr << "Error: could not open file.\n";
		exit(1);
	}

	std::getline(inf, line);
    if (std::strcmp(line.c_str(), "date | value"))
		std::cerr << "Error: title must be : `date | value`\n";

	while (std::getline(inf, line))
	{
		if (line.empty())
		{
			std::cerr << "Error: empty entry.\n";
			continue ;
		}
		size_t	pos = line.find('|');
		date = line.substr(0, pos);

		//--- Check Date ---//
    
        if (rightTrim(date))
			continue ;
		if (!isValidDate(date))
		{
			std::cerr << "Error: bad input => " << date << "\n";  // Accepted format : `YYYY-MM-DD | value`"
			continue ;
		}

 		if (pos == std::string::npos)
		{
			std::cerr << "Error: missing `|` keyword.\n";
			continue ;
		}

		//--- Check value ---//

        value = line.substr(pos + 1);
		if (nonDigitOccur(value, 1))
		{
			std::cerr << "Error: bad input => " << value << "\n";
			continue ;
		}
		val = atof(value.c_str());
		if (val > 1000)
		{
			std::cerr << "Error: too large number.\n";
			continue ;
		}
		else if (val < 0)
		{
			std::cerr << "Error: not a positive number.\n";
			continue ;
		}

		//--- Get price after conversion ---//
        GetPrice(val);
	}
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& obj )
{
	if (this != &obj) {
		*this = operator=(obj);
	}
}

BitcoinExchange& BitcoinExchange::operator= ( const BitcoinExchange& obj )
{
	if (this != &obj) {
		data = obj.data;
	}

	return *this;
}

void BitcoinExchange::GetPrice(float val)
{
    std::map<std::string, float>::iterator it = data.lower_bound(date);
    if (it != data.begin() && (*it).first != date)
        it--;
    float price = ((*it).second) * val;
    std::cout << date << " => " << val << " = " << price <<  '\n';

}

int BitcoinExchange::rightTrim(std::string&str)
{
	if (str.empty())
		return 0;

	std::string::iterator it = str.end();

	if (it != str.begin())
		--it;
    if (*it == ' ')
		str.erase(it, str.end());
	else {
		std::cerr << "Error: bad input => " << str << "\n";
		return 1;
	}
	return 0;
}

void BitcoinExchange::leftTrim(std::string& str)
{
	if (str.empty())
		return ;

    std::string::iterator it = str.begin();

    if (it != str.end() && *it == ' ')
        ++it;
    str.erase(str.begin(), it);
}

bool BitcoinExchange::nonDigitOccur(std::string str, int flag)
{
    if (flag) {

    if (str.empty() || str[0] != ' ')
        return true;
    leftTrim(str);
    }
    if (str.empty() || (!std::isdigit(str[0]) && str[0] != '-'))
        return true;
    int counter = 0;
    for (std::string::iterator it = str.begin() + 1; it != str.end(); ++it )
    {
        if (std::isdigit((*it)) == 0 && (*it) != '.')
            return true;
        if ((*it) == '.')
            counter++;
    }
    if (counter > 1)
        return true;
    return false;
}

bool BitcoinExchange::isValidDate(std::string str)
{
    if (str.length() != 10 || str[4] != '-' || str[7] != '-' )
        return false;
    for (int i = 0; i < 10 ; i++)
    {
        if (i != 4 && i != 7 && !std::isdigit(str[i]))
            return false;
    }

    int year, month, day;
    if (std::sscanf(str.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
        return false;

    if (year < 2009 || year > 9999)
        return false;

    if (month < 1 || month > 12)
        return false;

    int daysInMonth = 31;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        daysInMonth = 30;
    else if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            daysInMonth = 29;
        else
            daysInMonth = 28;
    }

    if (day < 1 || day > daysInMonth)
        return false;

    return true;
}

BitcoinExchange::~BitcoinExchange( void ) {}