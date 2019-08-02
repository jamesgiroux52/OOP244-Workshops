/*
 ============================================================================
 Name        : Passenger.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : June 3, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : 
 ============================================================================
 */

#include <iostream>
#include <cstring>
#include "Passenger.h"

using namespace std;

namespace sict{

	// set empty state
	void Passenger::setEmpty(){
		m_name[0] = '\0';
		m_dest[0] = '\0';
	}

	// default constructor
	Passenger::Passenger(){
		setEmpty();
	}

	// 2 argument constructor
	Passenger::Passenger(const char* name, const char* dest){
		if (name == nullptr || dest == nullptr){
			setEmpty();
		} else {
			strncpy(m_name, name, max_length);
			strncpy(m_dest, dest, max_length);
			m_name[max_length] = '\0';
			m_dest[max_length] = '\0';
		}
	}

	// check if object is in empty state
	bool Passenger::isEmpty() const {
		return (m_name[0] == '\0' || m_dest[0] == '\0');
	}

	// display passenger
	void Passenger::display() const{
		if (!isEmpty()){
			cout << m_name << " - " << m_dest << endl;
		} else {
			cout << "No passenger!" << endl;
		}
		return;
	}

}

