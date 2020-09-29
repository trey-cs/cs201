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

int main()
{
	string str1;
	int int1;
	getString(str1);
	getInt(int1);
	cout << str1 << int1 << endl;

	PrintBox(str1, int1);

	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
}