/*
 ============================================================================
 Name        : Passenger.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : June 5, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Passenger header file - class definition
 ============================================================================
 */


#ifndef SICT_PASSENGER_H_
#define SICT_PASSENGER_H_

namespace sict{

	const int max_length = 18;

	class Passenger {
		char m_name[max_length + 1];
		char m_dest[max_length + 1];
		int m_yearOfDept;
		int m_monthOfDept;
		int m_dayOfDept;
	public:
		void setEmpty();
		Passenger();
		Passenger(const char* name, const char* dest);
		Passenger(const char* name, const char* dest, int year, int month, int day);
		bool isEmpty() const;
		void display() const;
		const char* name() const;
		bool canTravelWith(const Passenger& passenger) const;

	};

	// validate date as per conditions outlined in workshop
	bool validDate(int day, int month, int year);

}

#endif /* PASSENGER_H_ */
