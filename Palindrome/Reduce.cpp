/* Reduce.cpp
*  Carter R McCall
*  10 January 2023
*  Purpose:
*		Reduce a given string so the program can compare the two halves equally
*/

#include "Main.h"

string Reduce::reduce(string input) {
	for (int i = 0; i < input.length(); i++) input[i] = tolower(input[i]); //modifys palindrome to be lowercase
	input.erase(remove(input.begin(), input.end(), ' '), input.end()); //removes all spaces so it is easier for the program to compare the two halves
	
	return input;
}