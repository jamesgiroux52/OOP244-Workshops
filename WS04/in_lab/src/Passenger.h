/*
 ============================================================================
 Name        : Passenger.h
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


#ifndef SICT_PASSENGER_H_
#define SICT_PASSENGER_H_

namespace sict{

	const int max_length = 18;

	// Passenger class
	class Passenger {
		char m_name[max_length + 1];
		char m_dest[max_length + 1];
		void setEmpty();
	public:
		Passenger();
		Passenger(const char*, const char*);
		bool isEmpty() const;
		void display() const;
	};

}

#endif /* PASSENGER_H_ */
