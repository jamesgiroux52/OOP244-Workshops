/*
 ============================================================================
 Name        : SavingsAccount.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 18, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : SavingsAccount module
 ============================================================================
 */

#include "SavingsAccount.h"
using namespace std;

namespace sict {
	// Constructor
	SavingsAccount::SavingsAccount(double balance, double rate) : Account(balance) {
		mRate = (rate > 0 ? rate : 0);
	}

	void SavingsAccount::monthEnd() {
		credit(balance() * mRate);
	}

	void SavingsAccount::display(std::ostream & os) const {
		os.setf(ios::fixed);
		os.precision(2);

		os << "Account type: Savings" << endl;
		os << "Balance: $" << balance() << endl;
		os << "Interest Rate (%): " << mRate * 100 << endl;
	}
}
