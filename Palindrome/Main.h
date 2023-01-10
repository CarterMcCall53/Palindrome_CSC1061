#pragma once
/* Main.h
*  Carter R McCall
*  10 January 2022
*  Purpose:
*		Hold classes and function definitions for the rest of the program
*/

using namespace std;	
#include <iostream>
#include <string>

class Reduce {
public:
	static string reduce(string input);
};

class Check {
public:
	static bool check(string palindrome);
};