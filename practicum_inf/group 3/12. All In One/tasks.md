# All In One Tasks

## Задача 0
Дадени са два едномерни масива, представляващи множества от естествени числа в интервала (0..1000). Да се състави програма, която проверява дали първият масив е подмножество на втория. Множество - съвкупност от неповтарящи се елементи.

```    
Примерен вход:
2 1 5 4 6  
1 2 3 4 5 6 7 18 11 
Примерен изход:
true
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

bool isSubset(const unsigned int subset[], const int& subsetSize, const unsigned int set[], int setSize)
{
	bool containsElement = false;

	for (int i = 0; i < subsetSize; i++)
	{
		for (int j = 0; j < setSize; j++)
		{
			if (subset[i] == set[j])
			{
				containsElement = true;
				break;
			}
		}

		if (!containsElement)
			return false;
	}

	return true;
}

// Recursive Solution

bool containsElement(const unsigned int subsetElement, const unsigned int set[], int setSize)
{
	if (setSize == 0)
		return false;

	if (subsetElement != set[setSize - 1])
		return containsElement(subsetElement, set, setSize - 1);
	else
		return true;
}

bool isSubsetRecursive(const unsigned int subset[], const int& subsetSize, const unsigned int set[], int setSize)
{
	if (subsetSize == 0)
		return true;

	if (!containsElement(subset[subsetSize - 1], set, setSize))
		return false;
	else
		return isSubsetRecursive(subset, subsetSize - 1, set, setSize);
}

int main()
{
	unsigned int subset[] = { 2, 1, 5, 4, 6 };
	unsigned int subsetSize = sizeof(subset) / sizeof(int);
	unsigned int set[] = { 1, 2, 3, 4, 5, 6, 7, 18, 11 };
	unsigned int setSize = sizeof(set) / sizeof(int);


	std::cout << std::boolalpha << isSubset(subset, subsetSize, set, setSize);
}
```

</p>
</details>

## Задача 1
Проверете дали елементите на масив са зигзагообразна нагоре. Това е редица при която елементите изпълняват условието: `N1 < N2 > N3 < N4 > N5 <...` 

```
Примерен вход: 1 3 2 4 3 7
Примерен изход: true
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

bool isZigZag(const int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			if (arr[i] <= arr[i + 1])
				return false;
		}
		else
		{
			if (arr[i] >= arr[i + 1])
				return false;
		}
	}

	return true;
}

int main()
{
	int arr[] = { 1, 3, 2, 4, 3, 7 };

	std::cout << isZigZag(arr, 6);
}

```

</p>
</details>

## Задача 2
Въведете квадратна матрица с големина n^2, проверете дали въведената матрица е симетрична. Симетрична означава, че елементите на позиции (i, j) и (j, i) са еднакви.

```
Примерен вход:
3
4 -5 2
-5 0 1
2 1 8 
Примерен изход:
true

Примерен вход:
4
1 2 3 4
5 6 7 8
9 0 0 0
3 2 1 -1 
Примерен Изход:
false
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

bool isSymmetrical(const int arr[][3], int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int column = row + 1; column < size; column++)
		{
			if (arr[row][column] != arr[column][row])
				return false;
		}
	}

	return true;
}

int main()
{
	int arr[3][3] = { 4, -5, 2,
					-5, 0, 1,
					2 , 1, 8 };

	std::cout << isSymmetrical(arr, 3);
}
```

</p>
</details>

## Задача 3
Да се напише програма, която въвежда квадратна матрица от цели числа с размер nxn (n също се въвежда от клавиатурата), след което намира сумата от елементите на главния и второстепенния диагонал (центърът да се брои само веднъж). Да се провери дали сумата е степен на двойката. 

```
Примерен вход:
3
1 2 3 
4 5 6 
7 8 9 
Примерен изход: 
25 => false
```
>Обяснение: 1 + 5 + 9 + 3 + 7 = 25 => не е степен на двойката

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int calculateDiagonals(const int matrix[][3], int size)
{
	int diagonalSum = 0;

	for (int row = 0; row < size; row++)
	{
		for (int column = 0; column < size; column++)
		{
			if (row == column || row + column == size - 1)
				diagonalSum += matrix[row][column];
		}
	}

	return diagonalSum;
}

bool isPowerOfTwo(int n)
{
	if (n <= 0)
		return false;

	if (n == 1)
		return true;

	return n % 2 == 0 && isPowerOfTwo(n / 2);
}

