/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:53:18 by aldubar           #+#    #+#             */
/*   Updated: 2021/08/22 18:52:56 by aldubar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <ctime>
#include <iostream>
#include <iomanip>

void	Account::_displayTimestamp( void) {

	std::time_t	ts = std::time(nullptr);
	tm			ts_struct = *std::localtime(&ts);
	
	std::cout << std::put_time(&ts_struct, "[%Y%m%d_%H%M%S] ");

}

Account::Account( int initial_deposit ): _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	_totalAmount += _amount;
}

Account::~Account( void ) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;

}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void ) {

	return _nbAccounts;

}

int		Account::getTotalAmount( void ) {

	return _totalAmount;

}

int		Account::getNbDeposits( void ) {

	return _totalNbDeposits;

}

int		Account::getNbWithdrawals( void ) {

	return _totalNbWithdrawals;

}

void	Account::makeDeposit( int deposit ) {

	_nbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount + deposit;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits += 1;

}

bool	Account::makeWithdrawal( int withdrawal ) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount) {
		
		std::cout << "refused" << std::endl;
		return false;

	}
	else {

			_nbWithdrawals += 1;
			_amount -= withdrawal;
			_totalAmount -= withdrawal;
			_totalNbWithdrawals += 1;
			std::cout << withdrawal << ";amount:" << _amount;
			std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
			return true;
	}

}

int		Account::checkAmount( void) const {

	return _amount;

}

void	Account::displayStatus( void) const {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl; 

}

void	Account::displayAccountsInfos( void) {

	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;

}
