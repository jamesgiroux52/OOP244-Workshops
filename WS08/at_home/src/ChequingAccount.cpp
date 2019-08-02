/*
 ============================================================================
 Name        : ChequingAccount.cpp
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

#include "ChequingAccount.h"

using namespace std;

namespace sict {

	ChequingAccount::ChequingAccount(double balance, double transaction, double month) : Account(balance) {
		if (transaction > 0 && month > 0) {
			m_transFee = transaction;
			m_monthFee = month;
		} else {
			m_transFee = 0;
			m_monthFee = 0;
		}
	}

	bool ChequingAccount::credit(double add) {
		bool value = false;

		if (Account::credit(add)) {
			Account::debit(m_transFee);
			return value = true;
		}

		return value;
	}

	bool ChequingAccount::debit(double subtr) {
		bool value = false;

		if (Account::debit(subtr)) {
			Account::debit(m_transFee);
			value = true;
		}

		return value;
	}

	void ChequingAccount::monthEnd() {
		Account::debit(m_monthFee);
	}

	void ChequingAccount::display(std::ostream & ostr) const {
		ostr.setf(ios::fixed);

		ostr.precision(2);
		ostr << "Account type: Chequing" << endl;
		ostr << "Balance: $" << balance() << endl;
		ostr << "Per Transaction Fee: " << m_transFee << endl;
		ostr << "Monthly Fee: " << m_monthFee << endl;
	}
}
