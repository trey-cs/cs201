/*
* Plusonesquare.cpp
* Trey Chiu
* CS201
* Sep 7, 2020
* Adds one to integer from user input and squares sum
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{ 

int n;
cout << "Please type an integer and press return" << endl;
cin >> n;
cout << "You typed the integer: " << n << endl;
cout << "Your integer has been modified: " << (n + 1) * (n + 1) << endl;
cout << "The above result is your integer plus one squared" << endl;

}