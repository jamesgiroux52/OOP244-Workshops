/*
 ============================================================================
 Name        : Account.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 21, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Account header
 ============================================================================
 */

#ifndef SICT_ACCOUNT_H_
#define SICT_ACCOUNT_H_

#include "iAccount.h"

namespace sict {

	class Account : public iAccount {
		double m_Balance;
	protected:
		double balance() const;
	public:
		Account(double balance = 0);
		bool credit(double);
		bool debit(double);
	};
}

#endif /* SICT_ACCOUNT_H_ */
