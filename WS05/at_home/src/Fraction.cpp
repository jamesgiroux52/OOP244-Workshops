/*
 ============================================================================
 Name        : Fraction.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : June 15, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Fraction module
 ============================================================================
 */

#include <iostream>
#include "Fraction.h"

using namespace std;

namespace sict{

	// return the greater of the numerator and denominator
	int Fraction::max() const {

		return (m_num < m_denom ? m_denom : m_num);

	}

	// return the lesser of the numerator and denominator
	int Fraction::min() const {

		return (m_num < m_denom ? m_num : m_denom);

	}

	// reduce the fraction to its simplified form
	void Fraction::reduce() {

		int div = gcd();

		m_num /= div;
		m_denom /= div;

	}

	// gcd returns the greatest common divisor of num and denom
    int Fraction::gcd() const {
        int mn = min();  // min of numerator and denominator
        int mx = max();  // max of numerator and denominator
        int g_c_d = 1;
        bool found = false;

        for (int x = mn; !found && x > 0; --x) { // from mn decrement until divisor found
            if (mx % x == 0 && mn % x == 0) {
                found = true;
                g_c_d = x;
            }
        }
        return g_c_d;
    }

    void Fraction::setEmpty(){
    	m_num = 0;
    	m_denom = 0;
    }

    // default constructor sets empty state
    Fraction::Fraction() {
    	setEmpty();
    }

    // two argument constructor sets member values if they are valid and sets
    // a safe empty state otherwise
    Fraction::Fraction(int num, int denom) {

    	if (num >= 0 && denom > 0) {
    		m_num = num;
    		m_denom = denom;
    		reduce();
    	} else {
    		setEmpty();
    	}

    }

    // checks for a safe empty state
	bool Fraction::isEmpty() const {

		return (m_num == 0 && m_denom == 0) ? true : false;

	}

	// displays fraction
	void Fraction::display() const {

		if (isEmpty()) {
			cout << "no fraction stored";
		} else if (m_denom == 1) {
			cout << m_num;
		} else {
			cout << m_num << "/" << m_denom;
		}

	}

	// adds fractions together if they are both not in an empty state
	Fraction Fraction::operator+(const Fraction& rhs) const {

		Fraction result;

		if (!isEmpty() && !rhs.isEmpty()) {
			result.m_denom = m_denom * rhs.m_denom;
			result.m_num = m_num * rhs.m_denom + rhs.m_num * m_denom;
			result.reduce();
		} else {
			result.setEmpty();
		}

		return result;

	}

	// multiplies the fraction if not empty
	Fraction Fraction::operator*(const Fraction& rhs) const {

		Fraction result;

		if (!isEmpty() && !rhs.isEmpty()) {
			result.m_num = m_num * rhs.m_num;
			result.m_denom = m_denom * rhs.m_denom;
			result.reduce();
		} else {
			result.setEmpty();
		}

		return result;
	}

	// evaluates if two fractions are equal
	bool Fraction::operator==(const Fraction& rhs) const {

		if (!isEmpty() && !rhs.isEmpty() && m_num == rhs.m_num && m_denom == rhs.m_denom) {
			return true;
		} else {
			return false;
		}

	}

	// evaluates if two fractions are not equal
	bool Fraction::operator!=(const Fraction& rhs) const {

		if (!isEmpty() || !rhs.isEmpty() || m_num != rhs.m_num || m_denom != rhs.m_denom) {
			return true;
		} else {
			return false;
		}

	}

	// adds rhs to current instance
	Fraction& Fraction::operator+=(const Fraction& rhs) {

		if (!(isEmpty() && rhs.isEmpty())) {
			m_num = m_num * rhs.m_denom + m_denom * rhs.m_num;
			m_denom = m_denom * rhs.m_denom;
			this->reduce();
			return *this;
		} else {
			this->setEmpty();
			return *this;
		}

	}

}
