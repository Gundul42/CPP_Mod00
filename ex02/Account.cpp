/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:41:09 by graja             #+#    #+#             */
/*   Updated: 2021/12/14 16:58:49 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include "time.h"

static
void	timestamp(void)
{
	const time_t	now = time(0);
	tm				*ltm = localtime(&now);

	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_sec;
	std::cout << "] ";
}

/* static private vars must be initialized */
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	timestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:";
	std::cout << _totalAmount << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int deposit)
{
	_amount = deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += deposit;
	timestamp();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";created" << std::endl;
	
}

Account::~Account(void)
{
	timestamp();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";closed" << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	if (deposit >= 0)
	{
		timestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount << ";deposit:";
		_amount += deposit;
		_nbDeposits++;
		_totalAmount += deposit;
		_totalNbDeposits++;
		std::cout << deposit << ";amount:" << _amount;
		std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	}
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal <= _amount)
	{
	timestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount << ";withdrawal:";
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << withdrawal << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	timestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount << ";withdrawal: refused";
	std::cout << std::endl;
	return (false);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{ 
	timestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}
