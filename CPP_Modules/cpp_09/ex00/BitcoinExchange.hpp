#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange {

public:
	
	BitcoinExchange( void );
	BitcoinExchange( std::string file );
	BitcoinExchange( const BitcoinExchange& obj );
	BitcoinExchange& operator= ( const BitcoinExchange& obj );
	~BitcoinExchange( void );

	int		rightTrim(std::string& str);
	void	leftTrim(std::string& str);
	bool	isValidDate(std::string str);
	bool	nonDigitOccur(std::string str, int flag);
	void	GetPrice(float val);
	void	ProcessInFile( std::string file );

private:

	std::map<std::string, float> data;
	std::string	line;
	std::string date;
	std::string value;
	float		val;

};

#endif