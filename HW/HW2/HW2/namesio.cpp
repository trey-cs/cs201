/* namesio.cpp
* Trey Chiu
* Sep 20 2020
* CS201
* Source for Names I/O package
*/

#include "namesio.h"
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::getline;
using std::cin;
using std::find;


void InputNames(vector<string> & names)
{
	for (int i = 0; i < 10; i++)
	{
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);
	}
	return;
}

/*bool DoesNameExist(const string & nameToFind, const vector<string>& names)
{
	if ((find(names.begin(), names.end(), nameToFind) != names.end())
	{
		return true;
	}
	else
		return false;
}

/*void PrintNames(vector<string>names)
{
	for (i = 0; i < names.size(); i++)
	{
		cout << "The names are: " << names.at[i];
	}
}
*/