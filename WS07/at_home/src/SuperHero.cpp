/*
 ============================================================================
 Name        : Superhero.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 12, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Superhero module and source code
 ============================================================================
 */

#include <iostream>

#include "SuperHero.h"

using namespace std;

namespace sict {

	SuperHero::SuperHero() : Hero() {
		m_super = 0;
		m_defense = 0;
	}

	SuperHero::SuperHero(const char * name, int health, int attack, int bonus, int defend) : Hero(name, health, attack) {
		if (name != nullptr && name[0] != '\0' && health != 0 && attack != 0) {
			Hero(name, health, attack);
			m_super = bonus;
			m_defense = defend;
		} else {
			*this = SuperHero();
		}
	}

	int SuperHero::attackStrength() const {
		return Hero::attackStrength() + m_super;
	}

	int SuperHero::defend() const {
		return m_defense;
	}

	const SuperHero & operator*(const SuperHero & first, const SuperHero & second) {
		// insert return statement here
		cout << "Super Fight! " << first << " vs " << second << " : ";
		SuperHero A = first;
		SuperHero B = second;
		const SuperHero *winner = nullptr;

		int i = 0;
		while (i < MAX_ROUNDS && A.isAlive() && B.isAlive()) {
			A -= B.attackStrength() - A.defend();
			B -= A.attackStrength() - B.defend();
			i++;
		}

		bool draw = A.isAlive() && B.isAlive();

		if (draw) {
			winner = &first;
		} else if (A.isAlive()) {
			winner = &first;
		} else {
			winner = &second;
		}

		cout << "Winner is " << *winner << " in " << i << " rounds." << endl;

		return *winner;
	}

}
