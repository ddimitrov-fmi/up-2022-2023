#include <iostream>

bool checkBoolVector(bool* boolVector, int n)
{
	int firstPartCount = 0;
	int secondPartCount = 0;

	for (int i = 0; i < n / 2; i++)
	{
		if (boolVector[i] == 1)
		{
			firstPartCount++;
		}
	}
	for (int i = n / 2; i < n; i++)
	{
		if (boolVector[i] == 1)
		{
			secondPartCount++;
		}
	}

	return firstPartCount == secondPartCount;
}

void printVector(bool* boolVector, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << boolVector[i];
	}
	std::cout << std::endl;
}

void recursiveGenerateBoolVector(bool* boolVector, int n, int current)
{
	if (n == current)
	{
		if (checkBoolVector(boolVector, n))
		{
			printVector(boolVector, n);
		}

		return;
	}

	boolVector[current] = 0;
	recursiveGenerateBoolVector(boolVector, n, current + 1);
	boolVector[current] = 1;
	recursiveGenerateBoolVector(boolVector, n, current + 1);
}

void generateBoolVectors(bool* boolVector, int n)
{
	boolVector[0] = 0;
	recursiveGenerateBoolVector(boolVector, n, 1);
	boolVector[0] = 1;
	recursiveGenerateBoolVector(boolVector, n, 1);
}

int main()
{
	int n;
	std::cin >> n;

	bool* boolVector = new bool[2 * n];

	generateBoolVectors(boolVector, 2 * n);

	delete[] boolVector;

	return 0;
}