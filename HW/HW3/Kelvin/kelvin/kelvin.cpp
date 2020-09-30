/*
* kelvin.cpp
* Trey Chiu
* CS201
* Sep 29, 2020
* Converts Celsius to Kelvin
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double ctok(double c)
{
	double k = c + 273.15;
	return k;
}

int main()
{
	double c = 0;
	cin >> c;
	double k = ctok(c);
	cout << k << '\n';
}

/* Error list for original program:
* 
* function ctok errors:
* 
* return type illegal(original returns int)
* in function ctok - int k should be double k(int k rounds to nearest int value)
* function ctok must return variable k(original return lacks variable)
* 
* original int main() errors:
* 
* cin to unidentified variable d
* ctok("c") - function parameter is not char, it is double
* Cout - C must not be capitalized
* '/n' is not the escape character - '\n' is the escape character
* 
* 
*/