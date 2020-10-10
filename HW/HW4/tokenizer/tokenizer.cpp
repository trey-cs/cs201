/*
* tokenizer.cpp
* Trey Chiu
* CS201
* Oct 6, 2020
* Will
*/

#include "tokenizer.hpp"
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::getline;
using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector <string> tokens;
	string input;
	cout << "Please enter a string (can be multiple lines)" << endl;
	while (ReadLine(input)) {
		//tokens.push_back(input);
	}
	cout << input << endl;
	for (auto n : tokens) {
		cout << n << endl;
	}
	return 0;
}