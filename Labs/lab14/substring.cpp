/*
* substring.cpp
* Trey Chiu
* CS201
* Oct 4, 2020
* Prints out 
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl; 

void getWord(string & word) {
	//string word;
	cout << "Please type a cool word: " << endl;
	cin >> word;
}

void printSubWord(string& word) {
	for (int i = 0; i < word.size(); i++) // == How to use range based for loop here? 
	{
		cout << word.substr(i) << endl;
	}
}
int main()
{
	string word;
	getWord(word);
	printSubWord(word);
	
}