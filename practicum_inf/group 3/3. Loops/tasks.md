# Loops tasks

## Задача 0 
Да се пресметне `n!` за дадено `n`.

```
Примерен вход: 5
Примерен изход: 120

Примерен вход: 16
Примерен изход: 20922789888000

Примерен вход: 0
Примерен изход: 1
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned factorial;
    unsigned long long result = 1;

    std::cout << "What factorial would you like to find: ";
    std::cin >> factorial;

    // One way
    while (factorial > 1)
    {
        result *= factorial--;
    }

    // A second way (Basically the same way as the first one but more explicit)
    //while (factorial > 1)
    //{
    //    result = result * factorial;
    //    factorial--;
    //}

    // A third way
    //for (int i = 2; i <= factorial; ++i)
    //{
    //    result = result * i;
    //}

    std::cout << result;
}

```
</p>
</details>

## Задача 1 
Да се пресметнат и отпечатат първите `n` члена на редицата ai = i^2 + 3i за въведено цяло неотрицателно `n`.

```
Примерен вход: 7
Примерен изход: 4; 10; 18; 28; 40; 54; 70;
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned n; // unsigned int n

    std::cout << "Please enter a positive integer: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        std::cout << i * i + 3 * i << "; ";
    }
}

```
</p>
</details>

## Задача 2 
Да се напише програма, която чете от клавиатурата `n` числа и извежда най-голямото отрицателно число.

```
Примерен вход: 8 2 3 4 -5 -4 3 -2 3
Примерен изход: -2
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned n;
	int userInput;
    int maxNegative = INT_MIN;

	std::cout << "How many numbers do you want to enter: ";
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> userInput;
		
		if (userInput < 0 && userInput > maxNegative)
		{
			maxNegative = userInput;
		}
	}

	std::cout << maxNegative;


	// Second version (Does not need the knowledge of INT_MIN)

	//unsigned n;
	//int userInput;
	//int maxNegative = 0; <------ Note that we set maxNegative as 0

	//std::cout << "How many numbers do you want to enter: ";
	//std::cin >> n;

	//for (int i = 0; i < n; i++)
	//{
	//	std::cin >> userInput;

	//	if (maxNegative >= 0 && userInput < 0) <------ And check if the user input is negative, then we can set an actual max negative value to our variable. We can continue our checks from there!
	//	{
	//		maxNegative = userInput;
	//	}

	//	if (userInput < 0 && userInput > maxNegative)
	//	{
	//		maxNegative = userInput;
	//	}
	//}

	//std::cout << maxNegative;
}

```
</p>
</details>

## Задача 3 
По въведено естествено число `n` изведете `n`-тото число от редицата на Фибоначи.

```
Примерен вход: 6
Примерен изход: 8

Примерен вход: 12
Примерен изход: 144
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned n;

	std::cout << "Which fibbonacci number do you want: ";
	std::cin >> n;

	if (n <= 2)
	{
		std::cout << 1;
		return 0;
	}

	unsigned fib0, fib1;
	unsigned tempFib;
	fib0 = fib1 = 1;

	for (int i = 2; i < n; i++)
	{
		tempFib = fib1;
		fib1 = fib0 + fib1;
		fib0 = tempFib;
	}

	std::cout << fib1;
}

```
</p>
</details>

## Задача 4 
От клавиатурата се въвеждат произволен брой числа. Намерете сбора на всички числа до въвеждането на 0.

```
Примерен вход: 1 2 3 0 5
Примерен изход: 6 
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    int sum = 0;
    int userInput;

    std::cout << "Enter as many integers as you like! Enter '0' to break the loop!\n";

    do
    {
        std::cin >> userInput;
        sum = sum + userInput;
    } while (userInput != 0);

    std::cout << sum;
}

```
</p>
</details>

## Задача 5 
От клавиатурата се въвежда естествено число. Намерете сбора на цифрите му.

```
Примерен вход: 5550
Примерен изход: 15
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned userNumber;
    unsigned sum = 0;

    std::cout << "Please enter a positive integer: ";
    std::cin >> userNumber;

    while (userNumber > 0)
    {
        sum = sum + userNumber % 10;
        userNumber = userNumber / 10;
    }

    std::cout << "The sum of the digits is " << sum;
}

```
</p>
</details>