int main()
{
	int matrix[][3] = { 1, 2, 3, 4, 12, 6, 7, 8, 9 };
	int matrixFalse[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::cout << calculateDiagonals(matrix, 3) << "=>" << std::boolalpha <<isPowerOfTwo(calculateDiagonals(matrix, 3)) << "\n";
	std::cout << calculateDiagonals(matrixFalse, 3) << "=>" << std::boolalpha <<isPowerOfTwo(calculateDiagonals(matrixFalse, 3));
}
```

</p>
</details>

## Задача 4
Две изречения са анаграми едно на друго, ако съдържат еднакъв брой букви (английски) и всяка буква от едното изречение се среща еднакъв брой пъти и в двете изречения. Не правим разлика между главни и малки английски букви. Напишете функция, която по два символни низа, съдържащи английски букви и евентуално интервали, проверява дали двата низа са анаграми един на друг. 
   
```
Примерен вход:
"Astronomer" 
"Moon starer"
Примерен изход: True

Примерен вход:
"A B B A"
"baba"
Примерен изход:
YES
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

bool areAnagaram(const char* firstStr, const char* secondStr)
{
	const unsigned short ALPHABET_LETTERS = 26;
	unsigned int firstStrLetters[ALPHABET_LETTERS] = { 0 };
	unsigned int secondStrLetters[ALPHABET_LETTERS] = { 0 };

	int diff = 'a';
	while (*firstStr != '\0')
	{
		if (*firstStr == ' ')
		{
			firstStr++;
			continue;
		}

		if (*firstStr < 'a')
			diff = 'A';

		firstStrLetters[*firstStr - diff]++;
		diff = 'a';
		firstStr++;
	}

	while (*secondStr != '\0')
	{
		if (*secondStr == ' ')
		{
			secondStr++;
			continue;
		}

		if (*secondStr < 'a')
			diff = 'A';

		secondStrLetters[*secondStr - diff]++;
		diff = 'a';
		secondStr++;
	}

	for (int i = 0; i < ALPHABET_LETTERS; i++)
	{
		if (firstStrLetters[i] != secondStrLetters[i])
			return false;
	}

	return true;
}

int main()
{
	const char* firstStr = "Astronomer";
	const char* secondStr = "Moon starer";

	std::cout << std::boolalpha << areAnagaram(firstStr, secondStr);
}
```

</p>
</details>

## Задача 5
Да се напише рекурсивна функция, която по даден масив от дробни числа намира произведението на всички числа различни от 0, които са по-малки от числото, стоящо вляво от тях (само ако има такова)

```
Примерен вход:
8
2.1 0 9.9 3 1 -1 14.5 7
Примерен изход:
-21
```
> Обяснение: -21 = 3 * 1 * (-1) * 7; пропускаме 2.1, тъй като вляво от него няма число

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

double findProduct(const double arr[], const int& size)
{
	if (size == 1)
	{
		if (arr[size - 1] > arr[size] && arr[size] != 0)
			return arr[size];

		return 1;
	}

	if (arr[size - 2] > arr[size - 1] && arr[size - 1] != 0)
		return arr[size - 1] * findProduct(arr, size - 1);
	else
		return findProduct(arr, size - 1);
}

int main()
{
	double nums[] = { 2.1, 0, 9.9, 3, 1, -1, 14.5, 7 };

	std::cout << findProduct(nums, 8);
}
```

</p>
</details>

## Задача 6
Напишете рекурсивна функция, която приема символен низ, състоящ се само от малки и главни английски букви, и масив от цели числа със същата дължина. Функцията трябва да замени буквата на i-та позиция в символния низ с буквата, която е след нея в английската азбука на разстояние, определено от i-тия елемент в масива от цели числа. Следващите букви на последните са първите в азбуката (т.е. ако Z трябва да се смени със следващата буква, трябва да поставим A). 

```
Примерен вход:
"LoremIpsum" 
[1, 0, 2, 5, 6, 2, 11, 9, 3, 3]
Примерен изход:
"MotjsKabxp"
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void swapLetters(char* str, int nums[])
{
	if (*str == '\0')
		return;

	bool letterOverflow = *str + *nums >= 'z' || (*str + *nums >= 'Z' && *str + *nums < 'a');

	if (letterOverflow)
		*str += *nums - 26;
	else
		*str += *nums;

	swapLetters(++str, ++nums);
}

int main()
{
	char str[] = "LoremIpsum";
	int nums[] = { 1, 0, 2, 5, 6, 2, 11, 9, 3, 3 };

	swapLetters(str, nums);

	std::cout << str;
}
```

</p>
</details>

## Задача 7
Напишете функция, която приема текст и пресмята средната дължина на думите (броя букви, разделен на броя на думите). Изреченията в текста завършват с един от следните символи: точка `.`, удивителна `!` и въпросителна `?` 
> Вземете под внимание, че един текст може да има няколко спейса един след друг.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

double getAverageWordLength(const char* string)
{
	int iter = 0;
	int charCount = 0;
	int wordCount = 0;

	bool isInWord = false;

	while (string[iter] != '\0')
	{
		bool isAtSymbol = string[iter] == '.' || string[iter] == '!' || string[iter] == '?' || string[iter] == ' ';
		bool isAtLetter = string[iter] >= 'A' && string[iter] <= 'Z' || string[iter] >= 'a' && string[iter] <= 'z';
		bool isAtEndOfString = string[iter + 1] == '\0';

		if (isAtLetter)
		{
			isInWord = true;
			charCount++;
		}
		
		if (isAtSymbol && isInWord || isAtEndOfString)
		{
			wordCount++;
			isInWord = false;
		}

		iter++;
	}

	return (double)charCount / wordCount;
}
```

</p>
</details>

## Задача 8
Напишете рекурсивна функция, която приема символен низ и масив от булеви стойности със същата дължина. Функцията трябва да замени i-тата буква от символния низ с нейната главна, ако на i-тата позиция в булевия масив стойността е истина. Ако буквата е главна или символът не е буква, да не се променя. 

```
Примерен вход:
"LoremIpsum" 
0 1 1 0 1 1 1 0 0 0 0
Примерен изход:
"LORem Ipsum"
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void changeLetters(char* string, const bool values[])
{
	if (*string == '\0')
		return;

	if (*values)
	{
		if (*string >= 'a' && *string <= 'z')
			*string -= 32;
	}

	changeLetters(++string, ++values);
}

int main()
{
	char str[] = "Lorem Ipsum";
	bool values[] = { false, true, true, false, true, true, true, false, false, false, false };

	changeLetters(str, values);

	std::cout << str;
}
```

</p>
</details>

## Задача 9
Да се напише рекурсивна функция, която приема символен низ и целочислен масив. В масива на позиция 0 е записана цифра, която съответства на буквата A от английската азбука, а позиция 1 е записана цифра, която съответства на буквата B и така нататък. Рекурсивната функция трябва да замени символите с цифрите(като символи) в низа. Да не се прави разлика между малки и главни букви.

```
Примерен вход:
"Cauchi"
3 5 0 3 3 7 6 5 1 1 7 2 3 9 0 5 2 5 2 7 5 7 4 9 7 7
Примерен изход:
"035051"
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int getLetterPos(char letter)
{
    if (letter >= 'a' && letter <= 'z')
    {
        letter -= 32;
    }

    return letter - 'A' + 1;
}

void swapWithNumbers(char* str, int letters[])
{
    if (*str == '\0')
        return;

    *str = letters[getLetterPos(*str) - 1] + '0';

    swapWithNumbers(++str, letters);
}

int main()
{
    char str[] = "Cauchi";
    int letters[] = { 3, 5, 0, 3, 3, 7, 6, 5, 1, 1, 7, 2, 3, 9, 0, 5, 2, 5, 2, 7, 5, 7, 4, 9, 7, 7 };

    swapWithNumbers(str, letters);

    std::cout << str;
}
```

</p>
</details>

## Задача 10
Да се състави програма, чрез която се въвежда естествено число `N` от интервала [1..20]. Чрез рекурсивна функция да се изведе минималното двоично число съдържащо в записа си N броя единици.

```
Примерен вход: 4
Примерен изход: 15
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

unsigned long long minBinary(int digits)
{
	if (digits == 0)
		return 0;

	return (minBinary(digits - 1) << 1) + 1;
}

int main()
{
	std::cout << minBinary(20);
}
```

</p>
</details>

## Задача 11
Да се състави програма на C++, чрез която се извежда триъгълник от букви.
Първият ред на триъгълника започва с А и завършва с въведената главна латинска буква. Във всеки следващ ред крайният знак е с 1 по-малък (по ASCII код). Използвайте рекурсия.

```
Примерен вход:
D
Примерен изход:
A B C D
A B C
A B
A
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int getLetterPos(char letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		letter -= 32;
	}

	return letter - 'A' + 1;
}

