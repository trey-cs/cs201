/*
* Boolean.cpp
* Trey Chiu
* CS201
* Sep 30, 2020
* Prints out multiples of 3 from 
*/

#include "Boolean.hpp"
#include <iostream>
using std::cout;
using std::endl;

bool isDiv3(int int1)
{
	if (int1 % 3 == 0)
	{
		return true;
	}
	else      // if else statement left out - prints wront int's
	{
		return false;
	}
}

int main()
{
	for (int i = 1; i <= 40; i++)
	{
		if (isDiv3(i) == true)
		{
			cout << i << endl;
		}
	}
	return 0;
}