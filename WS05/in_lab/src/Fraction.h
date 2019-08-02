/*
 ============================================================================
 Name        : Fraction.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : June 13, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Fraction header file and class definition
 ============================================================================
 */
#ifndef SICT_FRACTION_H_
#define SICT_FRACTION_H_


namespace sict {

	// Fraction class
	class Fraction {

		// member variables
		int m_num;
		int m_denom;

		// private functions
		int max() const;
		int min() const;
		void reduce();
		int gcd() const;
		void setEmpty();

	public:

		// constructors
		Fraction();
		Fraction(int numerator, int denominator);

		// public functions
		bool isEmpty() const;
		void display() const;

		// overloaded + operator function
		Fraction operator+(const Fraction& rhs) const;

	};
}


#endif /* FRACTION_H_ */
