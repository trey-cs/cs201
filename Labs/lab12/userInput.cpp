/*
* userinput.cpp
* Trey Chiu
* CS201
* Oct, 2 2020
* purose
*/

#include "userInput.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::vector;
using std::endl;

void getUserStrings(std::vector<std::string> & words)
{
	std::string abc;
	while (std::cin >> abc && abc != "end")
	{
		words.push_back(abc);
	}
}