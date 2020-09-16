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
	int k = 1;
	while (k <= 10) // Y dimension
	{
		int i = 1;
		while (i<=60) // X dimension
		{
			cout << "*";
			i++;
		}
		cout << endl;
		k++;
	}
}