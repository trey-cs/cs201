/*
* diamond.cpp
* Trey Chiu
* CS201
* Sep 7, 2020
* displays diamond of #'s of user inputted dimensions
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int i, k; //character iteration counter and row counter
	int blank, side; // white space variable and user defined diamond side length variable
	cout << "Enter desired length of one diamond side and press return: ";
	cin >> side;
	if (cin.fail()) // input error checking
	{
		cout << "Sorry, try again!" << endl;
	}
	else
	{
		blank = side - 1;
		for (k = 1; k <= side; k++) // Produces triangular top half of diamond
		{
			for (i = 1; i <= blank; i++)
			{
				cout << " ";
			}
			for (i = 1; i <= 2 * k - 1; i++)
			{
				cout << "#";
			}
			blank--;
			cout << "\n";
		}

		blank = 1;
		for (k = 1; k <= side - 1; k++) // Produces triangular bottom half of diamond
		{
			for (i = 1; i <= blank; i++)
			{						
				cout << " ";
			}
			for (i = 1; i <= 2 * (side - k) - 1; i++)
			{
				cout << "#";
			}
			blank++;
			cout << "\n";
		}
			
	}
	
}