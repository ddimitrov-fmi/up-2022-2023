# Multidimensional Arrays Tasks

## Задача 0
Една редица от естествени числа ще наричаме зигзагообразна нагоре, ако за елементите й са изпълняват условията:
N1 < N2 > N3 < N4 > N5 <..
Направете функция isZigZag, която проверява дали въведени в едномерен масив редица от числа изпълняват горните изисквания.

```
Примерен вход: 
6
1 3 2 4 3 7
Примерен изход: YES
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void enterArray(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> numbers[i];
	}
}

bool isZigZag(int numbers[], int size)
{
	for (int i = 1; i < size; i++)
	{
		if (i % 2 != 0)
		{
			if (numbers[i - 1] >= numbers[i]) 
            return false;
		}
		else
		{
			if (numbers[i - 1] <= numbers[i]) 
            return false;
		}
	}

	return true;
}

int main()
{
	const int ARRAY_SIZE = 100;
	int numbers[ARRAY_SIZE];
	int userSize;

	std::cout << "How many numbers do you want to enter[1-100]: ";

	do
	{
		std::cin >> userSize;
	} while (userSize < 1 || userSize > 100);

	std::cout << "Enter the array's elements: " << std::endl;
	enterArray(numbers, userSize);

	std::cout << "Is zigzag: " << (isZigZag(numbers, userSize) ? "YES" : "NO") << std::endl;
}
```

</p>
</details>

## Задача 1
Да се направи функция reverse, чрез която предварително въведени n естествени числа от интервала [0..5000] в едномерен масив се разменят местата на елементите му.
Така 1-вият става последен а последният елемент 1-ви; 2-рият елемент става предпоследен, а предпоследният елемент става 2-ри и т.н.
Функцията да илюстрира обхождане на масив при извършване размяна стойностите на отделните елементи.

```
Примерен вход: 
7 
1 2 4 3 5 6 7 
Примерен изход: 7, 6, 5, 3, 4, 2, 1
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void reverseArray(int arr[], int size)
{
	for (int i = 0; i < size / 2; i++)
	{
      // Swapping elements
		arr[i] ^= arr[size - i - 1];
		arr[size - i - 1] ^= arr[i];
		arr[i] ^= arr[size - i - 1];
	}
}

void enterArray(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> numbers[i];
	}
}

void printArray(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
}

int main()
{
	const int ARRAY_SIZE = 5000;
	int numberArray[ARRAY_SIZE];
	int userSize;

	std::cout << "How big do you want the array to be[0 - 5000]: ";

	do
	{
		std::cin >> userSize;
	} while (userSize < 0 || userSize > 5000);

   enterArray(numberArray, userSize);
	std::cout << std::endl;

	reverseArray(numberArray, userSize);
	printArray(numberArray, userSize);
}
```

</p>
</details>

## Задача 2
Да се направи функция onlyEven, чрез която се въвежда естествено число N от интервала [5..25].
Да се въведат N броя двуцифрени естествени числа.
Функцията да използва само един масив и да илюстрира алгоритъм за изтриване на елемент при работа с масив.
Въведените в масива числа се разглеждат като четни и нечетни по следния начин: 
- всяко четно число се изтрива 
- нечетните числа съхраняват стойността си и съответната относителна позиция в масива.

```
Примерен вход: 
11 
12 45 33 26 32 47 91 92 72 14 62 
Примерен изход: 45, 33, 47, 91

```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

void enterArray(int numbers[], int size)
{
    std::cout << "Enter the array's elements: " << std::endl;

    for (int i = 0; i < size; i++)
    {
        do
        {
            std::cin >> numbers[i];
        } while (numbers[i] < 10 || numbers[i] > 99);
    }

    std::cout << std::endl;
}

void onlyOdd(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            for (int j = 0; j < size - i; j++)
            {
                numbers[i + j] = numbers[i + j + 1];
            }

            size--;
            i--;
        }
    }

    printArray(numbers, size);
}

