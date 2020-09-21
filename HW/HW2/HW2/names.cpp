/*
* names.cpp
* Trey Chiu
* CS201
* Sep 20, 2020
* Will input 10 names into a vector container
*/

#include "namesio.h"
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void PrintNames(const vector<string>& names)
{
	cout << "Here is your list of names:\n";
	for (int i = 0; i < names.size(); i++)
	{
		cout << names.at(i) << endl;
	}
}

int main()
{
	 vector<string>names;
	 InputNames(names);
	 DoesNameExist("travis", names);
	 PrintNames(names);
	 return 0;
}