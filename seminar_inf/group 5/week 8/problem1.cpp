#include <iostream>


const int ARRAY_SIZE = 128;

void remove(int* array, int &size, int index);
void insert(int* array, int* size, int index, int value);


int main()
{
	int array[ARRAY_SIZE];

	int size;
	std::cin >> size;

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> array[i];
	}

	remove(array, size, 3);

	for (size_t i = 0; i < size; i++)
	{
		std::cout << array[i];
	}
}

void insert(int* array, int* size, int index, int value)
{
	if (*size < ARRAY_SIZE)
	{
		for (size_t i = *size; i > index; i--)
		{
			array[i] = array[i - 1];
		}
		array[index] = value;
		(*size)++;
	}
}



void remove(int* array, int &size, int index)
{

	for (size_t i = index; i < size - 1; i++)
	{
		array[i] = array[i + 1];
	}

	size--;
}
