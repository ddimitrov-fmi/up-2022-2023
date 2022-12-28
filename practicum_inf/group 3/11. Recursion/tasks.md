# Recursion Tasks

## Задача 0
Напишете рекурсивна функция, която принтира на екрана елементите на масив.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void printArray(const int* arr, int size)
{
	if (size <= 0)
		return;

	std::cout << *arr << " ";
	printArray(arr + 1, size - 1);
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	printArray(arr, 6);
}
```

</p>
</details>

## Задача 1
Напишете рекурсивна функция, която чете от клавиатурата цели числа и ги записва в масив

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void printArray(const int* arr, int size)
{
	if (size <= 0)
		return;

	std::cout << *arr << " ";
	printArray(arr + 1, size - 1);
}

void fillArray(int* arr, int size)
{
	if (size <= 0)
		return;

	std::cin >> *arr;
	fillArray(arr + 1, size - 1);
}

int main()
{
	int arr[6];
	fillArray(arr, 6);
	printArray(arr, 6);
}
```

</p>
</details>

## Задача 2
Напишете рекурсивна функция, която по дадено цяло число n намира n!

```
Примерен вход: 5
Примерен изход: 120
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int fact(int n)
{
	if (n <= 1)
		return 1;

	return n * fact(n - 1);
}

int main()
{
	std::cout << fact(5);
}
```

</p>
</details>

## Задача 3
Напишете рекурсивна функция, която приема масив и връща минималния му елемент.
```
Примерен вход: 
5
10 15 4 15 16
Примерен изход:
4
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int findMin(int* arr, int size)
{
	if (size <= 1)
		return *arr;

	int currMin = findMin(arr + 1, size - 1);

	return *arr < currMin ? *arr : currMin;
}

int main()
{
	int arr[] = { 2, 5, 1, 8, -9 , -1 };
	int arrSize = sizeof(arr) / sizeof(int);

	std::cout << findMin(arr, arrSize);
}
```

</p>
</details>

## Задача 4
Напишете функция, която приема число в десетична бройна система и връща числото в двоична бройна система.

```
Примерен вход: 5
Примерен изход: 101
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int toBinary(int num)
{
	if (num <= 0)
		return 0;

	return (num % 2) + toBinary(num / 2) * 10;
}

int main()
{
	int num = 6;

	std::cout << toBinary(num);
}
```

</p>
</details>

## Задача 5
Напишете рекурсивна функция, която проверява дали едно число е степен на двойката.

```
Примерен вход: 2046
Примерен изход: false
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

bool isPowerOfTwo(int num)
{
	if (num == 1)
		return true;

	return num % 2 == 0 && isPowerOfTwo(num / 2);
}

int main()
{
	int num = 2046;

	std::cout << std::boolalpha << isPowerOfTwo(num);
}
```

</p>
</details>

## Задача 6
Напишете рекурсивна функция, която проверява дали един масив от числа е подреден във възходящ ред.

```
Примерен вход:
6
10 12 4 5 6 7
Примерен изход: 
false
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

bool isAscending(int* arr, int size)
{
	if (size <= 1)
		return true;

	return *arr < *(arr + 1) && isAscending(arr + 1, size - 1);
}

int main()
{
	int arr[] = { 10, 12, 4, 5, 6, 7 };
	int size = sizeof(arr) / sizeof(int);

	std::cout << std::boolalpha << isAscending(arr, size);
}
```

</p>
</details>

## Задача 7
Напишете рекурсивна функция, която по дадено естествено число n намира n-тото число на Фибоначи.

```
Примерен вход: 6
Примерен изход: 8
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int fib(unsigned int n)
{
	if (n == 0)
		return 0;

	if (n <= 2)
		return 1;

	return fib(n - 1) + fib(n - 2);
}

int main()
{
	std::cout << fib(12);
}
```

</p>
</details>