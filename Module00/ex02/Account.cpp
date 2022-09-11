/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvayon <hvayon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:05:35 by hvayon            #+#    #+#             */
/*   Updated: 2022/09/11 15:09:01 by hvayon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	
		this->_accountIndex = _nbAccounts++;
		Account::_totalAmount += initial_deposit;
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ';';
		std::cout << "amount:" << this->_amount << ';';
		std::cout << "created" << std::endl;
}

Account::Account( void ) : _amount(0), _nbDeposits(0), _nbWithdrawals(0) {
		this->_accountIndex = _nbAccounts++;
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ';';
		std::cout << "amount:" << this->_amount << ';';
		std::cout << "created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ';';
	std::cout << "total:" << _totalAmount << ';';
	std::cout << "deposits:" << _totalNbDeposits << ';';
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	this->_amount += deposit;
	_totalAmount += deposit;
	std::cout << "deposit:" << deposit << ';';
	std::cout << "amount:" << this->_amount << ';';
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	if (withdrawal > this->_amount) {
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else {
		std::cout << "withdrawal:" << withdrawal << ';';
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ';';
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "deposits:" << this->_nbDeposits << ';';
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	time_t 		rawtime;
	struct tm * timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::cout << "[" << timeinfo->tm_year + 1900
    << std::setfill('0') << std::setw(2) << timeinfo->tm_mon + 1
    << std::setfill('0') << std::setw(2) << timeinfo->tm_mday << "_"
    << std::setfill('0') << std::setw(2) << timeinfo->tm_hour
    << std::setfill('0') << std::setw(2) << timeinfo->tm_min
    << std::setfill('0') << std::setw(2) << timeinfo->tm_sec << "] ";
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;