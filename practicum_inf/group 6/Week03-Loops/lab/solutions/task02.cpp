#include <iostream>


int main()
{
	int x, n;
	int step = 1;

	std::cin >> x >> n;

	for (int i = 1; i <= n; ++i)
	{
		step = step * x;
	}

	std::cout << step << std::endl;

    return 0;
}
