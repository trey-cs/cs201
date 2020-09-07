/*
* Source.cpp
* Trey Chiu
* CS201
* Sep 7, 2020
* Prints box of *'s of user inputted dimensions
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int width, height, i, k; // Table dimension counters
	cout << "Enter the x dimension for your asterisk table and press return" << endl;
	cin >> width;
	cout << "Enter the y dimension for your asterisk table and press return" << endl;
	cin >> height;

	while(k <= height)

		for (int i = 1; i <= width; i++)
		{
			cout << "*";
		}
	
}