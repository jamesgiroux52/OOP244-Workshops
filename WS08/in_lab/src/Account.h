/*
 ============================================================================
 Name        : Account.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 18, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Account header file
 ============================================================================
 */


#ifndef SICT_ACCOUNT_H_
#define SICT_ACCOUNT_H_

#include "iAccount.h"

namespace sict {

	class Account : public iAccount {
		double mBalance;
	protected:
		double balance() const;
	public:
		Account(double);
		bool credit(double);
		bool debit(double);
	};
}

#endif /* SICT_ACCOUNT_H_ */
