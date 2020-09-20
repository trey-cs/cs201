/*
* names.cpp
* Trey Chiu
* CS201
* Sep 20, 2020
* purose
*/

#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::getline;

int main(int argc, char **argv)
{
	vector<string> names;
	for (int i = 0; i < 10; i++)
	{
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);

	}
	return 0;
}