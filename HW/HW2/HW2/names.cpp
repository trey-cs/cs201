/*
* names.cpp
* Trey Chiu
* CS201
* Sep 20, 2020
*Input 10 names from user into a vector container, print the names, tell if name exists in vector, and print list of reversed names.
*/

#include "namesio.h"
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
	 vector<string>names;
	 InputNames(names);
	 DoesNameExist("travis", names);
	 PrintNames(names);
	 ReverseNames(names);
	 return 0;
}