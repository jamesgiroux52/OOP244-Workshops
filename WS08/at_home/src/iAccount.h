/*
 ============================================================================
 Name        : iAccount.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 21, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : iAccount header
 ============================================================================
 */


#ifndef SICT_IACCOUNT_H_
#define SICT_IACCOUNT_H_

#include <iostream>

namespace sict {

	class iAccount {
	public:
		virtual ~iAccount() = 0;
		virtual bool credit(double) = 0;
		virtual bool debit(double) = 0;
		virtual void monthEnd() = 0;
		virtual void display(std::ostream&) const = 0;
	};

	iAccount* CreateAccount(const char*, double);
}

#endif /* SICT_IACCOUNT_H_ */