int main()
{
    const int ARRAY_SIZE = 25;
    int numbers[ARRAY_SIZE];
    int userSize;

    std::cout << "Please enter a size for the array[5 - 25]: ";

    do
    {
        std::cin >> userSize;
    } while (userSize < 5 || userSize > 25);

    std::cout << "Please enter only 2-digit numbers: ";
    enterArray(numbers, userSize);

    onlyOdd(numbers, userSize);
}
```

</p>
</details>

## Задача 3
Да се прочете въведено цяло положително число n и да се създаде масив от цели числа с `n` на брой елемента. След това се четат въведени `n` на брой числа, с които се запълва масива. Въвежда се още едно цяло число.
- Да се определи среща ли се въведеното число в масива и ако да, колко пъти; 
- Ако числото се среща в масива, да се определят и отпечатат всички позиции, на които то се среща.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
void printArray(const int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

void enterArray(int numbers[], const int size)
{
    std::cout << "Enter the array's elements: " << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << std::endl;
}

bool doesArrayContainNumber(const int arr[], const int size, const int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number) 
            return true;
    }

    return false;
}

int getAmountAndSetNumberIndexes(const int arr[], const int size, const int number, int indexes[])
{
    int indexesSize = 0;
    for (int i = 0, j = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            indexes[j] = i;
            indexesSize++;
            j++;
        }
    }

    return indexesSize;
}

int main()
{
    const int ARRAY_SIZE = 100;

    int numbers[ARRAY_SIZE];
    int userSize;

    int number;

    std::cout << "How many numbers do you want to enter[1 - 100]: ";
    
    do
    {
        std::cin >> userSize;
    } while (userSize < 1 || userSize > 100);

    enterArray(numbers, userSize);

    std::cout << "Enter a number to be checked if it's in the array: ";
    std::cin >> number;

    if (doesArrayContainNumber(numbers, userSize, number))
    {
        int numberIndexes[ARRAY_SIZE];

        std::cout << "The array conatins your number! Its indexes inside the array are as follows:" << std::endl;
        
        int indexSize = getAmountAndSetNumberIndexes(numbers, userSize, number, numberIndexes);
        printArray(numberIndexes, indexSize);
    }
    else
    {
        std::cout << "The array doesn't conatins your number!" << std::endl;
    }
}
```

</p>
</details>

## Задача 4
Въведете двумерна матрица, намерете сумата на всеки ред от матрицата(Решете с функция).

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>
#include <time.h> // used for the seeding of the rand() function

const int ROWS = 10;
const int COLUMNS = 10;

void printMatrix(const int matrix[ROWS][COLUMNS])
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			std::cout << matrix[row][column] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
}

// This function is used to seed the marix with random values, 
// so that you won't need to enter values yourselves
void seedMatrix(int matrix[ROWS][COLUMNS])
{
	srand(time(0));

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			int randomNumber = rand() % 100;
			matrix[row][column] = (randomNumber > 70 ? randomNumber - 10 : randomNumber + 10); //The only reason for this is so that the matrix can look good and tidy in the console :>
		}
	}
}

void sumMatrixRows(const int matrix[ROWS][COLUMNS], int rowSums[ROWS])
{
	int sum = 0;

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			sum += matrix[row][column];
		}

		rowSums[row] = sum;
		sum = 0;
	}
}

void printRowSummary(const int rowSums[ROWS])
{
	for (int row = 0; row < ROWS; row++)
	{
		std::cout << "| Row[" << row + 1 << "] = " << rowSums[row] << " | " << std::endl;
	}

	std::cout << std::endl;
}

