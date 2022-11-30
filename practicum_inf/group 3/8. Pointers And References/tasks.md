# Pointers and References Tasks

## Задача 0
Напишете функция, която приема две целочислени числа и разменя техните стойности.

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

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int x, y;

	std::cin >> x >> y;

	std::cout << "Before swap: ";
	std::cout << "x = " << x << ", y = " << y << "\n";

	swap(x, y);
	//swap(&x, &y);

	std::cout << "After swap: ";
	std::cout << "x = " << x << ", y = " << y << "\n";
}
```

</p>
</details>

## Задача 1
Напишете функция, която по подаден масив и елемент от същия тип като елементите на масива намира първото му срещане в масива и връща указател към него. 

> Ако елементът не е намерен да върне null pointer.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void enterArray(int* arr, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		std::cin >> *(arr + i);
	}
}

int* getElementPointer(int* arr, int arrSize, int element)
{
	for (int i = 0; i < arrSize; i++)
	{
		if (*(arr + i) == element)
			return arr + i;
	}

	return nullptr;
}

int main()
{
	const int ARRAY_SIZE = 100;

	int arr[ARRAY_SIZE];
	int arrSize;

	std::cout << "Enter array size: ";
	std::cin >> arrSize;

	std::cout << "Enter array: ";
	enterArray(arr, arrSize);

	int number;
	std::cout << "Which number are you searching for: ";
	std::cin >> number;

	int* ptr = getElementPointer(arr, arrSize, number);

	if (ptr != nullptr)
		std::cout << "The address of this number is: " << ptr;
	else
		std::cout << "No such element in array!";
}
```

</p>
</details>

## Задача 2
Имате речен док (пристанище), на който са стоварени N [10..109] брой пратки, не непременно с равни тегла.
Няма пратка с маса, по-голяма от максималния полезен обем на корабчето M [100..500] тона.
Корабчето се товари като се спазва редът на пристигане на пратките.
Да се състави програма (C++), чрез която се въвеждат предварително теглата на N пратки. Тези тегла са стойности на последователни елементи от едномерен масив.
Програмата да извежда на кой пореден курс с колко тона е натоварен корабчето - какви са сумите от последователните елементи.

```
Пример: M = 160; 
        N = 15; 
        Shipments = { 31 12 17 33 45 34 17 19 31 42 5 9 23 16 10 } 
Изход: 138 157
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void enterShipments(int *arr, int size)
{
	std::cout << "Enter shipments: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void printShipCourses(int boatCapacity, int *shipments, int shipmentAmount)
{
	int shipmentWeight = 0;
	for (int i = 0; i < shipmentAmount; i++)
	{
		shipmentWeight += *(shipments + i);

		if (shipmentWeight > boatCapacity)
		{
			shipmentWeight -= *(shipments + i);
			std::cout << shipmentWeight << " ";
			shipmentWeight = *(shipments + i);
		}
	}
}

int main()
{
	const int MAX_SHIPMENT_AMOUNT = 109;
	const int MIN_SHIPMENT_AMOUNT = 10;
	const int MAX_SHIP_CAPACITY = 500;
	const int MIN_SHIP_CAPACITY = 100;

	int shipments[MAX_SHIPMENT_AMOUNT];
	int shipmentAmount;
	int boatCapacity;

	do
	{
		std::cout << "Please enter the boat's capacity["
			<< MIN_SHIP_CAPACITY << ".."
			<< MAX_SHIP_CAPACITY << "] = ";
		std::cin >> boatCapacity;
	} while (boatCapacity < MIN_SHIP_CAPACITY || boatCapacity > MAX_SHIP_CAPACITY);

	do
	{
		std::cout << "Please enter the amount of shipments ["
			<< MIN_SHIPMENT_AMOUNT << ".."
			<< MAX_SHIPMENT_AMOUNT << "] = ";
		std::cin >> shipmentAmount;
	} while (shipmentAmount < MIN_SHIPMENT_AMOUNT || shipmentAmount > MAX_SHIPMENT_AMOUNT);

	enterShipments(shipments, shipmentAmount);
	printShipCourses(boatCapacity, shipments, shipmentAmount);
}
```

</p>
</details>

## Задача 3
Имате две редици съдържащи естествени числа. Стойностите на 1-вата редица са въведени предварително, а във втората се въвеждат от клавиатурата.
Да се състави програма, чрез която се проверява дали всички числа от първата редица са числа и от втората редица.

```
Пример: 
1-ва редица: 11, 72, 13, 14, 15 
2-ра редица: 72, 15, 11, 13, 14, 33.

Изход: числата от 1-та редица са числа и от втората редица.
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void fillArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

bool isSubSet(int* subSet, int subSize, int* set, int setSize)
{
	if (subSize > setSize)
		return false;

	bool inlcludesElement = false;

	for (int i = 0; i < subSize; i++)
	{
		for (int j = 0; j < setSize; j++)
		{
			if (subSet[i] == set[j])
			{
				inlcludesElement = true;
				break;
			}
		}

		if (!inlcludesElement)
			return false;
	}

	return true;
}

int main()
{
	int subSet[] = { 11, 72, 13, 14, 15 };
	unsigned subSetSize = sizeof(subSet) / sizeof(int);

	int userSet[100];
	unsigned setSize;

	std::cout << "Enter set size: ";
	std::cin >> setSize;

	fillArray(userSet, setSize);

	bool isInSet = isSubSet(subSet, subSetSize, userSet, setSize);

	std::cout << std::boolalpha << "Is it a subset of your set: " << isInSet << std::endl;
}
```

