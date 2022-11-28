# Functions Tasks

## Задача 0
Напишете функция, която намира n-тия член на редицата на Фибоначи

```
Примерен вход: 6
Примерен изход: 8 
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
unsigned fib(unsigned n)
{
	if (n == 0)
		return 0;

	int fib0 = 1;
	int fib1 = 1;
	int temp;

	for (int i = 2; i < n; i++)
	{
		temp = fib1;
		fib1 += fib0;
		fib0 = temp;
	}

	return fib1;
}
```

</p>
</details>

## Задача 1
Напишете функция, която проверява дали 3 числа образуват триъгълник, и две функции, които изчислява периметъра и лицето му(по Херонова формула).
От клавиатурата се въвеждат n поредици от тройки числа и след всяка тройка се отбелязва дали триъгълникът съществува, периметъра и лицето му 

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>
#include <cmath>

bool doesTriangleExist(unsigned a, unsigned b, unsigned c)
{
	return (a < b + c && b < a + c && c < a + b);
}

unsigned getPerimeter(unsigned a, unsigned b, unsigned c)
{
	return a + b + c;
}

double getArea(unsigned a, unsigned b, unsigned c)
{
	double halfP = getPerimeter(a, b, c) / 2.0;
	double area = std::sqrt(halfP * (halfP - a) * (halfP - b) * (halfP - c));

	return area;
}

int main()
{
    int sideA, sideB, sideC;

	std::cin >> sideA >> sideB >> sideC;

    std::cout << std::boolalpha << doesTriangleExist(sideA, sideB, sideC)
            << " " << getPerimeter(sideA, sideB, sideC)
            << " " << getArea(sideA, sideB, sideC) 
			<< std::endl;
}
```

</p>
</details>

## Задача 2
Напишете функция, която намира n!

<details><summary><b>Solution</b></summary> 
<p>

```cpp
unsigned factorial(unsigned n)
{
	unsigned result = 1;

	while (n > 0)
	{
		result *= n;
		n--;
	}

	return result;
}
```

</p>
</details>

## Задача 3
Напишете функция, която получава целочислен
параметър n и база на бройна система 2 ≤ k ≤ 5. Функцията да отпечатва
на екрана представянето на числото n в системата с база k.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
unsigned toBase(unsigned num, unsigned base)
{
	if (base < 2 || base > 5)
		return 0;

	int step = 1;
	int baseNum = 0;
	int lastDigit;

	while (num > 0)
	{
		lastDigit = num % base;
		baseNum += lastDigit * step;

		step *= 10;
		num /= base;
	}

	return baseNum;
}
```

</p>
</details>

## Задача 4
Да се напише булева функция, която по въведени dd, mm и yyyy проверява дали дата, зададена в следния формат: dd mm yyyy, е коректна дата от грегорианския календар.

```
Примерен вход: 29 2 2012
Примерен изход: true 
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
bool isLeapYear(unsigned year)
{
    return ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0);
}

int getMonthLength(unsigned month, unsigned year)
{
    switch (month)
    {
    case 1: case 3: case 5:
    case 7: case 8: case 10:
    case 12:
        return 31;
    case 4: case 6: case 9:
    case 11:
        return 30;
    case 2:
        if (isLeapYear(year)) return 29;
        return 28;
    default:
        return 0;
        break;
    }
}

bool isDateValid(unsigned day, unsigned month, unsigned year)
{
    return (day >= 1 && day <= getMonthLength(month, year));
}
```

</p>
</details>

## Задача 5
Едно положително цяло число е съвършено, ако е равно на сумата от своите делители (без самото число). Например, 6 е съвършено, защото 6 = 1+2+3; числото 1 не е съвършено. Да се напише функция, която намира и отпечатва на екрана всички съвършени числа, ненадминаващи дадено положително цяло число в параметър n.

```
Примерен вход: 50
Примерен изход: 6 28
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

bool isPerfect(unsigned n)
{
	int sum = 0;

	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			sum += i;
	}

	return sum == n;
}

void printPerfectNums(unsigned num)
{
	for (int i = 1; i < num; i++)
	{
		if (isPerfect(i))
			std::cout << i << std::endl;
	}
}
```

