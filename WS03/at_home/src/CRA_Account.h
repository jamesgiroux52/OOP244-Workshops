/*
 ============================================================================
 Name        : CRA_Account.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : May 26, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Account header file
 ============================================================================
 */

// header guards
#ifndef SICT_CRA_ACCOUNT_H_
#define SICT_CRA_ACCOUNT_H_


namespace sict {
	const int max_name_length = 40;
	const int min_sin = 100000000;
	const int max_sin = 999999999;
	const int max_yrs = 4;

	// define object
	class CRA_Account {
		char m_familyName[max_name_length + 1];
		char m_givenName[max_name_length + 1];
		int m_sin;
		int m_years[max_yrs];
		float m_balance[max_yrs];
		int m_numYears;
	public:
		void set(int year, double balance);
		void set(const char* familyName, const char* givenName, int sin);
		bool isEmpty() const;
		void display() const;
		bool validSin(int sin);
	};
}

#endif /* CRA_ACCOUNT_H_ */
