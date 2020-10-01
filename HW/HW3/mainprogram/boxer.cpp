/*
* boxer.cpp
* Trey Chiu
* CS201
* Sep 27, 2020
* Takes string and integer as input, prints string inside box
* with integer number of layers.
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
	string control;
	while (control != "stop")
	{
		string str1;
		int int1;
		getString(str1);
		getInt(int1);
		PrintBox(str1, int1);

		cout << "Type 'stop' and press ENTER to quit or type anything else and press ENTER to continue the fun!" << endl;
		cin >> control;
	}
	return 0;
}