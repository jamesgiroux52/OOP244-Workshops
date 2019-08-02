/*
 ============================================================================
 Name        : Contact.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 4, 2019
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
		// private members
		char m_name[MAX_CHAR + 1];
		long long* m_phones;
		int m_numPhones;
		// private functions
		void setEmpty();
		void initObj(const Contact& src);
		bool validPhone(const long long phone);
	public:
		// constructors
		Contact();
		Contact(const char* name, long long* phones, int numPhones);
		Contact(const Contact& src);
		// overloaded operators
		Contact& operator=(const Contact& src);
		Contact& operator+=(const long long phone);
		// destructor
		~Contact();
		// public functions
		bool isEmpty() const;
		void display() const;
	};

}

#endif /* CONTACT_H_ */
