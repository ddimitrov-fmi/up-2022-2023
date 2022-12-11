#include <iostream>

const int MAX_SIZE = 1024;  // 512 за втори вариант

int* getSpecialElement(int* arr, int size)
{
	if (size < 3)
		return nullptr;

	bool foundSpecialElement = false;
	int* specialElement = nullptr;
	for (size_t i = 0; i < size - 1; i++)
	{
		if (arr[i] >= arr[i + 1] && !foundSpecialElement)	// "<=" за втори вариант
		{
			foundSpecialElement = true;
			specialElement = arr + i;		//arr + i == &arr[i]
		}

		if (!foundSpecialElement && arr[i] >= arr[i + 1])	// "<=" за втори вариант
			return nullptr;

		if (foundSpecialElement && arr[i] < arr[i + 1])		// ">" за втори вариант
			return nullptr;
		
	}

	return specialElement;
}

int main()
{
	unsigned n;
	std::cout << "Insert the size of the array (should be value in range [0, " << MAX_SIZE << "):";
	do
	{
		std::cin >> n;
	} while (n < 0 || MAX_SIZE <= n);

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int* result = getSpecialElement(arr, n);
	if (result)
	{
		std::cout << "The array is special, the special element is " << *result << std::endl;
	}
	else
	{
		std::cout << "The array is not special" << std::endl;
	}

    return 0;
}
