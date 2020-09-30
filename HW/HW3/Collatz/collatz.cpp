/*
* collatz.cpp
* Trey Chiu
* CS201
* Sep 29, 2020
* purose
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void getInt(int& int1)
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

int main()
{
	int n;

		getInt(n);
		cout << n << " ";
		while (n != 1)
		{
		
			if (n % 2 == 0)
			{
				n = n / 2;
			}
			else
			{ 
				n = n*3 + 1;
			}
			cout << n << " ";
		}
}