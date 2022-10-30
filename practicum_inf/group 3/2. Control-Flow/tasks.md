# Control-Flow Tasks

## Task 0
Направете конзолен калкулатор с 2 числа с основните действия +, -, *, / .
Можете:
- Първо да въведете двете числа и после знака за пресмятане
- Първо да въведете знака за пресмятане и после двете числа
- Първо да въведете едно число, после знака за пресмятане и накрая другото число

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	double firstNumber, secondNumber;
	char op;

	double result;

	// First way
	/*std::cin >> firstNumber >> secondNumber >> op;*/

	// Second way
	/*std::cin >> op >> firstNumber >> secondNumber;*/

	// Third way
	std::cin >> firstNumber >> op >> secondNumber;

	switch (op)
	{
	case '+':
		result = firstNumber + secondNumber;
		break;
	case '-':
		result = firstNumber - secondNumber;
		break;
	case '*':
		result = firstNumber * secondNumber;
		break;
	case '/':
		result = firstNumber / secondNumber;
		break;
	default:
		std::cout << "Invalid operator!" << std::endl;
		return -1;
	}

	std::cout << result;
}

```

</p>
</details>

## Task 1

Въведете 2 променливи от клавиатурата – сума пари (число с плаваща запетая) и
дали съм здрав – булев тип. 
Съставете програма, която взема решения
на базата на тези данни по следния начин:
- ако съм болен няма да излизам
  - ако имам пари ще си купя лекарства
  - ако нямам – ще стоя вкъщи и ще пия чай
- ако съм здрав изведете съобщение
  - ако имам по-малко от 10 лв ще отида на кафе
  - ако имам повече от 10 лв ще птида на кино

Полученото решение покажете като съобщение в конзолата.

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    double money;
    bool isHealthy;

    std::cout << "Enter amount: ";
    std::cin >> money;

    std::cout << "Are you healthy? (1/0): ";
    std::cin >> isHealthy;

    if (isHealthy)
    {
        std::cout << "I am healthy";

        if (money < 10)
        {
            std::cout << "I will drink coffee";
        }
        else
        {
            std::cout << "I won't go to the cinema";
        }
    }
    else
    {
        std::cout << "I am sick";

        if (money > 0)
        {
            std::cout << "I will go buy medicine";
        }
        else
        {
            std::cout << "I will stay at home and drink tea";
        }
    }
}

```

</p>
</details>

## Task 2

По въведен символ `c` да се отпечата на екрана едно от следните съобщения:
- Ако е малка буква - "The upper case character corresponding to `c` is ..." 
- Ако е главна буква - "The lower case character corresponding to `c` is ..."
- Ако не е буква - " The character is not a letter". 

```
Подсказка: Използвайте ASCII таблицата.
```

```
Примерен вход: k
Примерен изход: The uppercase character corresponding to k is K!

Примерен вход: J
Примерен изход: The lowercase character corresponding to J is j!

Примерен вход: &
Примерен изход: The character is not a letter!
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	char symbol;

	std::cout << "Please enter a symbol: ";
	std::cin >> symbol;

	int letterDiff = 'a' - 'A';

	if (symbol >= 'a' && symbol <= 'z')
	{
		std::cout << "The upper case character corresponding to " << symbol << " is " << (char)(symbol - letterDiff) << "!";
	}
	else if (symbol >= 'A' && symbol <= 'Z')
	{
		std::cout << "The lower case character corresponding to " << symbol << " is " << (char)(symbol + letterDiff) << "!";
	}
	else
	{
		std::cout << "The character is not a letter!";
	}
}

```

</p>
</details>

## Task 3

Използвайте оператор switch като според въведен месец от годината (цяло число) да се изведе кой сезон е.

```
Примерен вход: 1
Примерен изход: Winter
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned month;
    std::cin >> month;
    
    switch (month)
    {
    case 12: case 1: case 2: std::cout << "Winter" << std::endl; break;
    case 3: case 4: case 5: std::cout << "Spring" << std::endl; break;
    case 6: case 7: case 8: std::cout << "Summer" << std::endl; break;
    case 9: case 10: case 11: std::cout << "Autumn" << std::endl; break;
    
    default: std::cout << "There is no such month" << std::endl; break;
    }
}

```

</p>
</details>

## Task 4

Дадени са коефициентите `a` и `b` на едно линейно уравнение `ax + b = 0`. Изведете решението, ако има единствено такова, NO ако няма решение, и INF, ако има безброй много решения. Работим единствено с цели числа.

```
Примерен вход: 1 1
Примерен изход: -1

Примерен вход: 0 0
Примерен изход: INF
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    double a, b;

    std::cout << "You are going to be prompted to enter elements of the linear equation ax + b = 0!" << std::endl;
    std::cin >> a >> b;

    if (a == 0)
    {
        std::cout << (b != 0 ? "NO" : "INF") << std::endl;
    }
    else
    {
        double x = -b / a;
        std::cout << "x is equal to " << x << std::endl;
    }
}

```

