# Introduction Tasks

## Task 0

Напишете програма, която извежда в конзолата следното съобщение: `"Shte si mina OOP-to hihi!"`.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	std::cout << "Shte si mina OOP-to hihi!";
}
```

</p>
</details>

## Task 1

Въведете 2 различни целочислени числа от конзолата. 
Запишете тяхната сума, разлика, произведение, остатък от деление и целочислено деление в отделни променливи и разпечатайте тези резултати в конзолата. Опитайте същото с числа с плаваща запетая.

```
Примерен вход: 10 5
Примерен изход:
Sum: 15
Difference: 5
Product: 50
Division: 2
Reminder: 0
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	int firstNum, secondNum;

	std::cout << "Please enter two numbers: ";
	std::cin >> firstNum >> secondNum;

	int sum = firstNum + secondNum;
	int difference = firstNum - secondNum;
	int product = firstNum * secondNum;
	int division = firstNum / secondNum;
	int reminder = firstNum % secondNum;

	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Difference: " << difference << std::endl;
	std::cout << "Product: " << product << std::endl;
	std::cout << "Division: " << division << std::endl;
	std::cout << "Reminder: " << reminder << std::endl;
}
```

</p>
</details>

## Task 2

Въведете 2 различни числа от конзолата и разменете стойностите им. Разпечатайте новите стойности.

>Bonus: Пробвайте без използването на трета променлива

```
Примерен вход: 5 23
Примерен изход: 23 5
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	int firstNum, secondNum;

	std::cout << "Please enter two numbers: ";
	std::cin >> firstNum >> secondNum;

	// Swap with a third variable
	int temp = firstNum;
	firstNum = secondNum;
	secondNum = temp;

	// Swap with operations (works with multiplication and division too)
	firstNum = firstNum + secondNum;
	secondNum = firstNum - secondNum;
	firstNum = firstNum - secondNum;

	// Swap with XOR
	firstNum = firstNum ^ secondNum;
	secondNum = firstNum ^ secondNum;
	firstNum = firstNum ^ secondNum;

	std::cout << "The numbers have been swapped: " 
              << firstNum << " " << secondNum;
}
```

</p>
</details>

## Task 3

Да се въведе от клавиатурата положително 4-цифрено цяло число. Да се намерят и отпечатат цифрите му и да се намери сумата им.

```
Примерен вход: 1826
Примерен изход:
First digit: 1
Second digit: 8
Third digit: 2
Fourth digit: 6
Sum: 17
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	unsigned int userNumber;

	do 
	{
		std::cout << "Please enter a 4 digit numeber: ";
		std::cin >> userNumber;
	} while (userNumber < 1000 || userNumber > 9999);

	std::cout << "\n";

	int firstDigit = userNumber / 1000;
	int secondDigit = userNumber / 100 % 10;
	int thirdDigit = userNumber / 10 % 10;
	int fourthDigit = userNumber % 10;

	int digitsSum = firstDigit + secondDigit + thirdDigit + fourthDigit;

	std::cout << "First digit: "  << firstDigit << "\n";
	std::cout << "Second digit: " << secondDigit << "\n";
	std::cout << "Third digit: "  << thirdDigit << "\n";
	std::cout << "Fourth digit: " << fourthDigit << "\n";
	std::cout << "Sum: "          << digitsSum << std::endl;
}

```

</p>
</details>

## Task 4

Въведете 4-цифрено число от конзолата и обърнете цифрите му.

```
Примерен вход: 1234
Примерен изход: 1234 -> 4321
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	unsigned int userNumber;

	do 
	{
		std::cout << "Please enter a 4 digit numeber: ";
		std::cin >> userNumber;
	} while (userNumber < 1000 || userNumber > 9999);

	std::cout << "\n";

	int firstDigit = userNumber / 1000;
	int secondDigit = userNumber / 100 % 10;
	int thirdDigit = userNumber / 10 % 10;
	int fourthDigit = userNumber % 10;

	int reversedNumber = fourthDigit * 1000 + thirdDigit * 100 + secondDigit * 10 + firstDigit;

	std::cout << userNumber << " -> " << reversedNumber;
}

```

</p>
</details>

## Task 5

Въведете 3 числа от клавиатурата а1, а2 и а3.
Разменете стойностите им, така че а1 да има стойността на а2, а2 да има стойността на а3, а а3 да има старата стойност на а1.

```
Примерен вход: 1 2 3
Примерен изход: 
а1 = 2; 
а2 = 3; 
а1 = 1;
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	int a1, a2, a3;
	int temp;

	std::cout << "Please enter three numebers: ";
	std::cin >> a1 >> a2 >> a3;

	temp = a1;
	a1 = a2;
	a2 = a3;
	a3 = temp;

	std::cout << "a1 = " << a1 << "\n";
	std::cout << "a2 = " << a2 << "\n";
	std::cout << "a3 = " << a3 << "\n";
}

```

</p>
</details>

## Task 6

Напишете конвертор на градуси от Целзий във Фаренхайт.
Въвеждате едно число от конзолата. Това число ще бъдат градусите в Целзий.
На конзолата трябва да бъде изведено съобщение със съответните градуси, но трансформирани във Фаренхайт.

```
Подсказка: °C * 9/5 + 32 = °F
Където: °C е градуси в Целзий, а °F е градуси във Фаренхайт
```

```
Примерен вход: 28.3
Примерен изход: 82.94
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	double celsius;

	std::cout << "Please enter the degrees in Celsius: ";
	std::cin >> celsius;

	double fahrenheit = celsius * 9.0 / 5.0 + 32.0;

	std::cout << "In Fahrenheit: " << fahrenheit << "F";
}

