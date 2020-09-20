/*
* Lab07main.cpp
* Trey Chiu
* CS201
* Sep 7, 2020
* Displays aligned column list of user inputted integers
*/

#include "intio.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	cout << "Input your Favorite number: ";
	int yournumb = getInt();
	cout << "Type in your 2nd Favorite number: ";
	int yournumb2 = getInt();
	cout << "Type in your 3rd Favorite number: ";
	int yournumb3 = getInt();

	// lists numbers in aligned column
	cout << "Here is your list of numbers:\n"; 
	putInt(yournumb, 10); 
	cout << endl;
	putInt(yournumb2, 10); 
	cout << endl;
	putInt(yournumb3, 10); 
	cout << endl;
	return 0;
	
}