int main()
{
   int matrix[ROWS][COLUMNS];
   seedMatrix(matrix);
	printMatrix(matrix);

	int matrixRowSummary[ROWS];
	sumMatrixRows(matrix, matrixRowSummary);
	printRowSummary(matrixRowSummary);
}
```

</p>
</details>

## Задача 5
По въведена двумерна квадратна матрица намерете сумата на двата диагонала(Решете с функция).

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>
#include <time.h> // used for the seeding of the rand() function

const int ROWS = 10;
const int COLUMNS = 10;
const int DIAGONALS = 2;

void printMatrix(const int matrix[ROWS][COLUMNS])
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			std::cout << matrix[row][column] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
}

// This function is used to seed the marix with random values, 
// so that you won't need to enter values yourselves
void seedMatrix(int matrix[ROWS][COLUMNS])
{
	srand(time(0));

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			int randomNumber = rand() % 100;
			matrix[row][column] = (randomNumber > 70 ? randomNumber - 10 : randomNumber + 10); //The only reason for this is so that the matrix can look good and tidy in the console :>
		}
	}
}

void sumMatrixDiagonals(const int matrix[ROWS][COLUMNS], int diagonalSums[DIAGONALS])
{
	int diagonalOneSum = 0;
	int diagonalTwoSum = 0;

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			if (row == column) diagonalOneSum += matrix[row][column];
			else if (row + column == ROWS - 1) diagonalTwoSum += matrix[row][column];
		}
	}

	diagonalSums[0] = diagonalOneSum;
	diagonalSums[1] = diagonalTwoSum;
}

void printDiagonalSummary(const int diagonalSums[DIAGONALS])
{
	for (int diagonal = 0; diagonal < DIAGONALS; diagonal++)
	{
		std::cout << "| Diagonal[" << diagonal + 1 << "] = " << diagonalSums[diagonal] << " | " << std::endl;
	}

	std::cout << std::endl;
}

int main()
{
   int matrix[ROWS][COLUMNS];
   seedMatrix(matrix);
	printMatrix(matrix);

	int diagonalSummary[DIAGONALS];
	sumMatrixDiagonals(matrix, diagonalSummary);
	printDiagonalSummary(diagonalSummary);
}
```

</p>
</details>

## Задача 6
Да се напише функция, която извежда матрица, получена от въведената, като всеки нейн елемент е увеличен с 10.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>
#include <time.h> // used for the seeding of the rand() function

const int ROWS = 10;
const int COLUMNS = 10;

void printMatrix(const int matrix[ROWS][COLUMNS])
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			std::cout << matrix[row][column] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
}

// This function is used to seed the marix with random values, 
// so that you won't need to enter values yourselves
void seedMatrix(int matrix[ROWS][COLUMNS])
{
	srand(time(0));

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			int randomNumber = rand() % 100;
			matrix[row][column] = (randomNumber > 70 ? randomNumber - 10 : randomNumber + 10); //The only reason for this is so that the matrix can look good and tidy in the console :>
		}
	}
}

void printMatrixWithNewElements(const int matrix[ROWS][COLUMNS], const int addition)
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			std::cout << matrix[row][column] + addition << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
}

int main()
{
   int matrix[ROWS][COLUMNS];
   seedMatrix(matrix);
	printMatrix(matrix);

   int addition;
   std::cout << "How much do you want to add to each element: ";
   std::cin >> addition;

   printMatrixWithNewElements(matrix, addition);
}
```

</p>
</details>

## Задача 7
Да се напише функция, която намира и извежда минималния и максималния елемент в матрицата.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>
#include <time.h> // used for the seeding of the rand() function

const int ROWS = 10;
const int COLUMNS = 10;

void printMatrix(const int matrix[ROWS][COLUMNS])
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			std::cout << matrix[row][column] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
}

// This function is used to seed the marix with random values, 
// so that you won't need to enter values yourselves
void seedMatrix(int matrix[ROWS][COLUMNS])
{
	srand(time(0));

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			int randomNumber = rand() % 100;
			matrix[row][column] = (randomNumber > 70 ? randomNumber - 10 : randomNumber + 10); //The only reason for this is so that the matrix can look good and tidy in the console :>
		}
	}
}

int getMinOfMatrix(const int matrix[ROWS][COLUMNS])
{
	int min = matrix[0][0];

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			if (min > matrix[row][column]) 
            min = matrix[row][column];
		}
	}

	return min;
}

int getMaxOfMatrix(const int matrix[ROWS][COLUMNS])
{
	int max = matrix[0][0];

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			if (max < matrix[row][column]) 
            max = matrix[row][column];
		}
	}

	return max;
}

int main()
{
   int matrix[ROWS][COLUMNS];
   seedMatrix(matrix);
	printMatrix(matrix);

   std::cout << "Max element of matrix is: " << getMaxOfMatrix(matrix) << std::endl;
	std::cout << "Min element of matrix is: " << getMinOfMatrix(matrix) << std::endl;
}
```

</p>
</details>

## Задача 8 !!!!
Да се напише функция, която намира и извежда ***сумата*** от елементите на **квадратна матрица** на:

   * всеки ред
   * всеки стълб
   * главния диагонал
   * под главния диагонал
   * над главния диагонал
   * вторичния диагонал
   * под вторичния диагонал
   * над вторичния диагонал
   
