/*
* Source1.cpp
* Trey Chiu
* CS201
* Sep 7, 2020
* Prints box 60 x 10 of *'s
*/

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int i, k = 1;
	while (k <= 10) // Y dimension
	{
		for (i = 1; i <= 60; i++) // X dimension
		{
			cout << "*";
		}
		cout << endl;
		k++;
	}
}