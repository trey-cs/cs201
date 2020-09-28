/*
* lab9.cpp
* Trey Chiu
* CS201
* Sep 27, 2020
* purose
*/

#include "modifyString.hpp"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::to_string;
using std::endl;


int modifyString(string & referencedString, int n)
{
	referencedString += to_string(n%2);
	//cout << referencedString.size() << endl;
	return referencedString.size();
}

int main()
{
	string abc = "ball";
	cout << "Length of the String: " << modifyString(abc,4) << endl;
	cout << "The String is: " << abc << endl;
	cout << "Length of the String: " << modifyString(abc, 6) << endl;
	cout << "The String is: " << abc << endl;
	cout << "Length of the String: " << modifyString(abc, 7) << endl;
	cout << "The String is: " << abc << endl;
	return 0;
}