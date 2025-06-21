/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:46:03 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/21 18:51:57 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <vector>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{	
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	if (checkAmount() == 0)
		this->_amount = 0;
	_nbAccounts++;
	_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;	
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;;
}

void	Account::makeDeposit(int deposit)
{
	const int p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	_totalAmount += deposit;
	
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount <<
	";deposit:" << deposit << ";amount:" << this->_amount <<";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	const int p_amount = this->_amount;
	
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount 
	<< ";withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (this->_nbWithdrawals); /*0*/
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << withdrawal << ";amount:" << this->_amount <<";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (this->_nbWithdrawals); /*1*/
	}
}

int		Account::checkAmount()const
{
	if (this->_amount > 0)
		return (1);
	else
		return(0);
}

void	Account::displayStatus()const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount <<
	";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	char	buffer[20];
	std::time_t time = std::time(NULL);
	std::tm* good_t = std::localtime(&time);
	
	std::strftime(buffer, sizeof(buffer), "%G%m%e", good_t);
	std::cout << "[" << buffer;
	std::strftime(buffer, sizeof(buffer), "%H%M%S", good_t);
	std::cout << "_" << buffer << "]";
}



	
