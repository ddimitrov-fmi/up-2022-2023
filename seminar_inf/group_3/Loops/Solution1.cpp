#include <iostream>

int main()
{
	/*unsigned*/ int n = 0;
	std::cin >> n;
	if (n < 1) //while...
	{
		std::cout << "Incorrect input!\n";
		return 0;
	}
	for (/*unsigned long long*/ int i = 1, cnt = 0; cnt < n; i++)
	{
		/*unsigned*/ int temp = i;
		while (true)
			if (temp % 2 == 0) temp /= 2;
			else if (temp % 3 == 0) temp /= 3;
			else if (temp % 5 == 0) temp /= 5;
			else break;
		//while (temp % 2 == 0) temp /= 2;
		//while (temp % 3 == 0) temp /= 3;
		//while (temp % 5 == 0) temp /= 5;
		if (temp == 1)
		{
			std::cout << i << ' ';
			++cnt;
		}
	}
	return 0;
}