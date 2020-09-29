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
#include <limits>

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
	while (!(cin >> int1) || int1 < 0)
	{
		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		cout << "Ehh, Almost. Please input a positive integer: " << endl;
	}
}

void PrintBox(string PrintedText, int PrintedInt)
{
	int i, j;
	for (j = 0; j < PrintedInt; j++) // prints top "*" rows
	{
		for (i = 0; i <= PrintedText.size() + 2 + (PrintedInt*2-1); i++) // prints "*" line
		{
			cout << "*";
		}
		cout << endl;
	}
	int k, l, m, n;
	for (k = 0; k < 3; k++) // Middle box
	{
		for (l = 0; l < PrintedInt; l++)
		{
			cout << "*";
		}
		if (k == 1)
		{
			cout << " " << PrintedText << " ";
		}
		else
		{
			for (m = 0; m < PrintedText.size() + 2; m++)
			{
				cout << " ";
			}
		}
		for (n = 0; n < PrintedInt; n++)
		{
			cout << "*";
		}
		cout << endl;
	}
	int o, p;
	for (p = 0; p < PrintedInt; p++) // prints bottom "*" rows
	{
		for (o = 0; o <= PrintedText.size() + 2 + (PrintedInt * 2 - 1); o++) // prints "*" line
		{
			cout << "*";
		}
		cout << endl;
	}
	return;
}