<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>
#include <time.h> // used for the seeding of the rand() function

const int ROWS = 10;
const int COLUMNS = 10;
const int DIAGONALS = 2;

void printMatrix(const int matrix[ROWS][COLUMNS])
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			std::cout << matrix[row][column] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
}

// This function is used to seed the marix with random values, 
// so that you won't need to enter values yourselves
void seedMatrix(int matrix[ROWS][COLUMNS])
{
	srand(time(0));

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			int randomNumber = rand() % 100;
			matrix[row][column] = (randomNumber > 70 ? randomNumber - 10 : randomNumber + 10); //The only reason for this is so that the matrix can look good and tidy in the console :>
		}
	}
}

void printRowSummary(const int rowSums[ROWS])
{
	for (int row = 0; row < ROWS; row++)
	{
		std::cout << "| Row[" << row + 1 << "] = " << rowSums[row] << " | " << std::endl;
	}

	std::cout << std::endl;
}

void printColumnSummary(const int columnSums[ROWS])
{
	for (int row = 0; row < COLUMNS; row++)
	{
		std::cout << "| Column[" << row + 1 << "] = " << columnSums[row] << " | " << std::endl;
	}

	std::cout << std::endl;
}

void printDiagonalSummary(const int diagonalSums[DIAGONALS])
{
	for (int diagonal = 0; diagonal < DIAGONALS; diagonal++)
	{
		std::cout << "| Diagonal[" << diagonal + 1 << "] = " << diagonalSums[diagonal] << " | " << std::endl;
	}

	std::cout << std::endl;
}

void makeAndPrintAllOfTheFancyCalculations(const int matrix[ROWS][COLUMNS])
{
	int rowSummary[ROWS];
	int columnSummary[COLUMNS];
	int diagonalSummary[DIAGONALS];
	int underAndOverMainDiagonalSummary[DIAGONALS];
	int underAndOverSecondaryDiagonalSummary[DIAGONALS];

	int rowSum = 0;

	int mainDiagonalSum = 0;
	int secondaryDiagonalSum = 0;

	int underMainDiagonalSum = 0;
	int overMainDiagonalSum = 0;

	int underSecondaryDiagonalSum = 0;
	int overSecondaryDiagonalSum = 0;

	for (int i = 0; i < COLUMNS; i++)
	{
		columnSummary[i] = 0;
	}
	

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			rowSum += matrix[row][column];
			columnSummary[column] += matrix[row][column];

			if (row == column) mainDiagonalSum += matrix[row][column];
			else if (row + column == ROWS - 1) secondaryDiagonalSum += matrix[row][column];

			if (row > column) underMainDiagonalSum += matrix[row][column];
			else if (row < column) overMainDiagonalSum += matrix[row][column];

			if (column + row >= ROWS) underSecondaryDiagonalSum += matrix[row][column];
			else if (column + row < ROWS - 1) overSecondaryDiagonalSum += matrix[row][column];
		}

		rowSummary[row] = rowSum;
		rowSum = 0;
	}

	diagonalSummary[0] = mainDiagonalSum;
	diagonalSummary[1] = secondaryDiagonalSum;

	underAndOverMainDiagonalSummary[0] = underMainDiagonalSum;
	underAndOverMainDiagonalSummary[1] = overMainDiagonalSum;

	underAndOverSecondaryDiagonalSummary[0] = underSecondaryDiagonalSum;
	underAndOverSecondaryDiagonalSummary[1] = overSecondaryDiagonalSum;

	std::cout << "Results from the big function: " << std::endl;

	std::cout << "Row summary: " << std::endl;
	printRowSummary(rowSummary);

	std::cout << "Column summary: " << std::endl;
	printColumnSummary(columnSummary);

	std::cout << "Main and secondary diagonal: " << std::endl;
	printDiagonalSummary(diagonalSummary);

	std::cout << "Under and over main diagonal: " << std::endl;
	printDiagonalSummary(underAndOverMainDiagonalSummary);

	std::cout << "Under and over secondary diagonal: " << std::endl;
	printDiagonalSummary(underAndOverSecondaryDiagonalSummary);
}

