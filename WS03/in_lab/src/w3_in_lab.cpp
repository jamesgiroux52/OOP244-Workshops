/*
 ============================================================================
 Name        : w3_in_lab.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : May 26, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Workshop 3 - in_lab - working with member functions
 ============================================================================
 */

#include <iostream>
#include "CRA_Account.h"
#include "CRA_Account.h" // intentional

using namespace std;
using namespace sict;

int main() {
	const int size = 1000;
	char familyName[size];
	char givenName[size];
	int sin;
	bool quit = false;

	// initialize object
	sict::CRA_Account myCRA;

	// check for string lengths
	if (sict::max_name_length + 1 > size) {
		cout << "Increase size to value greater than "
			<< sict::max_name_length + 1 << endl;
		return 1;
	}

	cout << "Canada Revenue Agency Account App" << endl
		 << "=================================" << endl << endl;
	cout << "Checking constants" << endl
		<< "---------------------------------" << endl
		<< "max_name_length: " << sict::max_name_length << endl
		<< "        min_sin: " << sict::min_sin << endl
		<< "        max_sin: " << sict::max_sin << endl
		<< "---------------------------------" << endl << endl;
	cout << "Please enter your family name: ";
	cin >> familyName;
	cin.ignore();
	cout << "Please enter your given name: ";
	cin >> givenName;
	cin.ignore();

	// validate sin number from user
	do {
		cout << "Please enter your social insurance number (0 to quit): ";
		cin >> sin;
		cin.ignore();
		if (sin != 0)
		{
			// if sin != 0 then try to set values
			myCRA.set(familyName, givenName, sin);
			// if values are not valid then output error and get new input
			if (myCRA.isEmpty()) {
				cout << "Invalid input! Try again." << endl;
			}
			else {
				quit = true;
			}
		}
		else {
			quit = true;
		}
	} while (!quit);

	// display valid user input
	cout << "----------------------------------------" << endl;
	cout << "Testing the display function" << endl;
	cout << "----------------------------------------" << endl;
	myCRA.display();
	cout << "----------------------------------------" << endl;

	return 0;
}
