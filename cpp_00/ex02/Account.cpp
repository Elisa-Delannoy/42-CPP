/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <edelanno@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:46:03 by edelanno          #+#    #+#             */
/*   Updated: 2025/06/20 18:16:28 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <vector>

Account::Account( int initial_deposit )
{	
	_displayTimestamp();
	std::cout << " index:" << 
		
}

Account::~Account()
{
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
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals();
}

	// void	makeDeposit( int deposit );
	// bool	makeWithdrawal( int withdrawal );
	// int		checkAmount( void ) const;
	// void	displayStatus( void ) const;

void	_displayTimestamp()
{
	std::cout << "[" << get_time(&tm)
}



	