</p>
</details>

## Задача 6
Напишете функция, която по въведено n проверява дали n е палиндром.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
bool isPalindorm(unsigned n)
{
	unsigned nCopy = n;
	unsigned reversedN = 0;

	while (nCopy > 0)
	{
		reversedN = reversedN * 10 + (nCopy % 10);
		nCopy /= 10;
	}

	return n == reversedN;
}
```

</p>
</details>

## Задача 7
Да се напише функция, която по въведено n извежда n в каноничен вид.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void printCanonical(unsigned n)
{
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			std::cout << i << " ";

			n /= i;
			i--;
		}
	}
}
```

</p>
</details>

## Задача 8
Напишете функция, която по дадено въведено от потребителя естествено 
число проверява дали всяка негова цифра е равна на сумата на двете цифри, намиращи се 
след нея.

```
Примерен вход: 532110
Примерен изход: Yes      // Пояснение: (0+1 = 1, 1+1 = 2, 1+2 = 3, 2+3 = 5 - редица на Фибоначи)

Примерен вход: 7431
Примерен изход Yes       // Пояснение: (1+3 = 4, 3 + 4 = 7)

Примерен вход: 11235
Примерен изход: No

Примерен вход: 98065
Примерен изход: No
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

bool isConditionTrue(int number)
{
	if (number < 100) return false;

	int digitOne = number % 10;
	number /= 10;

	int digitTwo = number % 10;
	number /= 10;

	while (number > 0)
	{
		if (digitOne + digitTwo != number % 10) return false;

		digitOne = digitTwo;
		digitTwo = number % 10;
		number /= 10;
	}

	return true;
}

int main()
{
	unsigned userValue;
	std::cin >> userValue;

	std::cout << (isConditionTrue(userValue) ? "Yes" : "No");
}
```

</p>
</details>

## Задача 9*
Да се изведат първите 20 естествени числа, двоичния запис на които 
съдържа равен брой 0 и 1.(Използвайте функции)

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

unsigned getBinary(unsigned number)
{
    unsigned baseNumber = 0;
    unsigned digitPos = 1;
    unsigned base = 2;

    while (number > 0)
    {
        baseNumber += (digitPos * (number % base));
        digitPos *= 10;
        number /= base;
    }

    return baseNumber;
}

bool hasEqualOnesAndZeros(unsigned binary)
{
    unsigned zeroCount = 0;
    unsigned oneCount = 0;

    while (binary > 0)
    {
        binary % 10 == 0 ? zeroCount++ : oneCount++;
        binary /= 10;
    }

    return zeroCount == oneCount;
}

int main()
{
    unsigned iterator = 2;
    unsigned primes = 0;
    
    unsigned binaryNum;
    
    while (primes != 20)
    {
        binaryNum = getBinary(iterator);

        if (hasEqualOnesAndZeros(binaryNum))
        {
            std::cout << iterator << " ";
            primes++;
        }

        iterator++;
    }

    std::cout << std::endl;
}
```

</p>
</details>

## Задача 10*
Да се провери дали естественото ч-ло А се дели на простите делители 
на B, което е със същите цифри на А, но записани в обратен ред.(Използвайте функции)

<details><summary><b>Solution</b></summary> 
<p>

```cpp
int reverseNumber(int number)
{
	int reversedNumber = 0;
	while (number > 0)
	{
		reversedNumber += number % 10;

		if (number / 10 > 0) reversedNumber *= 10;

		number /= 10;
	}

	return reversedNumber;
}

bool isPrimeDivisor(int div) 
{
	for (int j = 2; j <= div / 2; j++) 
	{
		if (div % j == 0) {
			return false;
		}
	}

	return true;
}

bool canDivideByReversed(int number)
{
	int reversedNumber = reverseNumber(number);

	for (int i = 2; i <= reversedNumber; i++)
	{
		bool primeDivisor = isPrimeDivisor(i);

		if (primeDivisor && number % i != 0)
			return false;
	}

	return true;
}
```

</p>
</details>