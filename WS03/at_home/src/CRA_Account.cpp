/*
 ============================================================================
 Name        : CRA_Account.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : May 26, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Account module
 ============================================================================
 */

#include <iostream>
#include <cstring>
#include <cmath>
#include "CRA_Account.h"

using namespace std;

namespace sict {

	// store years and balance owing if there is space
	void CRA_Account::set(int year, double balance){

		if (m_numYears < max_yrs && !isEmpty()){
			m_years[m_numYears] = year;
			m_balance[m_numYears] = balance;
			m_numYears++;
		}

		return;
	}

	bool CRA_Account::validSin(int sin){
		int sinNum[9];
		int check, sum = 0, alt = 0, i, roundedInt;

		for (i = 0; i <= 8; ++i){
			// separate the SIN number into sinNum array
			sinNum[i] = sin / pow(10, 8 - i);
			// remove the digit just added to array from SIN
			sin -= (sinNum[i] * pow(10, 8 - i));
		}

		// assign the check digit
		check = sinNum[8];

		for (i = 0; i < 8; ++i){
			if (i % 2 == 0){
				// add the alternates
				alt += sinNum[i];
			} else {
				// add the digits of each sum * 2
				sum += ((sinNum[i] * 2) / 10 + (sinNum[i] * 2) % 10);
			}
		}

		roundedInt = (((int)(sum + alt) / 10) * 10) + 10;

		// return true if difference matches check digit
		return (roundedInt - (alt + sum) == check);
	}

	// object set function to validate and store values entered
	void CRA_Account::set(const char* familyName, const char* givenName, int sin){
		bool valid = sin >= min_sin && sin <= max_sin
				&& familyName[0] != '\0' && givenName[0] != '\0';

		if (valid && validSin(sin)){
			// store values
			strncpy(m_familyName, familyName, max_name_length);
			m_familyName[max_name_length] = '\0';
			strncpy(m_givenName, givenName, max_name_length);
			m_givenName[max_name_length] = '\0';
			m_sin = sin;
			m_numYears = 0;
		} else {
			// empty state
			m_sin = 0;
		}
		return;
	}

	// Function to determine if object is empty
	bool CRA_Account::isEmpty() const{

		return (m_sin == 0) ? true : false;

	}

	// function to display object data
	void CRA_Account::display() const{
		if (!isEmpty()){
			cout << "Family Name: " << m_familyName << endl;
			cout << "Given Name : " << m_givenName << endl;
			cout << "CRA Account: " << m_sin << endl;

			// set formatting to two decimal places
			cout.setf(ios::fixed);
			cout.precision(2);

			// display tax return data with restrictions mentioned in workshop
			for (int i = 0; i < m_numYears; ++i){
				cout << "Year (" << m_years[i] << ") ";
				if (m_balance[i] >= -2 && m_balance[i] <= 2){
					cout << "No balance owing or refund due!" << endl;
				} else if (m_balance[i] > 2){
					cout << "balance owing: ";
					cout << m_balance[i] << endl;
				} else if (m_balance[i] < -2){
					cout << "refund due: ";
					cout << - m_balance[i] << endl;
				}

			}
			// unset formatting
			cout.unsetf(ios::fixed);
			cout.precision(6);
		} else {
			cout << "Account object is empty!" << endl;
		}
		return;
	}
}
