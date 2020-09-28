/*
* boxer.cpp
* Trey Chiu
* CS201
* Sep 27, 2020
* purose
*/

#include "boxer.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

void getString(string & str1)
{
	cout << "Please input a string: " << endl;
	cin >> str1;
	return;
}

void getInt(int & int1)
{
	cout << "Please input an positive integer: " << endl;
	cin >> int1;
	return;
}
