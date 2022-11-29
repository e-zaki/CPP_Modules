#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit),\
	_accountIndex(Account::_nbAccounts), _nbDeposits(0),\
	_nbWithdrawals(0) {
	std::cout << "[        _      ]"
			  << " index:" << Account::_nbAccounts
		  	  << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += _amount;

	return ;
}

Account::~Account() {
	std::cout << "[        _      ]"
			  << " index:" << Account::_nbAccounts
		  	  << ";amount:" << this->_amount << ";closed" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += _amount;

	return ;
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
	std::cout << "[        _      ]"
			  << " accounts:" << Account::getNbAccounts()
		  	  << ";total:" << Account::getTotalAmount() 
			  << ";deposits:" << Account::getNbDeposits()
			  << ";withdrawals:" << Account::getNbWithdrawals()
			  << std::endl;
	return ;
}

void	Account::displayStatus() const{
	std::cout << "[        _      ]"
			  << " index:" << this->_accountIndex
			  << ";amount:" << this->_amount
			  << ";deposits:" << this->_nbDeposits
			  << ";withdrawals:" << this->_nbWithdrawals
			  << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	std::cout << "[        _      ]"
			  << " index:" << this->_accountIndex
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
	std::cout << "[        _      ]"
			  << " index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount
			  << ";withdrawal:";
	if (this->_amount < withdrawal) {
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
