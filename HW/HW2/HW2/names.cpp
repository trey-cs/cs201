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


int main()
{
	 vector<string>names;
	 InputNames(names);
	// PrintNames(names);
	 return 0;
}