</p>
</details>

## Задача 4
Да се напише булева функция bool duplicates (long *ponters[]), която получава като параметър масив pointers от указатели към целочислени променливи. Функцията да проверява дали поне две от съответните променливи имат еднакви стойности.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

bool duplicates(long* pointers[], int size)
{
    while (size > 1)
    {
        for (int i = 1; i < size; i++)
        {
            if (**pointers == **(pointers + i)) 
                return true;

            // *(*(pointers)) -> *(&a) -> a
            // *(*(pointers + 1)) -> *(&b) -> b
            // *(*(pointers + 2)) -> *(&c) -> c
            // *(*(pointers + 3)) -> *(&d) -> d
        }

        pointers = pointers + 1; //pointers++;
        size--;
    }

    return false;
}

int main()
{
    long a, b, c, d;
    a = 1; b = 2; c = 3; d = 2;

    long* pointers[]{ &a, &b, &c, &d };
    int size = 4;

    bool hasDuplicates = duplicates(pointers, size);

    std::cout << std::boolalpha << hasDuplicates;
}
```

</p>
</details>

## Задача 5
Напишете функция, която приема два масива и един указател, който пренасочете да сочи масива, чиято сума на елементите е минимална.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int sumArray(int arr[], unsigned size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum;
}

void pointToMinSum(int arr1[], unsigned arr1Size, int arr2[], unsigned arr2Size, int*& minArr)
{
	int arr1Sum = sumArray(arr1, arr1Size);
	int arr2Sum = sumArray(arr2, arr2Size);

	minArr = arr1Sum < arr2Sum ? arr1 : arr2;
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr1Size = sizeof(arr1) / sizeof(int);

	int arr2[] = { 6, 7, 8, 9 };
	int arr2Size = sizeof(arr2) / sizeof(int);

	int* minArr;

	pointToMinSum(arr1, arr1Size, arr2, arr2Size, minArr);

	std::cout << "The first element of the min sum array is: " << *minArr << std::endl;
}
```

</p>
</details>

## Задача 6
Напишете функция fillMatrix, която приема матрица и размер в интервала [1, 100]. Функцията трябва да запълва матрицата по следня начин: 
- Над вторичния диагонал стоят само 0-ли;
- На вторичния диагонал стоят само 1-ци;
- Под вторичния диагонал стоят само 2-ки;

> Подайте матрицата чрез поинтъри и използвайте аритметика на указатели

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

const int MATRIX_SIZE = 20;

void fillMatrix(int (*matrix)[MATRIX_SIZE], int size) // same as fillMatrix(int matrix[][MATRIX_SIZE], int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int column = 0; column < size; column++)
		{
			if (row + column < size - 1)
				(*(matrix + row))[column] = 0;

			// Alternative ways of doing it:
			//		   matrix[row][column] = 0;
			//   (*(matrix + row))[column] = 0;
			// *(*(matrix + row) + column) = 0;

			if (row + column == size - 1)
				(*(matrix + row))[column] = 1;

			// Alternative ways of doing it:
			//	       matrix[row][column] = 1;
			//	 (*(matrix + row))[column] = 1;
			// *(*(matrix + row) + column) = 1;

			if (row + column >= size)
				(*(matrix + row))[column] = 2;

			// Alternative ways of doing it:
			//	       matrix[row][column] = 2;
			//	 (*(matrix + row))[column] = 2;
			// *(*(matrix + row) + column) = 2;

		}
	}
}

void printMatrix(int(*matrix)[MATRIX_SIZE], int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int column = 0; column < size; column++)
		{
			std::cout << (*(matrix + row))[column] << " ";
			//*(*(matrix + row) + column)
		}

		std::cout << std::endl;
	}
}

int main()
{
	int matrix[MATRIX_SIZE][MATRIX_SIZE];

	fillMatrix(matrix, MATRIX_SIZE);
	printMatrix(matrix, MATRIX_SIZE);
}
```

</p>
</details>

## Задача 7
Да се напише функция getFirstUniqueChar(), която приема символен низ и връща
първия елемент, който не се повтаря. Ако не съществува, функцията извежда 0.

```
Примерен вход: pepsii
Примерен изход: e

Примерен вход: Pepsii
Примерен изход: P
``` 

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

char getUniqueChar(char* string)
{
	char currentChar;

	while (*string != '\0')
	{
		currentChar = *string;
		for (int i = 1; string[i] != '\0'; i++)
		{
			if (currentChar == string[i]) 
			{
				currentChar = '\0';
				break;
			}
		}

		if (currentChar != '\0') 
            return currentChar;

		string++;
	}

	return '\0';
}

int main()
{
	char string[100];
	std::cin.get(string, 100);

	std::cout << getUniqueChar(string);
}
```

</p>
</details>

## Задача 8
Да се напише функция, която приема като аргументи указател към масив и 
размера на масива и го обръща. 

```
Например: 
а = {1, 2, 3, 4, 5} → reverse(a, 5) → a : 5, 4, 3, 2, 1
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void fillArray(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void printArray(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

void swap(double& x, double& y)
{
	double temp = x;
	x = y;
	y = temp;
}

void reverseArray(double* arr, int size)
{
	for (int i = 0; i <= size / 2; i++)
	{
		swap(arr[i], arr[size - i - 1]);
	}
}

int main()
{
	double arr[100];
	int size;

	std::cin >> size;
	fillArray(arr, size);

	reverseArray(arr, size);

	std::cout << "Reversed array: \n";
	printArray(arr, size);
}
```

</p>
</details>