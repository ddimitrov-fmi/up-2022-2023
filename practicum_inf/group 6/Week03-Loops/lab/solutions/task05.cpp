#include<iostream>


int main()
{
	int n;
	std::cin >> n;

	int sum = 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			std::cout << "Is prime" << std::endl;
			return 0;
		}
	}

	std::cout << "Not prime" << std::endl;

    return 0;
}