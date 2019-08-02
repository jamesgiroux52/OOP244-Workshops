/*
 ============================================================================
 Name        : Fraction.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : June 15, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Fraction header
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

		// private function prototypes
		int max() const;
		int min() const;
		void reduce();
		int gcd() const;
		void setEmpty();

	public:

		// constructors
		Fraction();
		Fraction(int numerator, int denominator);

		// public function prototypes
		bool isEmpty() const;
		void display() const;

		// overloaded +, *, ==, !=, and =+ operator function prototypes
		Fraction operator+(const Fraction& rhs) const;
		Fraction operator*(const Fraction& rhs) const;
		bool operator==(const Fraction& rhs) const;
		bool operator!=(const Fraction& rhs) const;
		Fraction& operator+=(const Fraction& rhs);

	};

}

#endif /* FRACTION_H_ */
