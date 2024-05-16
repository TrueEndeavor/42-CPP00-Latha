// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector> // Header for vector
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

    // Create a shorter, more descriptive name for std::vector<Account::t> using typedef
	typedef std::vector<Account::t>							  accounts_t;
	
	// Create a shorter, more descriptive name for std::vector<int> using typedef
	typedef std::vector<int>								  ints_t;
	
	// Create a type alias for a pair of iterators, one from accounts_t and one from ints_t
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	// Initialize an int    array of initial deposit amounts.
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	
	// Calculate the size of the amounts array to determine the number of elements
	// Ideally this has to be in this format: 
	// const size_t amounts_size = sizeof(amounts) / sizeof(int);
	// Constructor-style initialization type variable_name(initial value)
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	
	// Initialize a vector of Account objects with initial deposit amounts
	// Initialize 'accounts' vector with Account objects based on 'amounts' array
	// Copies values from 'amounts' to create Account objects
	// Remember, it is not a copy of the array, because it is vector (dynamic array)
	
	/* ************* ************* ************* ************* ************* 
	   Multiple accounts are created with unique indexes and initial amounts, 
	   updating total account count and amount.
	  ************* ************* ************* ************* ************* */
	/* Log messages about "create" of multiple accounts */
	accounts_t				accounts( amounts, amounts + amounts_size );
	
	// Obtain the pointers to the start and end of the array
	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();
	
	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();
	
	/* ************* ************* ************* ************* 
	   Log message about the account summary
	   ************* ************* ************* ************* */
	Account::displayAccountsInfos();
	
	/* ************* ************* ************* ************* 
	   Log message about the individual accounts
	   ************* ************* ************* ************* */
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	/* ************* ************* ************* ************* ************* 
	   Deposits are made into each account, updating balances and total deposit count
	  ************* ************* ************* ************* ************* */
	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) 
	{
		(*(it.first)).makeDeposit( *(it.second) );
	}

	/* ************* ************* ************* ************* 
	   Log message about the account summary
	   ************* ************* ************* ************* */
	Account::displayAccountsInfos();
	
	/* ************* ************* ************* ************* ************* ************* 
	   Log message about the individual accounts (after updated with new deposits)
	   ************* ************* ************* ************* ************* ************* */	
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	/* ************* ************* ************* ************* ************* 
	   Withdrawals are attempted from each account, updating balances and total withdrawal count
	  ************* ************* ************* ************* ************* */
	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) )
	{
		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	/* ************* ************* ************* ************* 
	   Log message about the account summary
	   ************* ************* ************* ************* */
	Account::displayAccountsInfos();
	
	/* ************* ************* ************* ************* ************* ************* 
	   Log message about the individual accounts (after updated with new withdrawals)
	   ************* ************* ************* ************* ************* ************* */	
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	/* ************* ************* ************* ************* ************* ************* 
	   Log message about the closing of accounts, as the objects get deleted automatically
	   ************* ************* ************* ************* ************* ************* */	
	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
