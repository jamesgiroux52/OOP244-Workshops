/*
 ============================================================================
 Name        : w2_in_lab.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : May 19, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Workshop 2 - in_lab - Accept the size of the array needed then
 	 	 	   allocate memory for the proper size of array.  Accepts that
 	 	 	   number of inputs from the user than displays the data entered.
 ============================================================================
 */


#include <iostream>
#include "Kingdom.h" // intentional
#include "Kingdom.h"

using namespace std;
using namespace sict;

void read(Kingdom&);

int main() {
	int count = 0; // the number of kingdoms in the array

	// declare pointer to the Kingdom struct
	Kingdom* pKingdom = nullptr;

	cout << "==========" << endl
		 << "Input data" << endl
		 << "==========" << endl
		 << "Enter the number of Kingdoms: ";
	cin >> count;
	cin.ignore();

	if (count < 1) return 1;

	// allocate memory for pKingdom
	pKingdom = new struct Kingdom[count];

	// get input from user
	for (int i = 0; i < count; ++i) {
		cout << "Kingdom #" << i + 1 << ": " << endl;
		read(pKingdom[i]);
	}
	cout << "==========" << endl << endl;

	// testing that "display(...)" works
	cout << "------------------------------" << endl
		 << "The 2nd kingdom entered is" << endl
		 << "------------------------------" << endl;
	display(pKingdom[1]);
	cout << "------------------------------" << endl << endl;

	// Deallocate dynamic memory
	delete[] pKingdom;
	pKingdom = nullptr;

	return 0;
}

// read accepts data for a Kingdom from standard input
//
void read(Kingdom& kingdom) {

	cout << "Enter the name of the Kingdom: ";
	cin.get(kingdom.m_name, 32, '\n');
	cin.ignore(2000, '\n');
	cout << "Enter the number of people living in " << kingdom.m_name << ": ";
	cin >> kingdom.m_population;
	cin.ignore(2000, '\n');
}
