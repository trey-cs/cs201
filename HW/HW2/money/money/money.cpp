/*
* money.cpp
* Trey Chiu
* CS201
* Sep 21, 2020
* Will take change amounts and find the sum.
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int pennies, nickels, dimes, quarters, halfdollars;

	cout << "How many pennies do you have?" << endl;
	cin >> pennies;
	cout << "How many nickels do you have?" << endl;
	cin >> nickels;
	cout << "How many dimes do you have?" << endl;
	cin >> dimes;
	cout << "How many quarters do you have?" << endl;
	cin >> quarters;
	cout << "How many half-dollars do you have?" << endl;
	cin >> halfdollars;

	if (pennies == 1) // if statements provide proper grammar
	{
		cout << "You have " << pennies << " penny." << endl;
	}
	else
	{
		cout << "You have " << pennies << " pennies." << endl;
	}
	if (nickels == 1)
	{
		cout << "You have " << nickels << " nickel." << endl;
	}
	else
	{
		cout << "You have " << pennies << " nickels." << endl;
	}
	if (dimes == 1)
	{
		cout << "You have " << dimes << " dime." << endl;
	}
	else
	{
		cout << "You have " << dimes << " dimes." << endl;
	}
	if (quarters == 1)
	{
		cout << "You have " << quarters << " quarter." << endl;
	}
	else
	{
		cout << "You have " << quarters << " quarters." << endl;
	}
	if (halfdollars == 1)
	{
		cout << "You have " << halfdollars << " half-dollar.\n" << endl;
	}
	else
	{
		cout << "You have " << halfdollars << " half-dollars.\n" << endl;
	}
	
	double sum = ((pennies + nickels * 5.00 + dimes * 10.00 + quarters * 25.00 + halfdollars * 50.00)/100.00);

	cout << "You have $" << sum
		<< ". Which is still not enough to buy love. :(";

}