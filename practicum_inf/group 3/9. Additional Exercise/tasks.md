# Additional Exercise Tasks

## Задача 0
Напишете програма, която по въведено естествено число `n` (`n` <= 10'000):
- Намира всички естествени числа до `n`, чиито квадрат няма повтарящи се цифри
- Намира сумата и разликата на тези квадрати и я изкарва на екрана
- Намира чий квадрати на тези квадрати нямат повтарящи се цифри

<details><summary><b>Solution</b></summary> 
<p>

```cpp
void printArr(unsigned arr[], unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

bool hasRepeatingDigits(unsigned num)
{
	bool containingDigits[10] = { false };
	unsigned currDigit;

	while (num > 0)
	{
		currDigit = num % 10;

		if (containingDigits[currDigit] == true)
			return true;

		containingDigits[currDigit] = true;
		num /= 10;
	}

	return false;
}

unsigned sumArr(unsigned arr[], unsigned size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum;
}

int diffArr(unsigned arr[], unsigned size)
{
	int diff = 0;
	for (int i = 0; i < size; i++)
	{
		diff -= arr[i];
	}

	return diff;
}

int main()
{
	unsigned n;

	do
	{
		std::cin >> n;
	} while (n > 10'000);

	unsigned squaresSize = 0;
	unsigned squares[10'000];

	for (int i = 1; i <= n; i++)
	{
		if (!hasRepeatingDigits(i * i))
		{
			squares[squaresSize] = i * i;
			squaresSize++;
		}
	}

	printArr(squares, squaresSize);

	std::cout << "\n\n";

	std::cout << "Sum: " << sumArr(squares, squaresSize) << "\n\n";
	std::cout << "Diff: " << diffArr(squares, squaresSize) << "\n\n";
}
```

</p>
</details>

## Задача 1
Напишете програма, която по зададено естествено число `n` (`n` <= 1000) запазва следната редица в масив:
`1223334444...`, където `n` е броя на елементите запазени в масива. 
След това намерете броя на четните числа, които се намират на четен индекс.
Направете същото за нечетните числа на нечетен индекс.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int evenOnEvenIndex(int arr[], int size)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0 && arr[i] % 2 == 0)
			count++;
	}

	return count;
}

int oddOnOddIndex(int arr[], int size)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0 && arr[i] % 2 != 0)
			count++;
	}

	return count;
}

int main()
{
	int n;
	std::cin >> n;

	int numbersCount = 0;
	int numbers[1000];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (numbersCount >= n)
				break;

			numbers[numbersCount] = i;
			numbersCount++;
		}
	}

	std::cout << oddOnOddIndex(numbers, numbersCount);
}
```

</p>
</details>

## Задача 2
Напишете програма, която приема естествено число `n` (`n` <= 1'000'000). И функция която приема това число и връща число състоящо се от същите цифри, но в намаляващ ред.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void sortArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] < arr[j]) 
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

void bubbleSort(int arr[], int size)
{
	for (int j = 0; j < size - 1; j++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (arr[i] < arr[i + 1])
				swap(arr[i], arr[i + 1]);
		}
	}
}

int getSortedNum(int number)
{
	const int MAX_DIGITS_COUNT = 7;

	int digitsCount = 0;
	int digits[MAX_DIGITS_COUNT];

	int currDigit;

	while (number > 0)
	{
		currDigit = number % 10;

		digits[digitsCount] = currDigit;
		digitsCount++;

		number /= 10;
	}

	bubbleSort(digits, digitsCount);

	int sortedNum = 0;

	for (int i = 0; i < digitsCount; i++)
	{
		sortedNum = sortedNum * 10 + digits[i];
	}

	return sortedNum;
}

int main()
{
	int userNumber;
	std::cin >> userNumber;

	int sortedNumber = getSortedNum(userNumber);

	std::cout << sortedNumber;
}
```

</p>
</details>

## Задача 3
Напишете програма, която приема две естествени числа `n`и `m` (`n`, `m` <= 5), където `n` са редовете, а `m` са колоните в една матрица. И приема едно дробно число `k`. Клетките на матрицата трябва да в интервала от `(-10, 10)`
Намерете колко и кои клетки на тази матрица удовлетворяват следния критерии:
- Разликата им с `k` е не по-голяма от `(m + n) / k`
- Цялата им част е четно число

Изкарайте във възходящ ред стойнсотта на келтките, както и тяхната сума.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

const int MAX_ROWS = 5;
const int MAX_COLS = 5;

void sortArray(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				double temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

double sumArray(double arr[], int size)
{
	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum;
}

void getCells(double matrix[MAX_ROWS][MAX_COLS], int rows, int cols, double cells[], int& cellsCount, double k)
{
	double diff = (rows + cols) / k;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] - k < diff && (int)matrix[i][j] % 2 == 0)
			{
				cells[cellsCount] = matrix[i][j];
				cellsCount++;
			}
		}
	}
}

void fillMatrix(double matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			do
			{
				std::cin >> matrix[i][j];
			} while (matrix[i][j] <= -10 || matrix[i][j] >= 10);
		}
	}
}

void printMatrix(double matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << matrix[i][j] << " ";
		}

		std::cout << "\n";
	}
}

int main()
{
	double matrix[MAX_ROWS][MAX_COLS];

	unsigned n, m;
	double k;

	do
	{
		std::cin >> n;
	} while (n > 5);

	do
	{
		std::cin >> m;
	} while (m > 5);

	std::cin >> k;

	int cellsCount = 0;
	double cells[MAX_ROWS * MAX_COLS];

	fillMatrix(matrix, n, m);

	getCells(matrix, n, m, cells, cellsCount, k);

	std::cout << "\nSum: " << sumArray(cells, cellsCount) << "\n\n";

	sortArray(cells, cellsCount);

	std::cout << "Sorted: ";
	for (int i = 0; i < cellsCount; i++)
	{
		std::cout << cells[i] << " ";
	}
}
```

</p>
</details>

# Helpful links
[Bubble Sort](https://www.geeksforgeeks.org/bubble-sort/) </br>
[Selection Sort](https://www.geeksforgeeks.org/selection-sort/)

[Bubble Sort Video](https://www.youtube.com/watch?v=xli_FI7CuzA) </br>
[Selection Sort Video](https://www.youtube.com/watch?v=g-PGLbMth_g)
