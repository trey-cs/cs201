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
	getInt();
	getString(str1);
	cout << str1 << endl;
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
}