int main()
{
   int matrix[ROWS][COLUMNS];
   seedMatrix(matrix);
	printMatrix(matrix);

   makeAndPrintAllOfTheFancyCalculations(matrix);
}
```

</p>
</details>

## Задача 9
Да се напише функция, която въвежда цяло число х, да се провери дали х е **елемент на матрицата**, и ако е - да се изведе позицията на елемнта в матрицата и елемента да се умножи по 10, а ако не е елемент на матрицата да се изведе подходящо съобщение.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>
#include <time.h> // used for the seeding of the rand() function

const int ROWS = 10;
const int COLUMNS = 10;

void printMatrix(const int matrix[ROWS][COLUMNS])
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			std::cout << matrix[row][column] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
}

// This function is used to seed the marix with random values, 
// so that you won't need to enter values yourselves
void seedMatrix(int matrix[ROWS][COLUMNS])
{
	srand(time(0));

	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			int randomNumber = rand() % 100;
			matrix[row][column] = (randomNumber > 70 ? randomNumber - 10 : randomNumber + 10); //The only reason for this is so that the matrix can look good and tidy in the console :>
		}
	}
}

bool isNumberInMatrix(const int matrix[ROWS][COLUMNS], const int number, int numberIndexes[2])
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			if (matrix[row][column] == number)
			{
				numberIndexes[0] = row;
				numberIndexes[1] = column;
				return true;
			}
		}
	}

	return false;
}

int main()
{
   int matrix[ROWS][COLUMNS];
   seedMatrix(matrix);
	printMatrix(matrix);

   int numberIndexes[2];
	int userNumber;

	std::cout << "Enter a number to be checked if it's in the matrix: ";
	std::cin >> userNumber;

	if (isNumberInMatrix(matrix, userNumber, numberIndexes))
	{
		int firstIndex = numberIndexes[0];
		int secondIndex = numberIndexes[1];

		std::cout << "The number is at position [" << firstIndex << "][" << secondIndex << "]" << std::endl;
		matrix[firstIndex][secondIndex] *= 10;

		printMatrix(matrix);
	}
	else
	{
		std::cout << "This number is not an element of the matrix!" << std::endl << std::endl;;
	}
}
```

</p>
</details>

## Задача 10
Да се напише функция, която въвежда едномерен масив от целочислени числа и да ги сортира във възходящ ред.

### За задачите за сортиране може да ползвате един от следните алгоритми за сортиране: Bubble sort, insertion sort, selection sort.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void enterArray(int numbers[], int size)
{
    std::cout << "Enter the array's elements: " << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << std::endl;
}

