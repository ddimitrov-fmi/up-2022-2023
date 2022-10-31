#include <iostream>


int main()
{
	int number;
	std::cin >> number;
	int n = (number / 100) + ((number / 10) % 10);
	int m = (number / 100) + (number % 10);
	int lastNumber = number;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int numberToPrint;

			if (lastNumber % 5 == 0)
			{
				numberToPrint = lastNumber - (number / 100);
			}
			else if (lastNumber % 3 == 0)
			{
				numberToPrint = lastNumber - ((number / 10) % 10);
			}
			else
			{
				numberToPrint = lastNumber + (number % 10);
			}

			std::cout << numberToPrint << " ";
			lastNumber = numberToPrint;
		}

		std::cout << std::endl;
	}

	return 0;
}



