/*
* Lab04.cpp
* Trey Chiu
* CS201
* Sep 15, 2020
* Outputs numbers 1 - 100 with Fizz every multiple of 3
*/

#include <iostream>
using std::cout;

int main()
{
	int i; // iterator
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0) // is number divisible by 3
		{
			cout << "Fizz" << "\n";
		}
		else
		{
			cout << i << "\n";
		}
	}
}