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

bool DoesNameExist(const string & nameToFind, const vector<string> & names)
{
	if (find(names.begin(), names.end(), nameToFind) != names.end())
	{
		cout << "The name " << nameToFind << " exists." << endl;
		return true;
	}
	else
	{
		cout << "The name " << nameToFind << " does not exist." << endl;
		return false;
	}
}

void PrintNames(const vector<string>& names)
{
	cout << "Here is your list of names:\n";
	for (int i = 0; i < names.size(); i++)
	{
		cout << names.at(i) << endl;
	}
}
