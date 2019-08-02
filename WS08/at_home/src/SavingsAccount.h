/*
 ============================================================================
 Name        : SavingsAccount.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 21, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : SavingsAcount header
 ============================================================================
 */

#ifndef SICT_SAVINGSACCOUNT_H_
#define SICT_SAVINGSACCOUNT_H_

#include "Account.h"

namespace sict {

	class SavingsAccount : public Account {
		double m_rate;
	public:
		SavingsAccount(double = 0, double = 0);
		void monthEnd();
		void display(std::ostream&) const;
	};
}

#endif /* SICT_SAVINGSACCOUNT_H_ */
