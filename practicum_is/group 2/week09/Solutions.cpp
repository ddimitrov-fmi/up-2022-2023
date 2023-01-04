#include<iostream>
using namespace std;

//week 11

//task 2 function
void pushBack(int*& arr, int& capacity, int& size, int& number)
{
	arr[size] = number;
	size++;

	if (size == capacity)
	{
		capacity *= 2;
		int* newArr = new int[capacity];
		
		for (int i = 0; i < size; i++)
		{
			newArr[i] = arr[i];
		}

		delete[] arr;
		arr = newArr;
	}
}

//task 3 function
void pushFront(int*& arr, int& capacity, int& size, int& number)
{
	if (size == 0)
	{
		arr[0] = number;
		size++;
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			arr[size - i] = arr[size - (i + 1)];
		}

		arr[0] = number;
		size++;
	}
	
	if (size == capacity)
	{
		capacity *= 2;
		int* newArr = new int[capacity];

		for (int i = 0; i < size; i++)
		{
			newArr[i] = arr[i];
		}

		delete[] arr;
		arr = newArr;
	}
}

//task 4 function
void popBack(int*& arr, int& size)
{
	size--;
}

//task 5 function
void popFront(int*& arr, int& size)
{
	size--;

	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
}

//task 6 function
int** transpone(int**& matrix, int rows, int cols)
{
	int** result = new int*[cols];
	for (int i = 0; i < cols; i++)
	{
		result[i] = new int[rows];
	}

	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			result[i][j] = matrix[j][i];
		}
	}

	return result;
}

//task 7 function
char** hist(int*& arr, int size)
{
	int rows = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > rows)
			rows = arr[i];
	}

	char** result = new char* [rows];
	for (int i = 0; i < rows; i++)
	{
		result[i] = new char[size];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (j < arr[i])
			{
				result[(rows - 1) - j][i] = '+';
			}
			else
			{
				result[(rows - 1) - j][i] = '_';
			}
		}
	}

	return result;
}

int main()
{
	//TASK 1

	//int size;
	//cin >> size;

	//double* marks = new double[size];
	//double sum = 0;

	//for (int i = 0; i < size; i++)
	//{
	//	cin >> marks[i];
	//	sum += marks[i];
	//}

	//std::cout << "Avg = " << sum / size;


	//TASK 2

	//int capacity = 5, size = 0;
	//int* arr = new int[capacity];

	//for (int i = 0; i < 10; i++)
	//{
	//	pushBack(arr, capacity, size, i);

	//	std::cout << "CAP = " << capacity << "\n";
	//	std::cout << "SIZE= " << size << "\n";
	//	for (int j = 0; j < size; j++)
	//	{
	//		std::cout << arr[j] << ' ';
	//	}
	//	std::cout << "\n";
	//}


	//TASK 3

	//int capacity = 5, size = 0;
	//int* arr = new int[capacity];

	//for (int i = 0; i < 10; i++)
	//{
	//	pushFront(arr, capacity, size, i);

	//	std::cout << "CAP = " << capacity << "\n";
	//	std::cout << "SIZE= " << size << "\n";
	//	for (int j = 0; j < size; j++)
	//	{
	//		std::cout << arr[j] << ' ';
	//	}
	//	std::cout << "\n";
	//}


	//TASK 4

	//int capacity = 5, size = 0;
	//int* arr = new int[capacity];

	//for (int i = 0; i < 10; i++)
	//{
	//	pushFront(arr, capacity, size, i);
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	popBack(arr, size);

	//	std::cout << "CAP = " << capacity << "\n";
	//	std::cout << "SIZE= " << size << "\n";
	//	for (int j = 0; j < size; j++)
	//	{
	//		std::cout << arr[j] << ' ';
	//	}
	//	std::cout << "\n";
	//}

	
	//TASK 5

	//int capacity = 5, size = 0;
	//int* arr = new int[capacity];

	//for (int i = 0; i < 10; i++)
	//{
	//	pushFront(arr, capacity, size, i);
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	popFront(arr, size);

	//	std::cout << "CAP = " << capacity << "\n";
	//	std::cout << "SIZE= " << size << "\n";
	//	for (int j = 0; j < size; j++)
	//	{
	//		std::cout << arr[j] << ' ';
	//	}
	//	std::cout << "\n";
	//}


	//TASK 6

	//int rows = 5, cols = 3;

	//int** matrix = new int* [rows];
	//for (int i = 0; i < rows; i++)
	//{
	//	matrix[i] = new int[cols];
	//}

	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		cin >> matrix[i][j];
	//	}
	//}

	//int** transpMatrix = transpone(matrix, rows, cols);

	//for (int i = 0; i < cols; i++)
	//{
	//	for (int j = 0; j < rows; j++)
	//	{
	//		cout << transpMatrix[i][j] << ' ';
	//	}
	//	std::cout << '\n';
	//}


	//TASK 7

	//int capacity = 5, size = 0;
	//int* arr = new int[capacity];

	//for (int i = 0; i < 8; i++)
	//{
	//	pushBack(arr, capacity, size, i);
	//}

	//char** histogram = hist(arr, size);
	//
	//for (int i = 0; i < 8; i++)
	//{
	//	for (int j = 0; j < 8; j++)
	//	{
	//		cout << histogram[i][j] << ' ';
	//	}
	//	std::cout << '\n';
	//}

	

	return 0;
}