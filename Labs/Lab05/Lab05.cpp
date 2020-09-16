/*
* Lab05.cpp
* Trey Chiu
* CS201
* Sep 7, 2020
* Produces different outputs depending on input
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int i; // counter
	char favnumber;
	cout << "Please enter your favorite whole number betweeen 1 and 10 and press Enter" << endl;
	cin >> favnumber;
	switch (favnumber)
	{
	case '1':   // Added type char to type integer in line 23
		cout << "Nice choice, but I'll add 49 to it since good things don't last forever:\n" << favnumber + 1 << endl;
		break;
	case '5':
		cout << "Cool number...\n";
		for (i = 0; i <= 4; i++)
		{
			cout << favnumber << endl;
		}
		break;
	case '10':
		cout << "10 is the number of minutes my attention span avails me";
		break;
	default:
		cout << "\nEnough about numbers.... Anyways, you like sauerkraut?\n";
		break;
	}
return 0;
}