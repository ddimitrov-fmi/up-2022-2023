#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	if (n < 1 || n > 31)
	{
		std::cout << "Invalid number!" << std::endl;
		return 0;
	}
	int prev = INT_MIN,
		temp = 0,
		num = 0,
		cnt1 = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		num <<= 1;
		if (temp >= prev)
		{
			num |= 1;
			cnt1++;
		}
		prev = temp;
	}
	int half1 = (cnt1 % 2 ? cnt1 + 1 : cnt1) / 2,
		halfIndex = 0;// -1 ?? first alaways 1
	//cnt1 = 0;
	for (int i = n, cnt1 = 0; i > 0; i--)
	{
		int mask = 1;
		if ((num & (mask << (i - 1))) != 0)
		{
			std::cout << '1' << ' ';
			cnt1++;
		}
		else
			std::cout << '0' << ' ';
		//the number of shifts to reach the middle 1
		if (cnt1 == half1)
			halfIndex = i;
	}
	std::cout << std::endl;
	int cnt0L = 0, cnt0R = 0;
	for (int i = n; i > 0; i--)
	{
		int mask = 1;
		if ((num & (mask << (i - 1))) == 0)
		{
			if (i > halfIndex)
				cnt0L++;
			else
				cnt0R++;
		}
	}
	if (cnt0L > cnt0R)
		std::cout << "Leaft side: " << cnt0L << std::endl;
	else if (cnt0L < cnt0R)
		std::cout << "Right side: " << cnt0R << std::endl;
	else
		std::cout << "Both sides: " << cnt0L << std::endl;//cnt0R

	return 0;
}