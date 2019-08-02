/*
 ============================================================================
 Name        : Account.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 21, 2019
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
		return m_Balance;
	}

	// Constructor
	Account::Account(double balance) {
		m_Balance = (balance > 0 ? balance : 0);
	}

	bool Account::credit(double balance) {
		m_Balance += (balance > 0 ? balance : 0);
		return balance > 0;
	}

	bool Account::debit(double balance) {
		m_Balance -= (balance > 0 ? balance : 0);
		return balance > 0;
	}

}
