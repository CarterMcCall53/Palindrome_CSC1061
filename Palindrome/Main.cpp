/* Main.cpp
*  Carter R McCall
*  6 January 2023
*  Purpose:
*		Check if a string is a palindrome or not
*	Modified 10 January 2023:
*		Moved check and reduce functions to separate .cpp files
*/

#include "Main.h"

int main() {
	string input;
	bool palindrome;
	char repChar;

	do {
		cout << "Please Enter a Sentence or Phrase: "; //gets palindrome from user
		getline(cin, input);

		input = Reduce::reduce(input);

		if (Check::check(input) == true) cout << input << " is a palindrome!" << endl; //prints if it is or is not a palindrome
		else cout << input << " is not a palindrome!" << endl;
		do { //repeat function
			cout << "Do you want to check another? (Y|N): ";
			getline(cin, input);
			repChar = tolower(input[0]);
		} while (repChar != 'y' && repChar != 'n');
		cout << endl;
	} while (repChar == 'y');
}