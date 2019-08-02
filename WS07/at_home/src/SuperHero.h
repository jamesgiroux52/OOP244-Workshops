/*
 ============================================================================
 Name        : Superhero.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 12, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Superhero header and class definition
 ============================================================================
 */

#ifndef SICT_SUPERHERO_H_
#define SICT_SUPERHERO_H_

#include "Hero.h"

namespace sict {

	class SuperHero : public Hero {
		int m_super;
		int m_defense;
	public:
		SuperHero();
		SuperHero(const char* name, int health, int attack, int bonus, int defend);
		int attackStrength() const;
		int defend() const;

	};

	const SuperHero& operator*(const SuperHero& first, const SuperHero& second);
}

#endif /* SICT_SUPERHERO_H_ */
