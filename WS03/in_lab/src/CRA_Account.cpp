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
#include "CRA_Account.h"

using namespace std;

namespace sict {

	// object set function to validate and store values entered
	void CRA_Account::set(const char* familyName, const char* givenName, int sin){
		bool valid = sin >= min_sin && sin <= max_sin;

		if (valid){
			// NOTE: when I try to use sict::max_name_length it gives me an error so I had to remove sict::
			strncpy(m_familyName, familyName, max_name_length);
			m_familyName[max_name_length] = '\0';
			strncpy(m_givenName, givenName, max_name_length);
			m_givenName[max_name_length] = '\0';
			m_sin = sin;
		} else {
			m_familyName[0] = '\0';
			m_givenName[0] = '\0';
			m_sin = 0;
		}
		return;
	}

	// Function to determine if object is empty
	bool CRA_Account::isEmpty() const{

		return (m_sin < min_sin || m_sin > max_sin || m_sin == 0) ? true : false;

	}

	// function to display object data
	void CRA_Account::display() const{
		if (!isEmpty()){
			cout << "Family Name: " << m_familyName << endl;
			cout << "Given Name: " << m_givenName << endl;
			cout << "CRA Account: " << m_sin << endl;
		} else {
			cout << "Account object is empty!" << endl;
		}
		return;
	}


}
