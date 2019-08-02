/*
 ============================================================================
 Name        : Allocator.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 18, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Allocator module
 ============================================================================
 */

#include "SavingsAccount.h"

namespace sict {

	const double rate = 0.05;

	iAccount* CreateAccount(const char* type, double balance) {
		if (type[0] == 'S') {
			return new SavingsAccount(balance, rate);
		} else {
			return nullptr;
		}
	}

	iAccount::~iAccount(){}

}
