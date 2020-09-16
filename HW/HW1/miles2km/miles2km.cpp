/*
* miles2km.cpp
* Trey Chiu
* CS201
* Sep 11, 2020
* Changes user inputted distance in miles to kilometers
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	double miles;
	double kilometers;
	cout << "Please enter the distance in miles that you'd like to convert to kilometers: ";
	cin >> miles;
	cout << "This is " << miles * 1.609 << " kilometers, wow!" << endl;
}