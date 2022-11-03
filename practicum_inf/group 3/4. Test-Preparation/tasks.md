# Test 1 Preparation

## Task 0
Използвайки цикъл реализирайте следната редица 1 + 11 + 111 + 1111 + ... n на брой пъти и изкарайте на екрана сумата на тази редица. 

```
Примерен вход: 5
Примерен изход: 
Sequence: 1 + 11 + 111 + 1111 + 11111
Sum: 12345
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	unsigned int n;

	std::cout << "Please enter a natural number: ";
	std::cin >> n;

	int seq = 0;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		seq = seq * 10 + 1;
		sum += seq;

		std::cout << seq;

		if (i + 1 < n)
		{
			std::cout << " + ";
		}
	}

	std::cout << "\n" << sum;
}
```

</p>
</details>

## Task 1
Намерете сумата на числата между 100 и 200, които се делят на 9.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	int sum = 0;

	for (int i = 100; i <= 200; ++i)
	{
		if (i % 9 == 0)
			sum += i;
	}

	std::cout << sum;
}
```

</p>
</details>

## Task 2
По въведено естествено число изкарайте неговото обратно.

```
Примерен вход: 1776
Примерен изход: 6771
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	unsigned int userValue;
	unsigned int reversedValue = 0;

	std::cout << "Please enter a natural number: ";
	std::cin >> userValue;

	while (userValue)
	{
		reversedValue = reversedValue * 10 + userValue % 10;
		userValue = userValue / 10;
	}

	std::cout << reversedValue;
}
```
</p>
</details>

## Task 3
Напишете програма, която по въведено естествено число в десетична бройна система го превъръща в осмична.

```
Примерен вход: 16
Примерен изход: 20

Примерен вход: 64
Примерен изход 100
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	unsigned int decimal;
	unsigned int octNum = 0;
	unsigned int step = 1;

	std::cout << "Please enter a natural decimal number: ";
	std::cin >> decimal;

	while (decimal > 0)
	{
		octNum = octNum + step * (decimal % 8);

		decimal /= 8;
		step *= 10;
	}

	std::cout << octNum;
}
```

</p>
</details>



## Task 4
Напишете програма, която по въведено цяло число в двоична бройна система го превръща в десетична.

```
Примерен вход: 101
Примерен изход: 5

Примерен вход: 11101
Примерен изход: 29
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	int binary;
	std::cin >> binary;

	int binCopy = binary;
	int len = 0;

	while (binCopy > 0)
	{
		binCopy /= 10;
		++len;
	}

	int result = 0;
	int powOfTwo = 1;
    
	for (int i = 0; i < len; i++)
	{
		result += binary % 10 * powOfTwo;
		binary /= 10;
		powOfTwo *= 2;
	}

	std::cout << result;
}
```

</p>
</details>

## Task 5
По подадени брой редове създайте триъгълник на Флойд.

```
Примерен вход: 4
Примерен изход:
1
2  3
4  5  6
7  8  9  10
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	unsigned rows;

	std::cout << "Please enter a natural number for the rows: ";
	std::cin >> rows;

	int rowCap = 1;
	int currNum = 1;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < rowCap; ++j)
		{
			std::cout << currNum << " ";
			++currNum;
		}

		++rowCap;
		std::cout << "\n";
	}
}
```

</p>
</details>

## Task 6
По въведено естествено число намерете дали първaтa и последнaтa му цифра са равни.

```
Примерен вход: 677523
Примерн изход: 
The first digit is 6
The last digit is 3
The digits are not equal

Примерен вход: 877268
Примерeн изход: 
The first digit is 8
The last digit is 8
The digits are equal
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	unsigned userValue;

	std::cout << "Please enter a natural number: ";
	std::cin >> userValue;

	unsigned firstDigit, lastDigit;

	lastDigit = userValue % 10;

	while (userValue > 10)
	{
		userValue /= 10;
	}

	firstDigit = userValue;

	bool areEqual = firstDigit == lastDigit;

	std::cout << "The first digit is " << firstDigit << "\n";
	std::cout << "The last digit is " << lastDigit << "\n";
	
	if (areEqual)
	{
		std::cout << "The digits are equal!";
	}
	else
	{
		std::cout << "The digits are not equal!";
	}
}

```

</p>
</details>

## Task 7
По въведено естествено число, изкарайте на екрана всички негови прости делители и тяхната сума.

```
Примерен вход: 66
Примеерен изход: 2, 3, 11 with a sum of 16
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	unsigned int userValue;
	unsigned int divSum = 0;

	std::cout << "Please enter a natural number: ";
	std::cin >> userValue;

	bool hasPrintedValue = false; // Тази булева служи за флаг, който позволява правилното изкарване на запетайките на екрана.

	for (int i = 2; i <= userValue; ++i)
	{
		if (userValue % i == 0)
		{
			bool isPrime = true;

            // Checking if 'i' is prime
			for (int j = 2; j * j <= i; ++j) // Това е еквивалентно на for(int j = 2; j <= sqrt(i); ++j), като не се използва функцията sqrt от cmath
			{
				if (i % j == 0)
                {
					isPrime = false;
                    break;
                }
			}

			if (isPrime)
			{
				if (hasPrintedValue)
					std::cout << ", ";

				std::cout << i;
				divSum += i;
				hasPrintedValue = true;
			}
		}
	}

	std::cout << " with a sum of " << divSum;
}

```

</p>
</details>

## Task 8
По въведено естествено число `n`, оптечатайте на конзолата квадрат с дължина на страните `n`.

```
Примерен вход: 3
Примерен изход: 

###
# #
###

Примерен вход: 6
Примерен изход: 