## Задача 6 
Напишете програма, която, по дадено число `а` и степенен показател `n`, намира `а` нa `n`-та степен.

```
Примерен вход: 2 5
Примерен изход: 32
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    int userInput;
    int pow;

    double result = 1;

    std::cout << "Please enter a number and its power: ";
    std::cin >> userInput >> pow;

    if (pow >= 0)
    {
        while (pow > 0)
        {
            result = result * userInput;
            --pow;
        }
    }
    else
    {
        while (pow < 0)
        {
            result = result * 1 / userInput;
            ++pow;
        }
    }

    std::cout << result;
}

```
</p>
</details>


## Задача 7 
По дадено естествено число определете дали то е просто.

``` 
Примерен вход: 8
Примерен изход: NO

Примерен вход: 7
Примерен изход: YES
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	int number;
	bool isPrime = true;

	std::cout << "Please enter a number: ";
	std::cin >> number;

	for (int i = 2; i <= sqrt(number); ++i)
	{
              if (number % i == 0)
              {
                  isPrime = false;
                  break;
              }
	}

	std::cout << (isPrime ? "YES" : "NO");
}

```
</p>
</details>

## Задача 8 
Изкарайте всички главни букви от английската азбука, които са съгласни. 

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	for (char letter = 'A'; letter <= 'Z'; ++letter)
	{
		if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
		{
			continue;
		}

		std::cout << letter << " ";
	}
}

```
</p>
</details>

## Задача 9
Да се въведе някое естествено число от клавиатурата и да се изведе неговото двуично представяне.

```
Примерен вход: 6
Примерен изход: 110

Примерен вход: 76
Примерен изход: 1001100
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned userInput;

    std::cout << "Please enter a numeber: ";
    std::cin >> userInput;

    const int base = 2;
    int baseNumber = 0;
    int digitPos = 1;

    while (userInput > 0)
    {
        baseNumber += (digitPos * (userInput % base));
        digitPos *= 10;
        userInput /= base;
    }

    std::cout << "This number in binary is: " << baseNumber;
}

```
</p>
</details>

## Задача 10 
По дадено число `n` изкарайте на екрана квадрат от `n` x `n` символи, където по главния диагонал стоят нули, над него +, а под него -.

```
Примерен вход: 4
Примерен изход:
0+++
-0++
--0+
---0
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned userInput;

    std::cout << "Please enter a postive integer: ";
    std::cin >> userInput;

    for (int row = 0; row < userInput; ++row)
    {
        for (int column = 0; column < userInput; column++)
        {

            if (row < column)
            {
                std::cout << "+";
            }
            else if (row > column)
            {
                std::cout << "-";
            }
            else
            {
                std::cout << "0";
            }
        }

        std::cout << "\n";
    }
}

```
</p>
</details>

## Задача 11
Представете си, че имаме един стенен аналогов часовинк. Стрелката му започва от 12 часа. По въведен брой часове `elapsedHours` да се изкара броя пълните ротации на малата стрелка и в колко часа ще приключи ротацията.

```
Примерен вход: 15
Примерен изход: 1 rotation(s) and the hour hand is at 3 o'clock

Примерен вход: 32372635
Примерен изход: 2697719 rotation(s) and the hour hand is at 7 o'clock.
```
> Да се реши с цикли и без цикли

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned elapsedHours;

    std::cout << "How many hours should pass: ";
    std::cin >> elapsedHours;

    // Without loops
    //int rotations = elapsedHours / 12;
    //int currTime = elapsedHours % 12;

    // With loops
    int rotations = 0;
    int currTime;

    while (elapsedHours > 12)
    {
        rotations++;
        elapsedHours -= 12;
    }

    currTime = elapsedHours;

    std::cout << rotations << " rotation(s) and the hour hand is at " << currTime << " o'clock.";
}

```
</p>
</details>

