# Dynamic Memory Tasks

## Задача 0
Да се напише функция, която приема указател към първия елемент на масив и дължината му. Функцията да създава нов масив, който присвоява половината от елементите на подадения. Функцията да връща новия масив, като размера на масива да бъде точно половината на подадения.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int* buildHalfArray(int* arr, int size)
{
	int halfSize = size / 2;

	int* newArr = new int[halfSize];

	for (int i = 0; i < halfSize; i++)
	{
		newArr[i] = arr[i];
	}
	
	return newArr;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int size = sizeof(arr) / sizeof(int);

	int* halfArr = buildHalfArray(arr, size);

	for (int i = 0; i < size / 2; i++)
	{
		std::cout << halfArr[i] << " ";
	}

	delete[] halfArr;
}
```

</p>
</details>

## Задача 1
Напишете функция, която приема масив и връща друг масив, който е копие на подадения.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int* copyArr(int* arr, int size)
{
	int* newArr = new int[size];

	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	
	return newArr;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int size = sizeof(arr) / sizeof(int);

	int* copy = copyArr(arr, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << copy[i] << " ";
	}

	delete[] copy;
}
```

</p>
</details>

## Задача 2
В една школа има определен брой учители. Всеки един от тях иска да нанесе определен брой оценки. Дайте на учителите места, където да си нанесат оценките.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int* enterGrades(int** grades, const int& teachers);
void printGrades(int** grades, const int& teachers, const int* gradesLength);

int main()
{
    int teachers;

    std::cout << "How many teachers are going to enter grades: ";
    std::cin >> teachers;

    int** grades = new int*[teachers];

    int* enteredGrades = enterGrades(grades, teachers);

    printGrades(grades, teachers, enteredGrades);

    delete[] enteredGrades;

    for (int i = 0; i < teachers; i++)
    {
        delete[] grades[i];
    }

    delete[] grades;
}

int* enterGrades(int** grades, const int& teachers)
{
    int gradesToEnter;
    int enteredGrade;

    int *gradesLength = new int[teachers];

    for (int teacher = 0; teacher < teachers; teacher++)
    {
        std::cout << "Teacher " << teacher + 1 << ", how many grades do you want to enter: ";
        std::cin >> gradesToEnter;

        int* enteredGrades = new int[gradesToEnter];

        for (int grade = 0; grade < gradesToEnter; grade++)
        {
            std::cin >> enteredGrade;
            enteredGrades[grade] = enteredGrade;
        }

        grades[teacher] = enteredGrades;
        gradesLength[teacher] = gradesToEnter;
    }

    return gradesLength;
}

void printGrades(int** grades, const int& teachers, const int* gradesLength)
{
    for (int teacher = 0; teacher < teachers; teacher++)
    {
        std::cout << "Teacher " << teacher + 1 << " grades: ";
        for (int grade = 0; grade < gradesLength[teacher]; grade++)
        {
            std::cout << grades[teacher][grade] << " ";
        }

        std::cout << std::endl;
    }
}
```

</p>
</details>

## Задача 3
Напишете функция, която приема масив и нов размер на масива. Функцията да променя размера на новия масив като запазва данните, вече записани в масива.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void resize(int*& arr, int oldSize, int newSize)
{
	int* newArr = new int[newSize];

	for (int i = 0; i < oldSize && i < newSize; i++)
	{
		newArr[i] = arr[i];
	}

	delete[] arr;
	arr = newArr;	
}

int main()
{
	int size = 8;
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = i + 1;
	}

	int newSize = 10;

	resize(arr, size, newSize);
	arr[8] = 9;
	arr[9] = 10;

	for (int i = 0; i < newSize; i++)
	{
		std::cout << arr[i] << " ";
	}

	delete[] arr;
}
```

</p>
</details>

## Задача 4
Да се реализира функция, която приема число и го конвертира в символен низ. Функцията връща указател към първия елемент на масива.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int getNumLength(unsigned long long num)
{
	int len = 0;

	while (num > 0)
	{
		num /= 10;
		len++;
	}

	return len;
}

char* toString(unsigned long long num)
{
	int size = getNumLength(num);

	char* numStr = new char[size + 1];

	for (int i = size - 1; i >= 0; --i)
	{
		numStr[i] = num % 10 + '0';
		num /= 10;
	}

	numStr[size] = '\0';

	return numStr;
}

