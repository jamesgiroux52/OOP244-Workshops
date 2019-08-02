/*
 ============================================================================
 Name        : kingdom.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : May 19, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Kingdom header file
 ============================================================================
 */


#ifndef SICT_KINGDOM_H_
#define SICT_KINGDOM_H_

namespace sict {

	struct Kingdom {
		char m_name[32];
		int m_population;
	};

	void display(const Kingdom&);
	void display(const Kingdom* kingdom , int size);

}



#endif /* KINGDOM_H_ */