## Задача 12
Господин Денев е учител по програмиране в един много известен и почитан електротехникум във Великотърновска област. Той преподава на учениците си основите на програмирането на един много древен език наречен C++. Неговата задача е да въведе оценките на своите ученици и да пресметне какъв е средният им успех. Също така иска да разбере колко ученици каква оценка имат. Както и колко проценти има от всяка оценка. Вашата задача е да измислите система по която той да въведе оценките и да изкара нужната за него информация.

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned grades;
    unsigned excellentCount = 0;
    unsigned veryGoodCount = 0;
    unsigned goodCount = 0;
    unsigned avgCount = 0;
    unsigned weakCount = 0;

    std::cout << "How many grades do you want to enter: ";
    std::cin >> grades;

    unsigned grade;
    for (int i = 0; i < grades; i++)
    {
        std::cin >> grade;

        switch (grade)
        {
        case 2: weakCount++; break;
        case 3: avgCount++; break;
        case 4: goodCount++; break;
        case 5: veryGoodCount++; break;
        case 6: excellentCount++; break;
        default:
            std::cout << "Invalid grade! Try again: \n";
            i--;
            break;
        }
    }

    double averageGrade = excellentCount * 6 + veryGoodCount * 5 + goodCount * 4 + avgCount * 3 + weakCount * 2;
    averageGrade = averageGrade / grades;

    double excellentPercentage = (double)excellentCount / grades * 100;
    double veryGoodPercentage = (double)veryGoodCount / grades * 100;
    double goodPercentage = (double)goodCount / grades * 100;
    double avgPercentage = (double)avgCount / grades * 100;
    double weakPercentage = (double)weakCount / grades * 100;

    std::cout << "\nAverage grade is " << averageGrade << "\n\n";
    std::cout << "Students with excellent score: " << excellentCount << " (" << excellentPercentage << "%)\n";
    std::cout << "Students with very good score: " << veryGoodCount << " (" << veryGoodPercentage << "%)\n";
    std::cout << "Students with good score: " << goodCount << " (" << goodPercentage << "%)\n";
    std::cout << "Students with average score: " << avgCount << " (" << avgPercentage << "%)\n";
    std::cout << "Students with weak score: " << weakCount << " (" << weakPercentage << "%)\n";
}

```
</p>
</details>

## Задача 13
Марто имал за задача да вземе една купчина **естествени** числа и да разбере дали те се палиндроми. Така като не му се занимавало да гледа всяко число цифра по цифра, той решил да се обърне към ФМИ и да си наеме програмист, който да му свърши задачата. На него му трябва проста програма в която въвежда число и изкарва на екрана дали е палиндром.

```
Примерен вход: 132
Примерен изход: false

Примерен вход: 1885881
Примерен изход: true
```

> Палиндром е такова число, което се чете по един и същ начин дали е обърнато или не.

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned number;

    std::cout << "Please enter a postive integer: ";
    std::cin >> number;

    unsigned numberCopy = number;
    unsigned reversedNumber = 0;

    while (numberCopy > 0)
    {
        reversedNumber = reversedNumber * 10 + numberCopy % 10;
        numberCopy = numberCopy / 10;
    }

    bool isPalindrome = number == reversedNumber;

    std::cout << std::boolalpha << "Is palindrome: " << isPalindrome;
}

```
</p>
</details>

## Задача 14
Тошко Терцата искал да си направи малка програмка, чрез която по зададени ден, месец и година иска да разбере каква дата ще бъде след определен брой дни. Помогнете му да си направи програмата, за да спре да изтърва турнирите си по белот.

```
Примерен вход: 26-10-2022 1234
Примерен изход: The date after 1234 days would be 13-3-2023

Примерен вход: 02-09-1658 165245
Примерен изход: The date after 165245 days would be 5-2-2111
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned day, month, year;
    char temp;

    unsigned offset;

    std::cout << "Please enter a date with the following formatting \"dd-mm-yyyy\" and elapsed days from the date: \n";
    std::cin >> day >> temp >> month >> temp >> year >> offset;

    bool isLeap = ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0);
    unsigned elapsedDays = offset;

    while (offset > 0)
    {
        day++;
        offset--;

        if (month == 2 && day > 28)
        {
            if (isLeap && day <= 29)
                continue;

            day = 1;
            month++;
        }
        else if (((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) || day > 31)
        {
            day = 1;
            month++;
        }

        if (month > 12)
        {
            month = 1;
            year++;
            isLeap = ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0);
        }
    }

    std::cout << "The date after " << elapsedDays << " days would be " << day << "-" << month << "-" << year;
}

```
</p>
</details>

