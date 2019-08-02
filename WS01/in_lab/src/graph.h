/*
 ============================================================================
 Name        : graph.h
 Author      : James Giroux - jgiroux1@myseneca.ca
 Student #   : 129198164
 Section     :
 Date        : May 5th, 2019 - Workshop 1 - lab
 ============================================================================
 */

/*
 ============================================================================
 Description : SceneGraph application - number of samples displayed as a graph.
 ============================================================================
 */


#ifndef GRAPH_H_		// Header guards to insure that this file is not included
#define GRAPH_H_		// multiple times

// Maximum number of samples in an graph
#define MAX_NO_OF_SAMPLES 20
// Fills the samples array with the statistic samples
void getSamples(int samples[], int noOfSamples);
// Finds the largest sample in the samples array, if it is larger than 70,
// otherwise it will return 70.
int findMax(int samples[], int noOfSamples);
// Prints a scaled bar relevant to the maximum value in samples array
void printBar(int val, int max);
// Prints a graph comparing the sample values visually
void printGraph(int samples[], int noOfSamples);




#endif /* GRAPH_H_ */
