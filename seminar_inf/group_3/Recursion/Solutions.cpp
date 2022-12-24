#include <iostream>
#include <cstring>

bool helpFunc(int n, int num)
{
	if (n == 0)
		return false;
	else if (n / 10 == num)
		return true;
	else
		return helpFunc(n / 10, num);
}

bool func(int n)
{
	if (helpFunc(n / 10, n % 10))
		return true;
	else if (n == 0)
		return false;
	else
		return func(n / 10);
}

char* func2(int n)
{
	char* res;
	if (n == 1)
	{
		res = new char[2];
		res[0] = 1 + '0'; res[1] = '\0';
		return res;
	}
	char* tmp = func2(n - 1);
	int length = strlen(tmp) * 2 + 2;//+1 for n + '0' and +1 for '\0'
	res = new (std::nothrow) char[length];
	strcpy(res, tmp);
	char* num = new char[2];
	num[0] = n + '0'; num[1] = '\0';
	strcat(res, num);
	strcat(res, tmp);
	delete[] tmp;
	delete[] num;
	return res;
}

int main()
{
	char* myString = func2(5);
	std::cout << myString << std::endl;
	delete[] myString;

	return 0;
}