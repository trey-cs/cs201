#include<iostream>
#include<vector>
#include<string>

void InputNames(std::vector<std::string> & names)
{
	names.push_back("Travis");
	return;
}

int main()
{
	std::vector<std::string>names;
	InputNames(names);
	for (int i = 0; i < names.size(); i++)
	{
		std::cout << names[i] << std::endl;
	}
}