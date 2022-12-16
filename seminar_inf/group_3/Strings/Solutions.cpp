#include <iostream>
#include <cstring>

void Print(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}

int* func2(int* arr, int n)
{
	int* result = new (std::nothrow) int[n];
	if (result == nullptr) return result;
	for (int i = 0; i < n; i++)
	{
		result[i] = arr[i];
	}
	return result;
}

int* func3(int* arr, int new_len)
{
	int* result = new (std::nothrow) int[new_len];
	for (int i = 0; i < new_len; i++)
	{
		result[i] = arr[i];
	}
	return result;
}

int len(int n)
{
	int cnt = 0;
	while (n > 0)
	{
		n /= 10;
		cnt++;
	}
	return cnt;
}

int pow10(int n)
{
	int res = 1;
	for (int i = 1; i <= n; i++)
	{
		res *= 10;
	}
	return res;
}

char* func4(int n)
{
	int length = len(n);
	char* result = new (std::nothrow) char[length + 1];
	for (int i = 0; i < length; i++)
	{
		result[i] = ((n / pow10(length - 1 - i)) % 10) + '0';
	}
	result[length] = '\0';
	return result;
}

int func5(char* str)
{
	int res = 0;
	while (str[res++] != '\0');
	return res - 1;
}

void func6(char* str1, char* str2)
{
	int i = 0;
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
}

int func9(char* str1, char* str2)
{
	int i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] < str2[i])
			return -1;
		else if (str2[i] < str1[i])
			return 1;
		i++;
	}
	return 0;
}

int main()
{
	char* result1 =  func4(1234738265);
	char* result2 =  func4(1233738265);
	if (func9(result2, result1) > 0)
		std::cout << 1;
	else if (func9(result2, result1) == 0)
		std::cout << 0;
	else
		std::cout << -1;

	return 0;
}