/*
 ============================================================================
 Name        : tools.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : May 5th, 2019 - Workshop 1 - Home
 ============================================================================
 */

/*
 ============================================================================
 Description : tools header file.
 ============================================================================
 */

#ifndef SICT_TOOLS_H_
#define SICT_TOOLS_H_

namespace sict {
	// Performs a fool-proof integer entry
	int getInt(int min, int max);
	// Displays the user interface menu
	int menu(void);
}

#endif /* TOOLS_H_ */
