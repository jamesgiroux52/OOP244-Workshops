/*
 ============================================================================
 Name        : Contact.h
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

#ifndef SICT_CONTACT_H_
#define SICT_CONTACT_H_

namespace sict {

	const int MAX_CHAR = 20;

	class Contact {
		char m_name[MAX_CHAR + 1];
		long long* m_phones;
		int m_numPhones;
		void setEmpty();
		bool validPhone(const long long phone);
	public:
		Contact();
		Contact(const char* name, long long* phones, int numPhones);
		~Contact();
		bool isEmpty() const;
		void display() const;
	};

}

#endif /* CONTACT_H_ */
