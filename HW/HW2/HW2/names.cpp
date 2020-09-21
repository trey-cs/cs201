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

void ReverseNames(const vector<string>& names)
{
	cout << "Here is your original list with each name reversed:\n";
	for (int i = 0; i < names.size(); i++)
	{
		string rvs = names.at(i);
		for (int j = rvs.length() - 1; j >= 0; j--)
		{
			cout << rvs[j];
		}
		cout << endl;
	}
	return;
}


int main()
{
	 vector<string>names;
	 InputNames(names);
	 DoesNameExist("travis", names);
	 PrintNames(names);
	 ReverseNames(names);
	 return 0;
}