######
#    #
#    #
#    #
#    #
######
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
	unsigned int squareSize;
	std::cin >> squareSize;

	int edge = squareSize - 1;

	for (int row = 0; row < squareSize; row++)
	{
		for (int column = 0; column < squareSize; column++)
		{
			if ((row == 0 || column == 0) ||
				(row == edge || column == edge))
			{
				std::cout << "#";
			}
			else
			{
				std::cout << " ";
			}
		}

		std::cout << std::endl;
	}
}
```

</p>
</details>

## Task 9
Да се напише програма, която чертае квадрат от `*` с размер на страната въведен от клавиатурата. Нека е изпълнен само под главния диагонал.

```
Примерен вход: 8
Примерен изход:

* * * * * * * * 
*             *
* *           *
* * *         *
* * * *       *
* * * * *     *
* * * * * *   *
* * * * * * * *
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

int main()
{
    int squareSize;

    std::cout << "Please enter the square's size: ";
    std::cin >> squareSize;

    for (int i = 0; i < squareSize; i++)
    {
        for (int j = 0; j < squareSize; j++)
        {
            if (i == 0 || i > j || j == squareSize - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }
}
```

</p>
</details>

## Task 10
Нарисувайте в конзолата триизмерен куб по подадена големина.

```
Примерен вход: 5
Примерен изход:

*****
*   **
*   * *
*   *  *
*****   *
 *   *  *
  *   * *
   *   **
    *****
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
    int n;
	std::cin >> n;

	int field = n * 2 - 1;
	int mid = n - 1;

	for (int row = 0; row <= field; row++)
	{
		for (int col = 0; col <= field; col++)
		{
			if (row == 0 && col <= mid ||
				row == n - 1 && col <= mid ||
				row == (field - 1) && col >= mid && col <= (field - 1) ||
				row <= mid && col == 0 ||
				row <= mid && col == mid ||
				col - row == mid && col <= (field - 1) ||
				row > mid && row <= (field - 1) && col == (field - 1) ||
				(row - col == mid) && row <= (field - 1) ||
				col - row == 0 && col > mid && col <= (field - 1))
			{
				std::cout << "*";
			}
			else
			{
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
}
```

</p>
</details>

## Task 11
Вашата задача е да отпечатате логото на Батман на конзолата.

Имате две стойности за вход:
Първата е нечетно число по-голямо от 4, което е размера на логото.
Втората е символ с който ще трябва да се отпечата логото.

```
Примерен вход: 5 #
Примерен изход:

#####     #####
 #### # # ####
  ###########
      ###
       #


Примерен вход: 7 $
Примерен изход:

$$$$$$$       $$$$$$$
 $$$$$$       $$$$$$
  $$$$$  $ $  $$$$$
   $$$$$$$$$$$$$$$
   $$$$$$$$$$$$$$$
        $$$$$
         $$$
          $


Примерен вход: 9 %
Примерен изход:

%%%%%%%%%         %%%%%%%%%
 %%%%%%%%         %%%%%%%%
  %%%%%%%         %%%%%%%
   %%%%%%   % %   %%%%%%
    %%%%%%%%%%%%%%%%%%%
    %%%%%%%%%%%%%%%%%%%
    %%%%%%%%%%%%%%%%%%%
          %%%%%%%
           %%%%%
            %%%
             %
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
    int size;
    char c;

    std::cin >> size >> c;

    int field = 3 * size + 1;
    char space = ' ';
    int mid = size / 2;

    for (int row = 0; row < ((size - 1) + size/2); row++)
    {
        for (int col = 0; col < field; col++)
        {
            if (row == 0 && col <= size - 1 ||                                                                  //top left wing
                row == 0 && col >= 2 * size && col < field - 1 ||                                               //top right wing
                row - col <= 0 && row <= mid && col <= size - 1 ||                                              //rest of left wing
                row + col <= field - 2 && row <= mid && col >= 2 * size ||                                      //rest of right wing
                row == mid - 1 && col == size + (mid - 1) ||                                                    //left ear
                row == mid - 1 && col == size + mid + 1 ||                                                      //right ear
                row >= mid && row <= mid + mid - 2 && size / 2 <= col && col <= field - mid - 2 ||              //body
                row >= 2 * mid - 1 && row < 3 * mid - 1 && col - row >= 3 && col + row <= 2 * size + (size - 4))//tail
            {
                cout << c;
            }
            else
            {
                cout << space;
            }
        }
        cout << endl;
    }
}
```

</p>
</details>

## /* Task 12 *\
Да се напише програма, която приема естествено число `n`. Намерете средата на това число и го разцепете на две отделни части. След това разменете позициите на двете отделни числа(части) и ги обединете в едно цяло число. Трябва обединеното число да го запазите в нова променлива!

```
Примерен вход: 123445
Примерен изход: 445123

Примерен вход: 65432
Примерен изход: 32654
```



<details><summary><b>Solution</b></summary> 
<p>

```cpp

#include <iostream>

using namespace std;

int main()
{
    unsigned int userInput;
	cin >> userInput;

	unsigned int copy = userInput;

	int size = 0;
	while (copy > 0)
	{
		size++;
		copy = copy / 10;
	}

	int middle = size / 2;

	unsigned int firstHalf = 0;
	unsigned int secondHalf = 0;

	int step = 1;

	for (int i = 0; i < middle; ++i)
	{
		secondHalf = secondHalf + step * (userInput % 10);
		userInput = userInput / 10;
		step = step * 10;
	}

	firstHalf = userInput;

	unsigned int finalNum = 0;

	int firstHalfSize = (size + 1) / 2;

	for (int i = 1; i <= firstHalfSize; i++)
	{
		secondHalf *= 10;
	}

	finalNum = secondHalf + firstHalf;

	cout << finalNum;
}
```

</p>
</details>