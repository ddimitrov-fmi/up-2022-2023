# Array Tasks

## Задача 0
Да се напише функция, която въвежда от клавиатурата цяло число n и масив от n реални числа. Да се намерят минималния и максималния елемент на масива и техните индекси.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void enterArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

int main()
{
	int arr[100];
	int size;

	std::cout << "Please enter the size of the array: ";
	std::cin >> size;

	std::cout << "Enter the array's elements: ";
	enterArray(arr, size);

	int minEl = arr[0];
	int maxEl = arr[0];

	int minIndex = 0;
	int maxIndex = 0;


	for (int i = 0; i < size; i++)
	{
		if (arr[i] < minEl)
		{
			minEl = arr[i];
			minIndex = i;
		}

		if (arr[i] > maxEl)
		{
			maxEl = arr[i];
			maxIndex = i;
		}
	}

	std::cout << "Max value: " << maxEl << ", with index " << maxIndex << std::endl;
	std::cout << "Min value: " << minEl << ", with index " << minIndex << std::endl;
}
```

</p>
</details>

## Задача 1
Да се напише функция, която въвежда от клавиатурата цяло число n и масив от n реални числа. Да се намерят минималния и максималния елемент на масива. Да се разменят местата им в масива и да се изведе новия масив.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void enterArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	int arr[100];
	int size;

	std::cout << "Please enter the size of the array: ";
	std::cin >> size;

	std::cout << "Enter the array's elements: ";
	enterArray(arr, size);

	int minEl = arr[0];
	int maxEl = arr[0];

	int minIndex = 0;
	int maxIndex = 0;


	for (int i = 0; i < size; i++)
	{
		if (arr[i] < minEl)
		{
			minEl = arr[i];
			minIndex = i;
		}

		if (arr[i] > maxEl)
		{
			maxEl = arr[i];
			maxIndex = i;
		}
	}

	arr[minIndex] = maxEl;
	arr[maxIndex] = minEl;

	printArray(arr, size);
}
```

</p>
</details>

## Задача 2
Да се напише функция, която въвежда от клавиатурата цяло число n и масив от n цели числа. Да се провери дали в масива има два последователни елемента, равни на 0.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void enterArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

bool doesArrayHaveTwoConsecutiveZeros(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] == 0 && arr[i] == arr[i + 1]) 
			return true;
	}

	return false;
}

int main()
{
	int arr[100];
	int size;

	std::cout << "Please enter the size of the array: ";
	std::cin >> size;

	std::cout << "Enter the array's elements: ";
	enterArray(arr, size);


	std::cout << std::boolalpha << doesArrayHaveTwoConsecutiveZeros(arr, size);
}
```

</p>
</details>

## Задача 3
Да се напише функция, която въвежда от клавиатурата цяло число n и масив от n цели числа. Да се намерят и изведат: първият неотрицателен елемент на масива и сумата на елементите след него. 
Ако няма такива да се изведе подходящо съобщение.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void enterArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

int getFirstPositive(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) 
			return arr[i];
	}

	return -1;
}

int getSumAfterFirstPositive(int arr[], int size)
{
	double sum = 0;

	if (!getFirstPositive(arr, size)) 
		return sum;

	bool foundPositive = false;

	for (int i = 0; i < size; i++)
	{
		if (foundPositive) 
			sum += arr[i];

		if (arr[i] > 0) 
			foundPositive = true;
	}

	return sum;
}


int main()
{
	int arr[100];
	int size;

	std::cout << "Please enter the size of the array: ";
	std::cin >> size;

	std::cout << "Enter the array's elements: ";
	enterArray(arr, size);

	int firstPositive = getFirstPositive(arr, size);

	if (firstPositive > 0)
	{
		int sumAfterPositive = getSumAfterFirstPositive(arr, size);
		std::cout << "The first positive number in the array is: " << firstPositive << std::endl;
		std::cout << "And the sum of the numbers after it is: " << sumAfterPositive << std::endl;
	}
	else
	{
		std::cout << "There are no positive numbers in the array!" << std::endl;
	}
}
```

</p>
</details>

## Задача 4
От клавиатурата се въвеждат N числа. Да се изведат в обратен ред.(решете с функция)

```
Примерен вход: 4 1 2 3 4
Примерен изход: 4 3 2 1
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void enterArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

void reverseArray(int arr[], int size)
{
	int i = 0;
	int j = size - 1;
	int temp;

	while (i < size / 2)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		i++;
		j--;
	}
}

int main()
{
	int arr[100];
	int size;

	std::cout << "Please enter the size of the array: ";
	std::cin >> size;

	std::cout << "Enter the array's elements: ";
	enterArray(arr, size);

	reverseArray(arr, size);

	printArray(arr, size);
}
```

</p>
</details>

## Задача 5
Да се напише функция, която въвежда от клавиатурата низ и символ. Да се изведе колко пъти се среща символът в низа и , ако се среща да го замести със символа *.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void enterString(char string[], const int length)
{
    std::cout << "Please enter the elements of the array: " << std::endl;

    int i;
    for (i = 0; i < length; i++)
    {
        std::cin >> string[i];
    }

    string[i] = '\0';
}

int replaceCharacterAndGetRepeatingCount(char string[], const int length, const char character)
{
    int counter = 0;

    for (int i = 0; i < length; i++)
    {
        if (string[i] == character)
        {
            counter++;
            string[i] = '*';
        }
    }

    return counter;
}

int main()
{
	const int ARRAY_SIZE = 101;

	int userLength;
	char character;
	char string[ARRAY_SIZE];

	std::cout << "How many characters do you want to enter[1 - 100]: ";

	do
	{
		std::cin >> userLength;
	} while (userLength < 1 || userLength > 100);

	enterString(string, userLength);

    std::cout << string << std::endl;

    std::cout << "Which character would you like to replace: ";
	std::cin >> character;

	int repeatingCount = replaceCharacterAndGetRepeatingCount(string, userLength, character);

	std::cout << "The character " << character << " is repeated " << repeatingCount << " times." << std::endl;

    std::cout << string << std::endl;
}
```

</p>
</details>

## Задача 6
Да се напише функция, която въвежда от клавиатурата цяло число n и масив от n символа. Да се провери дали масивът е симетричен(огледален, палиндром).

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void enterArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

bool isArrayMirrored(int arr[], int size)
{
    int halfSize = size / 2;

    for (int i = 0; i < halfSize; i++)
    {
        if (arr[i] != arr[size - i - 1]) 
            return false;
    }

    return true;
}

int main()
{
    int arr[100];
    int size;

    std::cout << "Please enter the size of the array: ";
    std::cin >> size;

    std::cout << "Enter the array's elements: ";
    enterArray(arr, size);

    std::cout << std::boolalpha << "Is array mirrored: " << isArrayMirrored(arr, size);
}
```

</p>
</details>