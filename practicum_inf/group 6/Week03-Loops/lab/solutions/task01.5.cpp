#include <iostream>
#include <cstddef>

int main()
{
	int n;
	std::cin >> n;

	std::size_t sum = 0;
	std::size_t fact = 1;
	for (std::size_t i = 1; i <= n; ++i)
	{
		fact = fact * i;
		sum = sum + fact;
	}
    
	std::cout << sum << std::endl;

    return 0;
}