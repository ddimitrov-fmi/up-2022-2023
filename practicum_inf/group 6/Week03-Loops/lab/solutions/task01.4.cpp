#include <iostream>
#include <cstddef>

int main()
{
	int n;
	std::cin >> n;

	std::size_t sum = 0;
	for (std::size_t i = 1; i <= n; i++)
	{
		sum = sum + i * (i + 1) * (i + 2);
	}
    
	std::cout << sum << std::endl;

	return 0;
}