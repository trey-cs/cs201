#include "intio.hpp"
#include "Lab8.hpp"
#include <iostream>

int doInput()
{
	int x = getInt();
	return x;
}

int compute(int &value)
{
	int x = value * value;
	return x;
}