```

</p>
</details>

## Task 7

Да се състави програма, чрез която се въвеждат 2 естествени двуцифрени числа a, b. Програмата да изведе произведението на двете числа, последната цифра от произведението, както и дали е четна(0 за нечетнa и 1 за четнa).

```
Примерен вход: 69 12
Примерен изход: 828, 8 - 1
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	unsigned int a, b;

	do
	{
		std::cout << "Please enter two 2-digit numbers: ";
		std::cin >> a >> b;
	} while ((a < 10 || a > 99) && (b < 10 || b > 99));

	unsigned int product = a * b;
	
	unsigned int lastDigit = product % 10;
	bool isEven = lastDigit % 2 == 0;

	std::cout << product << ", " << lastDigit << " - " << isEven;
}

```

</p>
</details>

## Task 8

Въведете две цели числа и проверете дали първото е делител на второто. На конзолата вместо 0 и 1 трябва да изведете `true` и `false`. Да се реши без да се използва `if`.

```
Примерен вход: 5 5
Примерен изход: true

Примерен вход: 2 9
Примерен изход: false
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	int firstNumber, secondNumber;

	std::cout << "Please enter two numbers: ";
	std::cin >> firstNumber >> secondNumber;

	bool canDivide = secondNumber % firstNumber == 0;

	std::cout << std::boolalpha << canDivide;
}

```

</p>
</details>

## Task 9

Да се въведат стойностите на трите страни на триъгълник и да се изведе дали може да съществува такъв триъгълник

Подсказка: Един триъгълник съществува тогава, когато всяка страна е по-малка от сбора на останалите 2 страни.

```
Примерен вход: 10 10 10
Примерен изход: true

Примерен вход: 10 2 2
Примерен изход: false
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	unsigned int a, b, c;

	std::cout << "Please enter the sides of a triangle: ";
	std::cin >> a >> b >> c;

	bool canExist = (a < b + c) && (b < a + c) && (c < a + b);

	std::cout << std::boolalpha << canExist;
}

```

</p>
</details>

## Task 10

Да се намерят лицето и обиколката на триъгълник. Ако не може да същестува такъв триъгълник, нека лицето и обиколката да са -1;

```
Примерен вход: 2 4 3
Примерен изход:
Area: 2.90474
Perimeter: 9

Примерен вход: 4 12 5
Примерен изход:
Area: -1
Perimeter: -1
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>
#include <cmath>

int main()
{
	unsigned int a, b, c;
	double perimeter, area;

	std::cout << "Please enter the sides of a triangle: ";
	std::cin >> a >> b >> c;

	bool canExist = (a < b + c) && (b < a + c) && (c < a + b);

	if (canExist)
	{
		perimeter = a + b + c;

		double halfP = perimeter / 2.0;
		area = sqrt(halfP * (halfP - a) * (halfP - b) * (halfP - c));
	}
	else
	{
		perimeter = -1;
		area = -1;
	}

	std::cout << "Area: " << area << "\n";
	std::cout << "Perimeter " << perimeter << "\n";
}

```

</p>
</details>

## Task 11

Да се напише програма, която намира най-голямото и най-малкото от три числа въведени от клавиатурата.

```
Примерен вход: 5 18 2
Примерен изход:
Max: 18
Min: 2
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	int firstNum, secondNum, thirdNum;

	std::cout << "Please enter three numbers: ";
	std::cin >> firstNum >> secondNum >> thirdNum;

	// First way
	//int max = (firstNum > secondNum ? (firstNum > thirdNum ? firstNum : thirdNum) : secondNum > thirdNum) ? secondNum : thirdNum;
	//int min = (firstNum < secondNum ? (firstNum < thirdNum ? firstNum : thirdNum) : secondNum < thirdNum) ? secondNum : thirdNum;

	// Second way
	int max = firstNum;
	int min = firstNum;

	if (max < secondNum) 
		max = secondNum;

	if (max < thirdNum) 
		max = thirdNum;

	if (min > secondNum) 
		min = secondNum;

	if (min > thirdNum) 
		min = thirdNum;

	std::cout << "Max: " << max << "\n";
	std::cout << "Min: " << min << "\n";
}

```

</p>
</details>

## Task 12

Да се напише програма, която определя дали реалното число `x` принадлежи на интервала `[a, b]`. Първо се въвежда интервалът, после `x`.

```
Примерен вход: 9.16 3.14 12
Примерен изход: false

Примерен вход: 6.66 3 6.66
Примерен изход: true
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	double a, b;
	double x;

	std::cout << "Please enter the interval: ";
	std::cin >> a >> b;

	if (a > b)
	{
		double temp = a;
		a = b;
		b = temp;
	}

	std::cout << "Please enter a number: ";
	std::cin >> x;

	bool isInInterval = a <= x && x <= b;

	std::cout << std::boolalpha << "Is in interval: " << isInInterval;
}

```

</p>
</details>

## Task 13

По въведена година проверете дали тя е високосна.

```
Подсказка: Една година е високосна, когато тя се дели на 4
без остатък и се дели на 100 с остатък. Или се дели на 400 без
остатък.
```

```
Примерен вход: 2024
Примерен изход: true

Примерен вход: 1911
Примерен изход: false

Примерен вход: 1989
Примерен изход: false

Примерен вход: 2000
Примерен изход: true
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	unsigned int year;

	std::cout << "Please enter a year: ";
	std::cin >> year;

	bool isLeap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

	std::cout << std::boolalpha << "Is the year leap: " << isLeap;
}

```

</p>
</details>
