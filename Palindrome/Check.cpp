/* Check.cpp
*  Carter R McCall
*  10 January 2023
*  Purpose:
*		Check if a given string is a palindrome
*/

#include "Main.h"

bool Check::check(string palindrome) {
	string half1 = "", half2 = "";
	bool even = true;
	char character;

	if (palindrome.length() % 2 == 0) even = true; //checks if palindrome is odd or even
	else even = false;

	for (int i = 0; i < palindrome.length() / 2; i++) { //sets half1 to the first half of the input
		character = palindrome[i];
		half1 += character;
	}
	if (even == true) {
		for (int i = palindrome.length() - 1; i >= palindrome.length() / 2; i--) { //sets half2 to the second half of the input if even
			character = palindrome[i];
			half2 += character;
		}
	}
	else {
		for (int i = palindrome.length() - 1; i > palindrome.length() / 2; i--) { //sets half2 to the second half of the input if even
			character = palindrome[i];
			half2 += character;
		}
	}

	if (half1 == half2) { //checks if half1 and half2 are the same
		return true;
	}
	else {
		return false;
	}
}