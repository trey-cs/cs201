/*
* boxer.cpp
* Trey Chiu
* CS201
* Sep 27, 2020
* purose
*/

#include "boxer.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	getInt();
	getString();
	cout << "Press ENTER to quit ";
	while (cin.get() != '\n');
}