int main()
{
	unsigned long long veryLongNum = 1828956366183;
	char* numStr = toString(veryLongNum);

	for (int i = 0; numStr[i] != '\0'; i++)
	{
		std::cout << numStr[i] << ", ";
	}

	std::cout << "\n\n" << numStr;

	delete[] numStr;
}
```

</p>
</details>

## Задача 5
Напишете функция, която по даден низ определя броя символи в него без терминиращата нула. 
> Без използване на динамична памет

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int strLen(const char* str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return len;
}

int main()
{
	const char* randomStr = "Hello There!";

	std::cout << strLen(randomStr);
}
```

</p>
</details>

## Задача 6
Напишете функция, която приема два низа и копира втория във първия.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int getStrLen(const char* str);
void copyStr(char* &firstStr, const char* secondStr);

int main()
{
	char* str = new char[] { "Hello" };
	char str1[] = "heiio";
	
	copyStr(str, str1);

	std::cout << str;

	delete[] str;
}

void copyStr(char* &firstStr, const char* secondStr)
{
	delete[] firstStr;

	int strLen = getStrLen(secondStr);

	firstStr = new char[strLen + 1];

	for (int i = 0; i < strLen; i++)
	{
		firstStr[i] = secondStr[i];
	}

	firstStr[strLen] = '\0';
}

int getStrLen(const char* str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return length;
}
```

</p>
</details>

## Задача 7
Напишете функция, която приема низ и връща нов(динамично заделен низ), който е копие на подадения.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

char* getCopy(const char* str);
int getStrLen(const char* str);

int main()
{
	char* string = getCopy("This is the original, baby!");

	std::cout << string;

	delete[] string;
}

char* getCopy(const char* str)
{
	int strLen = getStrLen(str);

	char* newStr = new char[strLen + 1];

	for (int i = 0; i < strLen; i++)
	{
		newStr[i] = str[i];
	}

	newStr[strLen] = '\0';

	return newStr;
}

int getStrLen(const char* str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return length;
}
```

</p>
</details>

## Задача 8
Напишете функция, която приема два низа и връща нов, който "залепя" съдържанието на първия за съдържанието на втория.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void appendString(char*& firstString, const char* secondString);
int getStrLen(const char* str);

int main()
{
	char* str = new char[] { "Hello" };
	char str1[] = "heiio";

	appendString(str, str1);

	std::cout << str;

	delete[] str;
}

void appendString(char*& firstString, const char* secondString)
{
	int firstStringLen = getStrLen(firstString);
	int secondStringLen = getStrLen(secondString);

	char* newString = new char[(firstStringLen + secondStringLen) + 1];

	for (int i = 0; i < firstStringLen; i++)
	{
		newString[i] = firstString[i];
	}

	for (int i = 0; i < secondStringLen; i++)
	{
		newString[firstStringLen + i] = secondString[i];
	}

	newString[(firstStringLen + secondStringLen) - 1];

	delete[] firstString;

	firstString = new char[firstStringLen + secondStringLen + 1];

	for (int i = 0; i < getStrLen(newString) - 1; i++)
	{
		firstString[i] = newString[i];
	}

	firstString[firstStringLen + secondStringLen] = '\0';
	delete[] newString;
}

int getStrLen(const char* str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return length;
}
```

</p>
</details>

## Задача 9
Напишете функция, която сравнява лексикографски два низа. Ако първия е преди втория, функцията връща -1. Ако втория е преди първия - връща 1. Ако низовете са еднакви - връща 0.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int compareStrings(const char* firstStr, const char* secondStr);
int getStrLen(const char* str);
int getMin(const int& x, const int& y);

int main()
{
    std::cout << compareStrings("This is a very nice text!", "This is a very nice text!");
}

int compareStrings(const char* firstStr, const char* secondStr)
{
	int firstStrLen = getStrLen(firstStr);
	int secondStrLen = getStrLen(firstStr);

	int minLen = getMin(firstStrLen, secondStrLen);

	for (int i = 0; i < minLen; i++)
	{
		if (firstStr[i] == secondStr[i])
			continue;

		if (firstStr[i] > secondStr[i])
			return 1;
		else
			return -1;
	}

	return 0;
}

int getStrLen(const char* str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return length;
}

int getMin(const int& x, const int& y)
{
	if (x >= y)
		return y;

	return x;
}
```

</p>
</details>