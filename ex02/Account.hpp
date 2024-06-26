// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:
	/*---------------- Accross all objects ----------------*/
	// Static variable to keep track of the total number of accounts created
	static int _nbAccounts;
	// Static variable to keep track of the total amount of money across all accounts
	static int _totalAmount;
	// Static variable to keep track of the total number of deposits made across all accounts
	static int _totalNbDeposits;
	// Static variable to keep track of the total number of withdrawals made across all accounts
	static int _totalNbWithdrawals;

	/*---------------- Each object ----------------*/
	// Index of the account
	int _accountIndex;
	// Current balance amount in the account
	int _amount;
	// Number of deposits made into this account
	int _nbDeposits;
	// Number of withdrawals made from this account
	int _nbWithdrawals;
	
	static void	_displayTimestamp( void );
	
	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
