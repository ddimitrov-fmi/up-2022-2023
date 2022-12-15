#include <iostream>

void directRec(int n);
void indirectRec1(int n);
void indirectRec2(int n);
int linRec(int n);
int binRec(int n);
void headRec(int n);
void tailRec(int n);

int headLinRec(int res, int n = 1);

int main()
{
	//directRecursion(5);
	//directRecursion(11);
	
	//indirectRec1(3);
	//std::cout << std::endl;
	//indirectRec2(5);

	//std::cout << linRec(5) << std::endl;
	//std::cout << std::endl;
	//std::cout << binRec(5);

	//headRec(3);
	//std::cout << std::endl;
	//tailRec(3);

	//std::cout << headLinRec(5);

	return 0;
}

void directRec(int n)
{
	if (n > 10)
		return;
	else
	{
		std::cout << "rec " << (10 - n) << std::endl;
		directRec(n + 1);
	}
}
void indirectRec1(int n)
{
	if (n > 10)
		return;
	else
	{
		//std::cout << 10 - n;
		std::cout << " rec1" << std::endl;
		indirectRec2(n + 1);
	}
}
void indirectRec2(int n)
{
	//if (n > 10)
	//	return;
	//else
	{
		//std::cout << 10 - n;
		std::cout << " rec2" << std::endl;
		indirectRec1(n + 1);
	}
}
int linRec(int n)
{
	if (n == 0)
		return 1;
	std::cout << "lin" << std::endl;
	return n * linRec(n - 1);
}
int binRec(int n)
{
	if (n == 0 || n == 1)
		return 1;
	std::cout << "bin" << std::endl;
	return binRec(n - 1) + binRec(n - 2);
}
void headRec(int n)
{
	if (n < 0)
	{
		std::cout << "end" << std::endl;
		return;
	}
	std::cout << "head" << std::endl;
	headRec(n - 1);
}
void tailRec(int n)
{
	if (n < 0)
	{
		std::cout << "end" << std::endl;
		return;
	}
	tailRec(n - 1);
	std::cout << "tail" << std::endl;
}
int headLinRec(int n, int res)
{
	if (n == 0)
		return res;
	return headLinRec(n - 1, n * res);
}