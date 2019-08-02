/*
 ============================================================================
 Name        : ChequingAccount.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 21, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : ChequingAccount module
 ============================================================================
 */

#ifndef SICT_CHEQUINGACCOUNT_H
#define SICT_CHEQUINGACCOUNT_H

#include "Account.h"

namespace sict {

	class ChequingAccount : public Account {
		double m_transFee;
		double m_monthFee;
	public:
		ChequingAccount(double, double, double);
		bool credit(double);
		bool debit(double);
		void monthEnd();
		void display(std::ostream&) const;
	};
}

#endif
