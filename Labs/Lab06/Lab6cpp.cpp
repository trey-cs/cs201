/*
* Lab6.cpp
* Trey Chiu
* CS201
* Sep 16, 2020
* Function will print string and string length
*/

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

void Printstrsize(string str1)
{
	cout << "The string " << str1 << " is " << str1.size() << " bytes in length.\n";
}

// prints string and string length
int main()
{
	string str1("baseketball");
	Printstrsize(str1);
	
	return 0;
}