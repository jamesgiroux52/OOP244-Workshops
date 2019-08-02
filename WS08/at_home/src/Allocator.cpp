/*
 ============================================================================
 Name        : Allocator.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 21, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Allocator module
 ============================================================================
 */

#include "SavingsAccount.h"
#include "ChequingAccount.h"

namespace sict {

	const double rate = 0.05;
	const double transactionFee = 0.50;
	const double monthlyFee = 2.00;

	iAccount* CreateAccount(const char* type, double balance) {
		if (type[0] == 'S') {
			return new SavingsAccount(balance, rate);
		} else if (type[0] == 'C'){
			return new ChequingAccount(balance, transactionFee, monthlyFee);
		} else {
			return nullptr;
		}
	}

	iAccount::~iAccount(){}

}
