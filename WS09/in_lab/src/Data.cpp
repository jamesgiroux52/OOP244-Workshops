/*
 ============================================================================
 Name        : Data.cpp
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     : SEE
 Date        : July 20, 2019
 ============================================================================
 */

/*
 ============================================================================
 Description : Data module
 ============================================================================
 */

#include <iostream>
#include <cstring>
#include "Data.h"
using namespace std;

namespace sict {

	// A custom function for reading ints on min
	int min(const int* data, int n) {
		int min = LARGEST_NUMBER;

		for (int i = 0; i < n; ++i) {
			if (data[i] < min)
				min = data[i];
		}
		return min;
	}

	// answers outputs statistics for visual validation of data
	void answers(const int* year, const int* population, const int* violentCrime, const double* violentCrimeRate, const int* grandTheftAuto, const int n) {

		// Q1: print the population change in millions of people
		// - print answer correct to 2 decimal places.
		// e..g "6.31 million";
		// note that population is an integer, so dividing by 1000000 would yield "6"
		int populationDiff = population[n - 1] - population[0];

		// Output for the population
		cout << "Population change from " << year[0] << " to " << year[n - 1] << " is ";
		cout.precision(2);
		cout.setf(ios::fixed);
		cout << static_cast<double>(populationDiff)/1000000 << " million" << endl;

		// Q2. print whether violent crime rate has gone up or down between 2000 and 2005
		auto violentCrimeStart = violentCrime[0];
		auto violentCrimeEnd = violentCrime[n - 1];
		const char *trend = violentCrimeStart < violentCrimeEnd ? "up" : "down";
		cout << "Violent Crime trend is " << trend << endl;

		// Q3 print the GTA number accurate to 0 decimal places
		double gtaMillions = 0; // tyour code goes here
		cout << "There are ";
		gtaMillions = average(grandTheftAuto, n);
		cout.precision(2);
		cout << fixed <<
			gtaMillions / 1.0E6
			<< " million Grand Theft Auto incidents on average a year" << endl;

		// Q4. Print the min and max violentCrime rates
		cout << "The Minimum Violent Crime rate was " << static_cast<int>(min(violentCrimeRate, n)) << endl;
		cout << "The Maximum Violent Crime rate was " << static_cast<int>(max(violentCrimeRate, n)) << endl;
	}
}
