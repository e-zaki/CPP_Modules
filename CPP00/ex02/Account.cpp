#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts),\
	_amount(initial_deposit), _nbDeposits(0),\
	_nbWithdrawals(0) {
	
	this->_displayTimestamp();
	std::cout << " index:" << Account::_nbAccounts
		  	  << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += _amount;

	return ;
}

Account::~Account() {
	
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		  	  << ";amount:" << this->_amount 
			  << ";closed" << std::endl;

	return ;
}

int Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}


int	Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts()
		  	  << ";total:" << Account::getTotalAmount() 
			  << ";deposits:" << Account::getNbDeposits()
			  << ";withdrawals:" << Account::getNbWithdrawals()
			  << std::endl;
	return ;
}

void	Account::displayStatus() const{
	
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";amount:" << this->_amount
			  << ";deposits:" << this->_nbDeposits
			  << ";withdrawals:" << this->_nbWithdrawals
			  << std::endl;
}

void	Account::makeDeposit( int deposit ) {

	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount
			  << ";deposit:" << deposit;
	
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount
			  << ";nb_deposits:" << this->_nbDeposits
			  << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount
			  << ";withdrawal:";
	if (this->checkAmount() < withdrawal) {
		std::cout << "refused" << std::endl;
		return false;
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << withdrawal
			<< ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals
			<< std::endl;
		return true;
	}
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::_displayTimestamp( void ) {

	// current date/time based on current system
   time_t now = time(0);

   tm *ltm = localtime(&now);

	// print various components of tm structure.
	std::cout << "[" << 1900 + ltm->tm_year;

	std::cout << std::right << std::setfill('0') 
			  << std::setw(2) << 1 + ltm->tm_mon;

	std::cout << std::right << std::setfill('0') 
			  << std::setw(2) << ltm->tm_mday;
	
	std::cout << "_"
			  << std::right << std::setfill('0') 
			  << std::setw(2) << ltm->tm_hour;

	std::cout << std::right << std::setfill('0') 
			  << std::setw(2) << ltm->tm_min;
	std::cout << std::right << std::setfill('0') 
			  << std::setw(2) << ltm->tm_sec << "]";

}
