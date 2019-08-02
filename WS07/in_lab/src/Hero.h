/*
 ============================================================================
 Name        : Hero.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 8, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Hero header file
 ============================================================================
 */


#ifndef SICT_HERO_H
#define SICT_HERO_H

#include <iostream>

namespace sict {

	// constants
	const int MAX_ROUNDS = 100;
	const int SIZE = 40;

	// Hero class
	class Hero {
		// members
		char m_name[SIZE + 1];
		int m_health;
		int m_attack;
	public:
		// logic
		Hero();
		Hero(const char* name, int health, int attack);
		bool isAlive() const;
		int attackStrength() const;
		void operator-=(int attack);
		friend std::ostream& operator<<(std::ostream& os, const Hero& hero);
	};

	// Free helper
	const Hero& operator*(const Hero& first, const Hero& second);
}

#endif
