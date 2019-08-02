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
	// define constants
	const int max_name_length = 40;
	const int min_sin = 100000000;
	const int max_sin = 999999999;

	// define class
	class CRA_Account {
		char m_familyName[max_name_length + 1];
		char m_givenName[max_name_length + 1];
		long m_sin;
	public:
		// public member function prototypes
		void set(const char* familyName, const char* givenName, int sin);
		bool isEmpty() const;
		void display() const;
	};
}

#endif /* CRA_ACCOUNT_H_ */