void printTriangle(const char& letter)
{
	if (letter < 'A')
		return;

	int letterPos = getLetterPos(letter);

	for (int i = 0; i < letterPos; i++)
	{
		std::cout << (char)('A' + i) << " ";
	}

	std::cout << std::endl;

	printTriangle(letter - 1);
}

int main()
{
	printTriangle('Z');
}
```

</p>
</details>

## Задача 12
Напишете рекурсивна функция, която по дадени два символни низа a и b проверява дали низът a започва с низа b. Да се игнорират символите, различни от английски букви, както и да не се прави разлика между главни и малки английски букви.

```
Примерен вход:
"Go to 210" 
"GOT!!!"
Примерен изход:
true
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

bool isLetter(char letter)
{
	return letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z';
}

bool areSame(char firstLetter, char secondLetter)
{
	int letterDifference = 'a' - 'A';

	if (firstLetter >= 'A' && firstLetter <= 'Z')
		firstLetter += letterDifference;

	if (secondLetter >= 'A' && secondLetter <= 'Z')
		secondLetter += letterDifference;

	return firstLetter == secondLetter;
}

bool doesStringStartWithSubstring(const char* str, const char* substr)
{
	if (*substr == '\0')
		return true;

	if (*str == '\0')
		return false;

	if (!isLetter(*str))
		return doesStringStartWithSubstring(++str, substr);

	if (!isLetter(*substr))
		return doesStringStartWithSubstring(str, ++substr);

	if (areSame(*str, *substr))
		return doesStringStartWithSubstring(++str, ++substr);

	return false;
}

int main()
{
	std::cout << std::boolalpha << doesStringStartWithSubstring("Gso to 210", "GsOT!!!");
}
```

</p>
</details>
