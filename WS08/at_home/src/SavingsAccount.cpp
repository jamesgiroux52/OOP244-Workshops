/*
 ============================================================================
 Name        : SavingsAccount.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : Jul. 21, 2019
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
		m_rate = (rate > 0 ? rate : 0);
	}

	void SavingsAccount::monthEnd() {
		credit(balance() * m_rate);
	}

	void SavingsAccount::display(std::ostream & os) const {
		os.setf(ios::fixed);
		os.precision(2);

		os << "Account type: Savings" << endl;
		os << "Balance: $" << balance() << endl;
		os << "Interest Rate (%): " << m_rate * 100 << endl;
	}
}
