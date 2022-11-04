#include <iostream>


int main()
{
	int n;
	std::cin >> n;

	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
	}

	std::cout << sum << std::endl;

    return 0;
}