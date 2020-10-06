/*
* filename.cpp
* Trey Chiu
* CS201
* Sep 7, 2020
* purose
*/

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::istringstream;
using std::vector;


int main()
{
	/*string text;
	cin >> text;
	istringstream instream(text);
	int num;
	instream >> num;
	if (!instream)
		cout << "da hell you doin man?" << endl;
	else
		cout << num;*/
	
	vector <string> v{ "69","69a","a69","5.6"," 68",
				"\t11", "6869", "0xA" };
	for (auto string : v) {

		istringstream instream(string);
		int num;
		instream >> num;
		num = num * num;
		cout << "The string is: " << string << endl;
		if (!instream)
			cout << "I see no number here" << endl;
		else 
			cout << "The square of the number in the above string is: " << num << endl;
				
	}
	

}