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

	char validCharacters[36] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
						'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6',
						'7', '8', '9' };
	
	int inputL = input.length();

	for (int i = 0; i < inputL; i++) {
		for (int j = 0; j < 36; j++) {
			if (input[i] == validCharacters[j]) {
				break;
			}
			else if (input[i] != validCharacters[j] && j == 35) {
				input.erase(i, i);
				inputL =- 1;
				break;
			}
		}

	}
	
	return input;
}