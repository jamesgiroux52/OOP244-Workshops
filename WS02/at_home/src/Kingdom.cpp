/*
 ============================================================================
 Name        : kingdom.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : May 19, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Kingdom module - source code
 ============================================================================
 */

#include <iostream>
#include "Kingdom.h"

using namespace std;

namespace sict {

	// display single kingdom
	void display(const Kingdom& kingdom){

		cout << kingdom.m_name << ", population " << kingdom.m_population << endl;

	}

	// display array of kingdoms
	void display(const Kingdom* kingdom, int size){
		int totalPopulation = 0;

		cout << "------------------------------" << endl;
		cout << "Kingdoms of SICT" << endl;
		cout << "------------------------------" << endl;

		for (int i = size - 1; i >= 0; --i){
			cout << i + 1 << ". ";
			display(kingdom[i]);
			totalPopulation += kingdom[i].m_population;
		}

		cout << "------------------------------" << endl;
		cout << "Total population of SICT: " << totalPopulation << endl;
		cout << "------------------------------" << endl;
	}

}
