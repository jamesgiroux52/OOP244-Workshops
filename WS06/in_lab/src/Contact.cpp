/*
 ============================================================================
 Name        : Contact.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : June 30, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : 
 ============================================================================
 */

#include <iostream>
#include <cstring>
#include "Contact.h"

using namespace std;

namespace sict {

	void Contact::setEmpty() {
		m_name[0] = '\0';
		m_phones = nullptr;
		m_numPhones = 0;
	}

	bool Contact::validPhone(const long long phone){
		bool res = false;
		long long first, second, third, fourth;

		if (phone < 0 || phone >= 1000000000000 || phone < 10000000000) {
			res = false;
		} else if (phone >= 10000000000) {
			first = phone / 10000000000;
			third = (phone / 100000000) % 10;
			fourth = (phone / 100000) % 10;
			if (first != 0 && third != 0 && fourth != 0) {
				res = true;
			}
		} else if (phone >= 100000000000) {
			first = phone / 100000000000;
			second = (phone / 10000000000) % 10;
			third = (phone / 1000000000) % 10;
			fourth = (phone / 1000000) % 10;
			if (first != 0 && second!= 0 && third != 0 && fourth != 0) {
				res = true;
			}
		}

		return res;
	}

	Contact::Contact(){
		setEmpty();
	}

	Contact::Contact(const char* name, long long* phone, int num_phones){
		if (name != nullptr && name[0] != '\0') {

			strncpy(m_name, name, MAX_CHAR);
			m_name[MAX_CHAR] = '\0';
			int numOfPhones = 0;

			for (int i = 0; i < num_phones; i++) {
				if (validPhone(phone[i])) {
					numOfPhones++;
				}
			}

			m_numPhones = numOfPhones;

			m_phones = new long long[numOfPhones];

			int count = 0;
			for (int i = 0; i < num_phones; i++) {
				if (validPhone(phone[i])) {
					m_phones[count] = phone[i];
					//cout << m_phones[count] << endl;
					count++;
				}
			}
		} else {
			setEmpty();
		}
	}

	Contact::~Contact(){
		delete[] m_phones;
	}

	bool Contact::isEmpty() const {
		return (m_name[0] == '\0') ? true : false;
	}

	void Contact::display() const {

		if (!isEmpty()) {

			cout << m_name << endl;

			for (int i = 0; i < m_numPhones; ++i) {

				//cout << m_phones[i] << endl;

				if (m_phones[i] >= 100000000000) {
					long long first = m_phones[i] / 100000000000;
					long long second = (m_phones[i] / 10000000000) % 10;
					long long third = (m_phones[i] / 1000000000) % 10;
					cout << "(+" << first << second
							<< ") " << third << (m_phones[i] / 100000000) % 10 << (m_phones[i] / 10000000) % 10
							<< " " << (m_phones[i] / 1000000) % 10 << (m_phones[i] / 100000) % 10 << (m_phones[i] / 10000) % 10
							<< "-" << (m_phones[i] / 1000) % 10 << (m_phones[i] / 100) % 10 << (m_phones[i] / 10) % 10 << (m_phones[i] / 1) % 10
							<< endl;
				} else if (m_phones[i] >= 10000000000) {
					long long first = m_phones[i] / 10000000000;
					long long second = (m_phones[i] / 1000000000) % 10;
					cout << "(+" << first
							<< ") " << second << (m_phones[i] / 100000000) % 10 << (m_phones[i] / 10000000) % 10
							<< " " << (m_phones[i] / 1000000) % 10 << (m_phones[i] / 100000) % 10 << (m_phones[i] / 10000) % 10
							<< "-" << (m_phones[i] / 1000) % 10 << (m_phones[i] / 100) % 10 << (m_phones[i] / 10) % 10 << (m_phones[i] / 1) % 10
							<< endl;
				}
			}
		}
		else {
			cout << "Empty contact!" << endl;
		}
	}
}
