#include <iostream>

int linearSearch(int arr[], int n, int searchedElement)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == searchedElement)
		{
			return i;
		}
	}

	return -1;
}

int binarySearch(int arr[], int n, int searchedNumber)
{
	int begin = 0;
	int end = n - 1;

	while (begin <= end)
	{
		int mid = (begin + end) / 2;

		if (arr[mid] == searchedNumber)
		{
			return mid;
		}
		else if (arr[mid] < searchedNumber)
		{
			begin = mid + 1;
		}
		else//arr[mid] > searchedNumber
		{
			end = mid - 1;
		}
	}

	return -1;
}

void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n; i++)//2
	{
		for (int j = 0; j < n - i - 1; j++)//i = 0, j < 9 - 0 - i
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void insertionSort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}
}

void selectionSort(int arr[], int n)
{
	int minIndex;

	for (int i = 0; i < n - 1; i++)
	{
		minIndex = i;

		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}

		if (minIndex != i)
		{
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}

int main()
{
	const int capacity = 12;
	int arr[capacity];

	for (int i = 0; i < capacity; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << std::endl << "Enter element to search: ";
	int searchedElement;
	std::cin >> searchedElement;

	int result = binarySearch(arr, capacity, searchedElement);

	if (result != -1)
	{
		std::cout << result;
	}
	else
	{
		std::cout << "This element is not part of the array!\n";
	}

}
