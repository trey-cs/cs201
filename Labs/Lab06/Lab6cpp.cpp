/*
* Lab6.cpp
* Trey Chiu
* CS201
* Sep 16, 2020
* Function prints string and string length
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
	string str2("While I am at home I sleep");
	string str3("This is a longer string than most I have entered");
	string str4("this is");

	Printstrsize(str1);
	Printstrsize(str2);
	Printstrsize(str3);
	Printstrsize(str4);
	return 0;
}