void sortArray(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (numbers[i] > numbers[j])
            {
                //numbers[i] ^= numbers[j];
                //numbers[j] ^= numbers[i];
                //numbers[i] ^= numbers[j];

                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}

void printArray(const int arr[], int size)
{
    for (int i = 1; i <= size; i++)
    {
        std::cout << arr[i - 1] << " ";
    }

    std::cout << std::endl;
}

int main()
{
    const int ARRAY_SIZE = 100;
    int numbers[ARRAY_SIZE];
    int userSize;

    std::cout << "How many numbers do you want to enter: ";

    do
    {
        std::cin >> userSize;
    } while (userSize < 1 || userSize > 100);

    enterArray(numbers, userSize);
    printArray(numbers, userSize);

    std::cout << std::endl;

    std::cout << "Sorting..." << std::endl;;
    sortArray(numbers, userSize);
    printArray(numbers, userSize);
}
```

</p>
</details>

# Homework

## Задача 11
Най-умната принцеса от всички - Клеопатра, е затворена в замък. За сърцето й се борят двама принца - Дагонет и Артур. Те са успели да влязат в замъка, но не знаят в коя стая се намира Клеопатра, а само дали стаята й е вдясно или вляво от тях. Трябва да прегледат всички стаи, движейки се в правилната посока към Клеопатра. Някои стаи са празни, но в други има различни придобивки (коли, апартаменти), които носят различен брой точки на принца, който пръв мине през стаята. Понеже Клеопатра е принцеса със силни морални принципи и устои тя ще даде сърцето си не на принца, който пръв стигне до нея, а на този, който е спечелил повече придобивки по пътя (този, който има повече точки, след като е стигнал до нея). В някоя от стаите обаче е възможно принцовете да срещнат безмилостния змей Велириан. Ако някой от принцовете влезе в неговата стая и го събуди, той ще се разгневи и ще изяде принца. В този момент другия принц печели Клеопатра независимо дали е стигнал до нея и колко точки има.

Напишете програма, която като вход приема броя на стаите в замъка n и последователност от ASCII символите {'D', 'С', 'А', 'V', '.', '~', '%', '#' }, където:

- 'С' е стаята, в което се намира Клеопатра
- 'D' е стаята, в което се намира Дагонет
- 'А' е стаята, в което се намира Артур
- 'V' е стаята, в което спи Велириан
- '.' е празна стая - 0т.
- '~' е стая с придобивка - кола - 18т.
- '%' е стая с придобивка - принцът почва да ходи на фитнес - 24т.
- '#' e стая с придобивка - апартамент - 35т.

Приемаме като дадено, че в замъка има точно по една стая, в която се намират тримата герои - Клеопатра, Дагонет и Артур. Също така двамата принца задължително трябва да се движат в посоката на Клеопатра, независимо какво има в стаите от другата им страна. Тоест, ако например от ляво на Артур е стаята с Велириан, но той знае, че Клеопатра е в дясно от него, той тръгва през стаите в дясно и няма да бъде изяден.

На стандартния изход напишете кой принц е спечелил сърцето на Клеопатра и с колко точки (в случай че я е спечелил с нормални придобивки) или дали другия принц е бил изяден. Ако и двамата принца имат еднакъв брой точки, то Клеопатра не може да избере и за това взима и двамата.

Примерен вход и изход на програмата:

```
16
А..#.С%...%.~..D -> Dagonet wins Cleopatra's heart with 66 points.
---------------
13
А..V..D..#.~С -> Dagonet wins Cleopatra's heart because Arthur was eaten by the dragon Valyrian.
---------------
17
С.#...~.А..%.~..D -> Arthur wins Cleopatra's heart with 53 points.
---------------
10
С..D.A..V. -> The castle is big enough for the three of them and so they all lived happily ever after!
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>
#include <cmath>

const int MAX_SIZE = 100;

int moveHero(int princess, int hero, char castle[]);

int main()
{
	int rooms = 0;
	std::cin >> rooms;

	char castle[MAX_SIZE];
	std::cin >> castle;

	int cleopatra = -1, arthur = -1, dagonet = -1;
	for (size_t i = 0; i < rooms; i++)
	{
		if (castle[i] == 'C')
		{
			cleopatra = i;
		}
		else if (castle[i] == 'A')
		{
			arthur = i;
		}
		else if (castle[i] == 'D')
		{
			dagonet = i;
		}
	}

	if (dagonet == -1 || arthur == -1 || cleopatra == -1)
	{
		std::cout << "Wrong castle!" << std::endl;
		return 0;
	}

	int dagonetPoints = 0, arthurPoints = 0;
	if (abs(cleopatra - arthur) < abs(cleopatra - dagonet))
	{
		arthurPoints = moveHero(cleopatra, arthur, castle);
		if (arthurPoints == -1)
		{
			std::cout << "Dagonet wins Cleopatra's heart because Arthur was eaten by the dragon Valyrian." << std::endl;
			return 0;
		}
		dagonetPoints = moveHero(cleopatra, dagonet, castle);
		if (dagonetPoints == -1)
		{
			std::cout << "Arthur wins Cleopatra's heart because Dagonet was eaten by the dragon Valyrian." << std::endl;
			return 0;
		}
	}
	else
	{
		dagonetPoints = moveHero(cleopatra, dagonet, castle);
		if (dagonetPoints == -1)
		{
			std::cout << "Arthur wins Cleopatra's heart because Dagonet was eaten by the dragon Valyrian." << std::endl;
			return 0;
		}
		arthurPoints = moveHero(cleopatra, arthur, castle);
		if (arthurPoints == -1)
		{
			std::cout << "Dagonet wins Cleopatra's heart because Arthur was eaten by the dragon Valyrian." << std::endl;
			return 0;
		}
	}

	if (arthurPoints > dagonetPoints)
	{
		std::cout << "Arthur wins Cleopatra's heart with " << arthurPoints << " points." << std::endl;
	}
	else if (dagonetPoints > arthurPoints)
	{
		std::cout << "Dagonet wins Cleopatra's heart with " << dagonetPoints << " points." << std::endl;
	}
	else if (dagonetPoints == arthurPoints)
	{
		std::cout << "The castle is big enough for the three of them and so they all lived happily ever after!" << std::endl;
	}

	return 0;
}

int moveHero(int princess, int hero, char castle[])
{
	int points = 0;
	int rooms = abs(princess - hero);
	if (princess < hero)
	{
		for (int i = hero; i > princess; i--)
		{
			switch (castle[i])
			{
			case 'V': points = -1; return points;
			case '~': points += 18; break;
			case '%': points += 24; break;
			case '#': points += 35; break;
			default: break;
			}
			castle[i] = '.';
		}
	}
	else
	{
		for (int i = hero; i < princess; i++)
		{
			switch (castle[i])
			{
			case 'V': points = -1; return points;
			case '~': points += 18; break;
			case '%': points += 24; break;
			case '#': points += 35; break;
			default: break;
			}
			castle[i] = '.';
		}
	}

	return points;
}
```

</p>
</details>

## Задача 12

Получаваме размерите на двумерен масив и самия масив, съдържащ '@', '&' и 'х'. Получаваме и поредица от направления, с които да навигираме из матрицата (1,0)-надясно, (0,1)-нагоре, (-1,0)-наляво, (0,-1)-надолу. Подаването на направления приключва с получаването на (0,0). Направленията се подават чрез конзолата. По подадените инструкции трябва да преброим по колко пъти е срещнат всеки символ.

**Бонус:** Проверете дали броят срещания образува геометрична прогресия. Ако образува, изведете "geometry progression". Ако не образува геометрична прогресия, но едно от числата е просто, изведете на стандартния изход "You have at least 1 prime number."

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

const int MAX_SIZE = 100;

int main()
{
	int rows, cols;
	char field[MAX_SIZE][MAX_SIZE];
	std::cin >> rows >> cols;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cin >> field[i][j];
		}
	}

	short xDir, yDir;
	short currX = 0, currY = 0;
	int countAt = 0, countX = 0, countAnd = 0;

	do
	{
		switch (field[currX][currY])
		{
		case 'X': countX++; break;
		case '&': countAnd++; break;
		case '@': countAt++; break;
		default: std::cout << "Invalid input" << std::endl;
			break;
		}

		std::cin >> xDir >> yDir; //(1,0)-right, (0,1)-up, (-1,0)-left, (0,-1)-down
		if ((xDir == 1) && (yDir == 0) && currY < cols - 1)
		{
			currY++;
		}
		else if ((xDir == 0) && (yDir == 1) && currX > 0)
		{
			currX--;
		}
		else if ((xDir == -1) && (yDir == 0) && currY > 0)
		{
			currY--;
		}
		else if ((xDir == 0) && (yDir == -1) && currX < rows - 1)
		{
			currX++;
		}
		else
		{
			std::cout << "Wrong directions. Try again!" << std::endl;
		}
	} while ((xDir != 0) || (yDir != 0));

	std::cout << "Count of X: " << countX << std::endl;
	std::cout << "Count of &: " << countAnd << std::endl;
	std::cout << "Count of @: " << countAt << std::endl;

	return 0;
}
```

</p>
</details>

## Задача 13

### Горски терен

Горски терен е представен с помощта на двумерен масив с m x n области (елементи). Елементите на двумерния масив са символи, които имат следното значение:

- R – река,
- S – скала,
- цифри от 1 до 4, които означават гъстота на гората

Теренът се променя на всеки 10 години. Реката и скалите остават постоянни, докато гъстотата на горските площи се променя по следните правила:

- 1 преминава в 2
- 2 преминава в 3
- 3 преминава в 4
- 4 преминава в 3, ако в съседство има поне 3 области с гъстота 4.

***Съседни на дадена област (елемент) от масива на тези области, индексите, на които се
различават само с 1, тоест всяка област има най-много 8 съседа.***

ForestTracker
По даден двумерен масив от символи forest, представляващ горски терен, и цяло число years намира вида на терена след years години. Aко years < 0, методът трябва да върне терена без промяна.

Примери:

Вход:

```
m:5
n:3
R R S 1 4
S 2 4 4 2
1 3 S 3 4

years: 10
```

Изход:

```
R R S 2 4
S 3 4 3 3
2 4 S 4 4
```

Вход:

```
m:5
n:3
S 1 S 1 R
S 2 4 4 4
1 3 S 3 4

years: 5
```

Изход:

```
S 1 S 1 R
S 2 4 4 4
1 3 S 3 4
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

const int ARRAY_SIZE = 50;

void enterField(char arr[ARRAY_SIZE][ARRAY_SIZE], const int rows, const int columns);
void printField(const char arr[ARRAY_SIZE][ARRAY_SIZE], const int rows, const int columns);
void modifyField(char arr[ARRAY_SIZE][ARRAY_SIZE], const int rows, const int columns, int years);


int main()
{
	char field[ARRAY_SIZE][ARRAY_SIZE];
	int rowWidth, rowHeight, years;

	std::cin >> rowHeight >> rowWidth >> years;

	enterField(field, rowWidth, rowHeight);

	std::cout << std::endl;

	printField(field, rowWidth, rowHeight);

	modifyField(field, rowWidth, rowHeight, years);
	printField(field, rowWidth, rowHeight);
}

void enterField(char arr[ARRAY_SIZE][ARRAY_SIZE], const int rows, const int columns)
{
	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			std::cin >> arr[row][column];
		}
	}
}

void printField(const char arr[ARRAY_SIZE][ARRAY_SIZE], const int rows, const int columns)
{
	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			std::cout << arr[row][column] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
}

void modifyField(char arr[ARRAY_SIZE][ARRAY_SIZE], const int rows, const int columns, int years)
{
	int amountOfFours = 0;

	while (years >= 10)
	{
		for (int row = 0; row < rows; row++)
		{
			for (int column = 0; column < columns; column++)
			{
				if (arr[row][column] >= '1' && arr[row][column] <= '3')
				{
					arr[row][column]++;
				}	
				else if (arr[row][column] == '4')
				{
					if (row == 0)
					{
						if (column == 0)
						{
							if (arr[row][column + 1] == '4') amountOfFours++;
							if (arr[row + 1][column] == '4') amountOfFours++;
							if (arr[row + 1][column + 1] == '4') amountOfFours++;
						}
						else if (column == columns - 1)
						{
							if (arr[row][column - 1] == '4') amountOfFours++;
							if (arr[row + 1][column] == '4') amountOfFours++;
							if (arr[row + 1][column - 1] == '4') amountOfFours++;
						}
						else
						{
							if (arr[row][column - 1] == '4') amountOfFours++;
							if (arr[row][column + 1] == '4') amountOfFours++;
							if (arr[row + 1][column - 1] == '4') amountOfFours++;
							if (arr[row + 1][column] == '4') amountOfFours++;
							if (arr[row + 1][column + 1] == '4') amountOfFours++;
						}
					}
					else if (row == rows - 1)
					{
						if (column == 0)
						{
							if (arr[row][column + 1] == '4') amountOfFours++;
							if (arr[row - 1][column] == '4') amountOfFours++;
							if (arr[row - 1][column + 1] == '4') amountOfFours++;
						}
						else if (column == columns - 1)
						{
							if (arr[row][column - 1] == '4') amountOfFours++;
							if (arr[row - 1][column] == '4') amountOfFours++;
							if (arr[row - 1][column - 1] == '4') amountOfFours++;
						}
						else
						{
							if (arr[row][column - 1] == '4') amountOfFours++;
							if (arr[row][column + 1] == '4') amountOfFours++;
							if (arr[row - 1][column - 1] == '4') amountOfFours++;
							if (arr[row - 1][column] == '4') amountOfFours++;
							if (arr[row - 1][column + 1] == '4') amountOfFours++;
						}
					}
					else
					{
						if (arr[row][column + 1] == '4') amountOfFours++;
						if (arr[row][column - 1] == '4') amountOfFours++;
						if (arr[row - 1][column] == '4') amountOfFours++;
						if (arr[row - 1][column + 1] == '4') amountOfFours++;
						if (arr[row - 1][column - 1] == '4') amountOfFours++;
						if (arr[row + 1][column] == '4') amountOfFours++;
						if (arr[row + 1][column + 1] == '4') amountOfFours++;
						if (arr[row + 1][column - 1] == '4') amountOfFours++;
					}
				}

				if (amountOfFours >= 3) arr[row][column]--;

				amountOfFours = 0;
			}
		}

		years -= 10;
	}
}
```

</p>
</details>