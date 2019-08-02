/*
 ============================================================================
 Name        : Account.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 18, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Account module
 ============================================================================
 */

#include "Account.h"

namespace sict {


	// returns the current balance of the account
	double Account::balance() const {
		return mBalance;
	}

	// Constructor
	Account::Account(double balance) {
		mBalance = (balance > 0 ? balance : 0);
	}

	bool Account::credit(double balance) {
		mBalance += (balance > 0 ? balance : 0);
		return balance > 0;
	}

	bool Account::debit(double balance) {
		mBalance -= (balance > 0 ? balance : 0);
		return balance > 0;
	}

}
