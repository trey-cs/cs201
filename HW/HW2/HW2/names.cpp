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

bool DoesNameExist(const string& nameToFind, const vector<string>& names)
{
	if (find(names.begin(), names.end(), nameToFind) != names.end())
	{
		cout << "The name " << nameToFind << " exists.";
		return true;
	}
	else
	{
		cout << "The name " << nameToFind << " does not exist.";
		return false;
	}
}

int main()
{
	 vector<string>names;
	 InputNames(names);
	 DoesNameExist("travis", names);
	// PrintNames(names);
	 return 0;
}