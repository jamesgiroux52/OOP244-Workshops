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
 Description : Kingdom module - display definition
 ============================================================================
 */

#include <iostream>
#include "Kingdom.h"

using namespace std;

namespace sict {

	void display(const Kingdom& kingdom){

		cout << kingdom.m_name << ", population " << kingdom.m_population << endl;

	}

}
