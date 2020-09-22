/*
* scores.cpp
* Trey Chiu
* CS201
* Sep 21, 2020
* 
*/

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::string;
using std::vector;

/*void PrintNameScore(vector<string>&names, vector<int>&scores)
{
	cout << "Here is your list of names:\n";
	for (int i = 0; i < names.size(); i++)
	{
		cout << names.at(i) << " " << scores.at(i) << endl;
	}
	
	cout << "\n";
	return;
}
*/

/*void GetPairs(vector<string>& names, vector<int>& scores)
{
	switch
	{
	case: 'NoName 0'
	{
		return;
	}
	default:
	{
		cin >> &names >> &scores;
	}
	}
}
*/
int main()
{
	cout << "Please enter in a name and score (ex: Jim 32), Type NoName 0 to end input" << endl;
	vector<string> names;
	vector<int>scores;
	
	bool dupname = false; // setting flag for duplicate names
	string name;
	int score;
	cin >> name >> score;
	while (name != "NoName" && dupname == false)
	{
		if (find(names.begin(), names.end(), name) != names.end()) // find is a default function in <algorithm> library
			{
				cout << "The name " << name << " already exists in the list.\n" << endl;
				dupname = true;
			}
		else
			{
				dupname = false;
				names.push_back(name);
				scores.push_back(score);
				cin >> name >> score;
			}
	}
	
	
	
	for (int i = 0; i < names.size(); i++)
	{
		cout << names.at(i) << " " << scores.at(i) << "\n";
	}
	return 0;
}