## Задача 15
Да се намери дали дадено число е перфектно.

> Едно число е перфектно тогава когато е равно на сбора от делителите си.
> Пример 28 = (1 + 2 + 4 + 7 + 14)

```
Примерен вход: 6
Примерен изход: true

Примерен вход: 200
Примерен изход: false

Примерен вход: 28
Примерен изход: true
```

> Бонус: Намерете някое друго перфектно число

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned number;
    unsigned divSum = 0;

    std::cout << "Please enter a positive integer: ";
    std::cin >> number;

    for (int i = 1; i <= number / 2; ++i)
    {
        if (number % i == 0)
            divSum += i;
    }

    bool isPerfect = number == divSum;

    std::cout << std::boolalpha << "isPerfect: " << isPerfect;

    // Solve the bonus task as an exercise!!
}

```
</p>
</details>

## Задача 16
Да се изведат първите 20 естествени числа, довичиният запис на които съдържа равен брой 0 и 1.

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    const int base = 2;
    int baseNumber = 0;
    int digitPos = 1;

    unsigned foundDigits = 0;
    unsigned testedNumber;

    unsigned zeroesCount = 0;
    unsigned onesCount = 0;

    for (int i = 1; foundDigits < 20; ++i)
    {
        testedNumber = i;

        while (testedNumber > 0)
        {
            baseNumber += (digitPos * (testedNumber % base));
            digitPos *= 10;
            testedNumber /= base;
        }

        while (baseNumber > 0)
        {
            if (baseNumber % 10 == 0)
            {
                ++zeroesCount;
            }
            else
            {
                ++onesCount;
            }

            baseNumber /= 10;
        }

        if (onesCount == zeroesCount)
        {
            std::cout << i << "; ";
            ++foundDigits;
        }

        baseNumber = 0;
        digitPos = 1;
        zeroesCount = 0;
        onesCount = 0;
    }
}

```
</p>
</details>

## Задача 17
Ники е студент първи курс във ФМИ и има един тегав предмет наречен дискретни структури. В този предмет той се занимава с доказателство на различни множества. За домашно, той има да направи програма, която да провери по зададени две множества, дали дадено число принадлежи на:
- Тяхното обединение
- Тяхното сечение
- Тяхната разлика
- Дали се намира само в едно от множествата

Уловката е, че трябва да намери дали числото се намира в само едно от множествата без да прави други проверки освен за обединение, сечение и разлика. Първото множество съдържа числата от първото въведено число до второто. А второто множество съдържа числата от третото въведено число до четвъртото.

> Приемаме, че първото множество винаги ще бъде преди второто

> Решава се без цикли ^^

```
Примерен вход: 1 5 3 5 5
Примерен изход:
Is in union: true
Is in intersection: true
Is in difference: false
Is in only one set: false

Примерен вход: 1 5 3 5 5
Примерен изход:
Is in union: true
Is in intersection: false
Is in difference: true
Is in only one set: true

Примерен вход: 1 5 9 12 6
Примерен изход:
Is in union: false
Is in intersection: false
Is in difference: false
Is in only one set: false

Примерен вход: 1 5 6 9 7
Примерен изход:
Is in union: true
Is in intersection: false
Is in difference: false
Is in only one set: true
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    int startA, endA;
    int startB, endB;
    int number;

    std::cout << "Please enter the first set(start and end), the second set(start and end) and the number to check: \n";
    std::cin >> startA >> endA >> startB >> endB >> number;

    bool inUnion = (startA <= number && number <= endA) || (startB <= number && number <= endB);
    bool inIntersection = number <= endA && number >= startB;
    bool inDifference = !inIntersection && (number >= startA && number <= endA);
    bool inSingleSet = !inIntersection && inUnion;

    std::cout << std::boolalpha << "Is in union: " << inUnion << std::endl;
    std::cout << std::boolalpha << "Is in intersection: " << inIntersection << std::endl;
    std::cout << std::boolalpha << "Is in difference: " << inDifference << std::endl;
    std::cout << std::boolalpha << "Is in only one set: " << inSingleSet << std::endl;
}

```
</p>
</details>
