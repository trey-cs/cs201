/*
* tokenizertest.cpp
* Trey Chiu
* CS201
* Oct 6, 2020
* purose
*/


#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::string;
using std::getline;
using std::vector;
using std::cin;
using std::cout;
using std::istringstream;
using std::endl;

bool ReadLine(string& str)
{
	getline(cin, str);
		if (str == " ") {

			return false;
		}
		else {
			return true;
		}
}

unsigned StringToTokenWS(const string& input,
	vector<string>& tokens) {
	return 0;
}