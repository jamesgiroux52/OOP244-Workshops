/*
 ============================================================================
 Name        : w2_at_home.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : May 19, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Workshop 2 - at_home
 ============================================================================
 */


#include <iostream>
#include "Kingdom.h" // intentional
#include "Kingdom.h"

using namespace std;
using namespace sict;

void read(sict::Kingdom&);

int main() {
	int count = 0; // the number of kingdoms in the array

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
			<< "The 1st kingdom entered is" << endl
			<< "------------------------------" << endl;
	sict::display(pKingdom[0]);
	cout << "------------------------------" << endl << endl;

	{
		// add a Kingdom
		Kingdom* newKingdom = new Kingdom[count + 1];

		// copy values into new array
		for (int i = 0; i < count; ++i){
			newKingdom[i] = pKingdom[i];
		}

		// deallocate original pointer array and set it equal to the new pointer
		delete[] pKingdom;
		pKingdom = newKingdom;
	}

	// add the new Kingdom
	cout << "==========\n"
			<< "Input data\n"
			<< "==========\n"
			<< "Kingdom #" << count + 1 << ": " << endl;
	read(pKingdom[count]);
	count++;
	cout << "==========\n" << endl;
	// testing that the overload of "display(...)" works
	sict::display(pKingdom, count);

	// deallocate the dynamic memory
	delete[] pKingdom;

	return 0;
}

// read accepts data for a Kingdom from standard input
void read(Kingdom& kingdom) {

	cout << "Enter the name of the Kingdom: ";
	cin.get(kingdom.m_name, 32, '\n');
	cin.ignore(2000, '\n');
	cout << "Enter the number of people living in " << kingdom.m_name << ": ";
	cin >> kingdom.m_population;
	cin.ignore(2000, '\n');
}
