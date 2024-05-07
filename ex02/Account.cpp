/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:19:41 by lannur-s          #+#    #+#             */
/*   Updated: 2024/05/06 09:49:28 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

// CRUD - CREATE, READ, UPDATE, DELETE
// CREATE
Account::Account( int initial_deposit )
{

}

Account::~Account( void )
{

}

// READ
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

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::displayStatus( void ) const
{

}

// UPDATE
/* void	Account::makeDeposit( int deposit )
{

} */

/* bool	Account::makeWithdrawal( int withdrawal )
{

} */

// UTILS
/* int		Account::checkAmount( void ) const
{

} */

void	Account::_displayTimestamp(void)
{
	std::time_t timeStamp = std::time(NULL);
	std::tm *localTimeStamp = std::localtime(&timeStamp);

	char logTime[20];
	std::strftime(logTime, sizeof(logTime), "[%Y%m%d_%H%M%S] ", localTimeStamp);
	std::cout << logTime;
}