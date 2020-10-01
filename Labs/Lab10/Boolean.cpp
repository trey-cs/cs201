/*
* Boolean.cpp
* Trey Chiu
* CS201
* Sep 30, 2020
* Prints out multiples of 3 from 1-40
*/

#include "Boolean.hpp"
#include <iostream>
using std::cout;
using std::endl;

bool isDiv3(int int1)
{
	return (int1 % 3 == 0); // can just use return (since == is a boolean statement)
	/*
		return true;
	}
	else      // if else statement left out - prints 3, 4, 5(why?)
	{
		return false;
	}*/
}

int main()
{
	for (int i = 1; i <= 40; i++)
	{
		if (isDiv3(i)) // Don't need == true
		{
			cout << i << endl;
		}
	}
	return 0;
}