/*
* lab11.cpp
* Trey Chiu
* CS201
* Sep 7, 2020
* Will repeatedly input a word from user,
* prints lower-case letters in order.
*/

#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string string1;
	while (cin >> string1)
	{
		//cout << string1 << endl;
		for (int i = 0; i < string1.size(); i++)
		{
			if (islower(string1[i]))
			{
				cout << string1[i];
			}
			
		}
		cout << "\n" << endl;

	}
	return 0;

}