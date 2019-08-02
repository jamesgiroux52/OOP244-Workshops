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
 Description : Passenger module source code
 ============================================================================
 */

#include <iostream>
#include <cstring>
#include "Passenger.h"

using namespace std;

namespace sict{

	void Passenger::setEmpty(){
		m_name[0] = '\0';
		m_dest[0] = '\0';
		m_yearOfDept = 0;
		m_monthOfDept = 0;
		m_dayOfDept = 0;
	}

	bool validDate(int day, int month, int year){
		bool res;

		if (day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 2019 && year <= 2021){
			res = true;
		} else {
			res = false;
		}

		return res;
	}

	Passenger::Passenger(){
		setEmpty();
	}

	Passenger::Passenger(const char* name, const char* dest){


		if (name == nullptr || dest == nullptr || name == '\0' || dest == '\0'){
			setEmpty();
		} else {
			strncpy(m_name, name, max_length);
			m_name[max_length] = '\0';
			strncpy(m_dest, dest, max_length);
			m_dest[max_length] = '\0';
			m_dayOfDept = 01;
			m_monthOfDept = 10;
			m_yearOfDept = 2019;
		}
	}

	Passenger::Passenger(const char* name, const char* dest, int year, int month, int day){
		if(name == nullptr || dest == nullptr || name[0] == '\0' || dest[0] == '\0' || !validDate(day, month, year)){
			setEmpty();
		} else {
			strncpy(m_name, name, max_length);
			m_name[max_length] = '\0';
			strncpy(m_dest, dest, max_length);
			m_dest[max_length] = '\0';
			m_yearOfDept = year;
			m_monthOfDept = month;
			m_dayOfDept = day;

		}
	}

	bool Passenger::isEmpty() const {
		return (m_name[0] == '\0' || m_dest[0] == '\0');
	}

	void Passenger::display() const{
		if (!isEmpty()){
			cout << m_name << " - " << m_dest << " on " << m_yearOfDept << "/";
			cout.width(2);
			cout.fill('0');
			cout << m_monthOfDept << "/";
			cout.width(2);
			cout.fill('0');
			cout << m_dayOfDept << endl;
		} else {
			cout << "No passenger!" << endl;
		}
		return;
	}

	const char* Passenger::name() const{
		if (isEmpty()){
			return nullptr;
		} else {
			return this->m_name;
		}
	}

	bool Passenger::canTravelWith(const Passenger& passenger) const{
		bool res = false;

		if (strcmp(this->m_dest, passenger.m_dest) == 0 && this->m_dayOfDept == passenger.m_dayOfDept && this->m_monthOfDept == passenger.m_monthOfDept){
			res = true;
		}

		return res;
	}
}