</p>
</details>

## Task 5

По даден месец и година изведете броя дни от месеца.
**Внимавайте с високосните години!**

```
Примерн вход: 2 2024
Примерен изход 29
```
<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	unsigned month, year; // unsigned == unsigned int;
    bool isLeap;

	std::cout << "Please enter the month and year: ";
	std::cin >> month >> year;

    switch (month)
    {
    case 1: case 3: case 5:
    case 7: case 8: case 10:
    case 12:
        std::cout << 31;
        break;
    case 4: case 6: case 9:
    case 11:
        std::cout << 30;
        break;
    case 2:
        isLeap = ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0);
        std::cout << (isLeap ? 29 : 28);
        break;
    default:
        std::cout << "Invalid month!";
        break;
    }
}

```
</p>
</details>

## Task 6

Да се въведат три цели числа в конзолата, които представляват параметрите a,b,c на квадратно уравнение ax^2 + bx + c = 0. Да се определи дали уравнението има решение, колко корена има и кои са те.

```
Примeрен вход: 0 4 5
Примерен изход: x = -1.25

Примeрен вход: 2 5 7
Примерен изход: x = No solution!

Примeрен вход: 1 10 25
Примерен изход: x1 = x2 = -5


Примeрен вход: 1 -5 6
Примерен изход: x1 = 2; x2 = 3
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>
#include <math.h>

int main()
{
    double a, b, c;

    std::cout << "Please enter a, b and c for ax^2 + bx + c = 0: ";
    std::cin >> a >> b >> c;

    if (a == 0)
    {
        if (b != 0)
        {
            double x = -c / b;
            std::cout << "x = " << x << std::endl;
        }
        else if (c != 0)
        {
            std::cout << "No solution!" << std::endl;
        }
        else
        {
            std::cout << "Every x is a solution!" << std::endl;
        }
    }
    else
    {
        int discimamnt = (b * b) - (4 * a * c);

        if (discimamnt > 0)
        {
            double x1, x2;

            x1 = (-b + std::sqrt(discimamnt)) / (2 * (double)a);
            x2 = (-b - std::sqrt(discimamnt)) / (2 * (double)a);

            std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
        }
        else if (discimamnt == 0)
        {
            double x = -b / (2 * a);
            std::cout << "x1 = x2 = " << x << std::endl;
        }
        else
        {
            std::cout << "No solution!" << std::endl;
        }
    }
}

```
</p>
</details>

## Task 7

Да се въведе символ `c` и да се определи дали той е цифра, малка или голяма латинска буква. Ако не е нито едно от трите да изведе "`c` is a special symbol".

```
Примерен вход: 6
Примерен изход: Digit

Примерен вход: j
Примерен изход: Lowercase letter
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	char symbol;

	std::cout << "Please enter a symbol: ";
	std::cin >> symbol;

	int letterDiff = 'a' - 'A';

	if (symbol >= '0' && symbol <= '9')
	{
		std::cout << "Digit";
	}
	else if (symbol >= 'a' && symbol <= 'z')
	{
		std::cout << "Lowercase letter";
	}
	else if (symbol >= 'A' && symbol <= 'Z')
	{
		std::cout << "Uppercase letter";
	}
	else
	{
		std::cout << symbol << " is a special symbol!";
	}
}

```
</p>
</details>

## Task 8

Да се напише програма, която по въведено 4-цифрено естествено число проверява дали първата му цифра е четна и е най-голямата сред всички цифри.

```
Примерен вход: 7652
Примерен изход:
isEven = false
isMax = true

Примерен вход: 8291
Примерен изход:
isEven = true
isMax = false
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    unsigned number;
    bool isEven, isMax;

    do
    {
        std::cout << "Please enter a natural 4 digit number: ";
        std::cin >> number;
    } while (number < 1000 || number > 9999);

    unsigned firstDigit = number / 1000;
    unsigned secondDigit = number / 100 % 10;
    unsigned thirdDigit = number / 10 % 10;
    unsigned fourthDigit = number % 10;

    unsigned max = firstDigit;

    if (secondDigit > max) max = secondDigit;
    if (thirdDigit > max) max = thirdDigit;
    if (fourthDigit > max) max = fourthDigit;

    isEven = firstDigit % 2 == 0;
    isMax = firstDigit == max;

    std::cout << std::boolalpha << "isEven = " << isEven << "\nisMax = " << isMax << std::endl;
}

```
</p>
</details>

## Task 9

Напишете програма, която проверява дали числото е просто число или не.

```
Примерен вход: 7
Примерен изход: true

Примерен вход: 66
Примерен изход: false
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

	std::cout << std::boolalpha << "Is Prime: " << isPrime;
}

```
</p>
</details>
