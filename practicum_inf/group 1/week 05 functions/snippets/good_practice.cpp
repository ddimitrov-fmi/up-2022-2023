#include <iostream>
#include <cmath>

/*
ATTENTION:
The solution:
bool isEqual(double first, double second, double eps = 0.00001)
{
	if (abs(first - second) < eps)
	{
		return true;
	}
	return false;
}

Is NOT a good practice. If you notice anywhere in your code a construction like this:

	if (<condition>)
	{
		return true;
	}
	return false;

REPLACE IT with the equivalent:
	return <condition>;
*/

bool isEqual(double first, double second, double eps = 0.00001)
{
	return abs(first - second) < eps;
}

int main()
{

	return 0;
}