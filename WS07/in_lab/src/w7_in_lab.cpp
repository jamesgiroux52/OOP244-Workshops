/*
 ============================================================================
 Name        : w7_in_lab.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 8, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : main for hero app
 ============================================================================
 */

#include <iostream>
#include "Hero.h"

using namespace std;
using namespace sict;

int main() {

  cout << "Greek Heroes";
  Hero hercules         ("Hercules",  32, 4);
  Hero theseus          ("Theseus",   14, 5);
  Hero oddyseus         ("Odysseus",  15, 3);
  Hero ajax             ("Ajax",      17, 5);
  Hero achilles         ("Achilles",  20, 6);
  Hero hector           ("Hector",    30, 5);
  Hero atalanta         ("Atalanta",  10, 3);
  Hero hippolyta        ("Hippolyta", 10, 2);

  cout << endl << "Quarter Finals" << endl;
  const Hero& greek_winner1 = achilles * hector;
  const Hero& greek_winner2 = hercules * theseus;
  const Hero& greek_winner3 = oddyseus * ajax;
  const Hero& greek_winner4 = atalanta * hippolyta;

  cout << endl << "Semi Finals" << endl;
  const Hero& greek_winner_semifinal1 = greek_winner1  * greek_winner2;
  const Hero& greek_winner_semifinal2 = greek_winner3  * greek_winner4;

  cout << endl << "Finals" << endl;
  greek_winner_semifinal1 * greek_winner_semifinal2;

  return 0;
}
