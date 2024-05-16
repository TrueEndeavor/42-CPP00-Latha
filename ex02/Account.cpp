/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:19:41 by lannur-s          #+#    #+#             */
/*   Updated: 2024/05/16 17:32:52 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

/*
+----------------------+-----------------------------------------------------------------+
|       Keyword        |                           Description                           |
+----------------------+-----------------------------------------------------------------+
| Header Files         | Using Account.hpp to guide the implementation                   |
| File Compilation     | Ensuring successful compilation of tests.cpp                    |
| Log Analysis         | Utilizing log file to understand Account class implementation   |
| Class Implementation | Recreating Account.cpp based on provided information            |
| Test Validation      | Ensuring program output matches expectations from log file      |
| Static Members       | Potential utilization of static members in class                |
| Const Members        | Potentially using const members in class implementation         |
+----------------------+-----------------------------------------------------------------+
*/

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Initialize list _amount(0), _nbDeposits(0), _nbWithdrawals(0)
Account::Account( void )
{
}

// Constructor for creating an account with an initial deposit.
// Initializes account index, amount, number of deposits, and number of withdrawals.
Account::Account( int initial_deposit ):_amount(initial_deposit),
	_nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = getNbAccounts();
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

// Destructor for closing an account.
// Decrement the total number of accounts and subtract the account balance from the total amount.
Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
}

/* **************************************************************************/
// Getters
/* **************************************************************************/
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

/* **************************************************************************/
// Actions
/* **************************************************************************/
void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount;
	this->_nbDeposits++;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	this->_amount -= withdrawal;
	if (checkAmount() == 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		this->_amount += withdrawal;
		return (false);
	}
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << this->_amount;
	this->_nbWithdrawals++;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	return (true);
}

int	Account::checkAmount( void ) const
{
	if (this->_amount < 0)
		return (0);
	return (1);
}

/* **************************************************************************/
// Display
/* **************************************************************************/
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
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}


// Display the current timestamp in the format: [YYYYMMDD_HHMMSS]
void	Account::_displayTimestamp(void)
{
	// Get current system time in seconds from 1 Jan 1970- UTC time
	std::time_t timeStamp = std::time(NULL);
	
	// Convert system time to local zone time
	std::tm *localTimeStamp = std::localtime(&timeStamp);

	char logTime[20];
	
	// Format the local time as string with given format YYYYMMDD_HHMMSS
	std::strftime(logTime, sizeof(logTime), "[%Y%m%d_%H%M%S] ", localTimeStamp);
	std::cout << logTime;
}