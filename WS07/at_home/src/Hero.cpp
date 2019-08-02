/*
 ============================================================================
 Name        : Hero.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 12, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Hero module and source code
 ============================================================================
 */

#include <iostream>
#include <cstring>

#include "Hero.h"

using namespace std;

namespace sict {

	// default constructor
	Hero::Hero() {
		m_name[0] = '\0';
		m_health = 0;
		m_attack = 0;
	}

	// 3 argument constructor
	Hero::Hero(const char * name, int health, int attack) {
		if (name[0] != '\0' && health > 0 && attack > 0) {
			m_health = health;
			m_attack = attack;
			strncpy(m_name, name, SIZE);
			m_name[SIZE] = '\0';
		} else {
			*this = Hero();
		}
	}

	// -= overload
	void Hero::operator-=(int attack) {
		if (attack > 0) {
			m_health -= attack;
		}
	}

	// returns the fate of hero
	bool Hero::isAlive() const {
		return (m_health > 0) ? true : false;
	}

	// assign attack strength
	int Hero::attackStrength() const {
		return m_attack;
	}

	// output stream function << overload
	std::ostream& operator<<(std::ostream& os, const Hero& hero) {
		if (hero.m_name[0] == '\0') {
			os << "No hero";
		} else {
			os << hero.m_name;
		}
		return os;
	}

	// overloaded * operator -- see who wins the fight
	const Hero& operator*(const Hero& first, const Hero& second) {
		cout << "Ancient Battle! " << first << " vs " << second << " : ";

		Hero a = first;
		Hero b = second;
		const Hero *winner = nullptr;

		int i = 0;
		while (i < MAX_ROUNDS && a.isAlive() && b.isAlive()) {
			a -= b.attackStrength();
			b -= a.attackStrength();
			i++;
		}

		bool draw;

		if (a.isAlive() && b.isAlive()) {
			draw = true;
		} else {
			draw = false;
		}

		if (draw) {
			winner = &first;
		} else if (a.isAlive()) {
			winner = &first;
		} else {
			winner = &second;
		}

		cout << "Winner is " << *winner << " in " << i << " rounds." << endl;

		return *winner;
	}

}
