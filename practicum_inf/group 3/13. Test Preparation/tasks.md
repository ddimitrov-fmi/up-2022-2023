# Test Preparation Tasks

## Задача 0
Да се напише програма която приема естествено число `n`, както и масив от естествени числа. Задачата на програмата е да каже дали е възможно да се образува такъв сбор от числата в масива, който е равен на числото `n`. Всеки елемент от масива може да се ползва, колкото пъти е нужно.

> Пояснение: Имаме масив [3, 12] и числото 6. Възможно е да се образува сбор, така като 3 + 3 = 6.

``` 
Примерен вход: 
19
3
2 3 4

Примерен изход:
true
```

```
Примерен вход:
256
3
3 5 9

Примерен изход:
true
```

> Бонус задача: Опитайте се да направите нов масив в който да сложите числата от които се образува сбора.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>
 
bool canSum(unsigned int* arr, unsigned int size, int target)
{
  if (target < 0)
      return false;

  if (target == 0)
      return true;

  for (size_t i = 0; i < size; i++)
  {
      if (canSum(arr, size, target - arr[i]))
          return true;
  }
  
  return false;
}

int main()
{
  unsigned int arr[3] = { 2, 4 };

  std::cout << std::boolalpha << canSum(arr, 2, 6);
}
```

</p>
</details>

## Задача 1
Напишете фунция, която обръща думите в даден низ. Под дума ще разбираме всяка последователност от малки или главни английски букви. Например "evil rats" да се преобразува в "live star".
Функцията да не променя подадения низ, а да връща нов, за който да заделя динамична памет.

```
Примерен вход: evil rats
Примерен изход: live star
```

```
Примерен вход: Step on no pets
Примерен изход petS no on step
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
bool isLetter(char c)
{
	return c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z';
}

void skipToWord(char*& str)
{
	while (!isLetter(*str) && *str != '\0')
		str++;
}

void skipToNextWord(char*& str)
{
	while (isLetter(*str) && *str != '\0')
		str++;
}

int getWordLength(char* str)
{
	int length = 0;
	while (isLetter(*str) && *str != '\0')
	{
		length++;
		str++;
	}

	return length;
}

void reverse(char* str, int strSize)
{
	for (int i = 0; i < strSize / 2; i++)
	{
		char temp = str[i];
		str[i] = str[strSize - i - 1];
		str[strSize - i - 1] = temp;
	}
}

char* getReversedWord(char*& str)
{
	int length = getWordLength(str);
	char* word = new char[length + 1];

	int wordIter = 0;
	while (isLetter(*str) && *str != '\0' && wordIter < length)
	{
		word[wordIter] = *str;
		wordIter++;
		str++;
	}

	word[wordIter] = '\0';

	reverse(word, length);

	return word;
}

char* combineWords(char** strs, int size)
{
	int wordsSize = 0;
	int spacesCount = 0;

	for (int i = 0; i < size; i++)
	{
		wordsSize += getWordLength(strs[i]);
		spacesCount++;
	}

	int overallSize = wordsSize + spacesCount;
	char* combinedSentence = new char[overallSize];

	int sentenceIter = 0;
	for (int i = 0; i < size; i++)
	{
		int currWordLength = getWordLength(strs[i]);
		for (int j = 0; j < currWordLength; j++)
		{
			combinedSentence[sentenceIter] = strs[i][j];
			sentenceIter++;
		}

		combinedSentence[sentenceIter] = ' ';
		sentenceIter++;
	}

	combinedSentence[sentenceIter - 1] = '\0';

	return combinedSentence;
}

int wordCounter(char* str)
{
	int counter = 0;
	while (*str != '\0')
	{
		skipToWord(str);
		counter++;
		skipToNextWord(str);
	}

	return counter;
}

char* getSentence(char* str)
{
	int currLen = 0;
	int wordsCount = wordCounter(str);
	char** words = new char* [wordsCount];

	while (*str != '\0')
	{
		skipToWord(str);
		words[currLen] = getReversedWord(str);
		currLen++;
	}

	char* sentence = combineWords(words, wordsCount);

	for (int i = 0; i < wordsCount; i++)
	{
		delete[] words[i];
	}
	delete[] words;

	return sentence;
}

int main()
{
	char initSentence[] = "evil rats";
	char* finalSentence = getSentence(initSentence);

	std::cout << finalSentence;

	delete[] finalSentence;
}
```

</p>
</details>

## Задача 2
Дума ще наричаме последователност от английски букви (главни или малки). Изречение ще наричаме последователност от думи, разделени с произволни разделители, различни от английски букви (напр. интервал, тире и т.н.)
Напишете функция, която по дадено изречение `s` и дадена дума `w` намира първата дума в `s`, която започва с първата буква на `w`, след което намира дума, започваща с втората буква на `w` и намираща се надясно от първата намерена дума и т.н. Накрая функцията да конструира изречение от намерените думи, в което те са разделени с интервали. За новото изречение да бъде заделена динамична памет. Ако за дадена буква не бъде намерена дума, процесът да се прекратява и да се връща до момента полученото изречение.

```
Примерен вход: 
But in my opinion, he is not lazy. He is working hard and smart at the same time.
hilasyt

Примерен изход:
he is lazy and smart
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

bool isLetter(char c)
{
    return c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z';
}
 
void skipToWord(char*& str)
{
    while (!isLetter(*str) && *str != '\0')
        str++;
}
 
void skipToNextWord(char*& str)
{
    while (isLetter(*str) && *str != '\0')
        str++;
}
 
int getWordLength(char* str)
{
    int length = 0;
    while (isLetter(*str) && *str != '\0')
    {
        length++;
        str++;
    }
 
    return length;
}
 
char* getWord(char*& str)
{
    int length = getWordLength(str);
    char* word = new char[length + 1];
 
    int wordIter = 0;
    while (isLetter(*str) && *str != '\0' && wordIter < length)
    {
        word[wordIter] = *str;
        wordIter++;
        str++;
    }
 
    word[wordIter] = '\0';
 
    return word;
}
 
char** getSentence(char* str, char* expr, int& currLen)
{
    currLen = 0;
    int sentenceLen = getWordLength(expr);
    char** sentence = new char*[sentenceLen];
 
    while (*str != '\0' && *expr != '\0')
    {
        skipToWord(str);
 
        if (*str == *expr && currLen < sentenceLen)
        {
            sentence[currLen] = getWord(str);
            expr++;
            currLen++;
            continue;
        }
 
        skipToNextWord(str);
    }
 
    return sentence;
}
 
int main()
{
    char initSentence[] = "Hello this is a very cool sentence";
    char exprSentence[] = "iac";
 
    int sentences = 0;
    char** finalSentence = getSentence(initSentence, exprSentence, sentences);
 
    for (int i = 0; i < sentences; i++)
    {
        std::cout << finalSentence[i] << " ";
        delete[] finalSentence[i];
    }
    delete[] finalSentence;
 
}
```

</p>
</details>

## Задача 3
Изречение ще наричаме символен низ, състоящ се от думи, съдържащи единствено английски букви (главни или малки), разделени с интервал. Сортирано изречение ще наричаме изречение, в което думите са подредени лексикографски в нарастващ ред, без да се прави разлика между главни и малки букви.
Да се напише функция, която слива две подадени сортирани изречения, образувайки ново сортирано изречение. За новия низ да бъде заделена динамична памет.

```
Примерен вход: 
He is there
not yet

Примерен изход:
He is not there yet
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

bool isLetter(char c)
{
	return c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z';
}

void skipToWord(char*& str)
{
	while (!isLetter(*str) && *str != '\0')
		str++;
}

void skipToNextWord(char*& str)
{
	while (isLetter(*str) && *str != '\0')
		str++;
}

int getWordLength(char* str)
{
	int length = 0;
	while (isLetter(*str) && *str != '\0')
	{
		length++;
		str++;
	}

	return length;
}

char* getWord(char*& str)
{
	int length = getWordLength(str);
	char* word = new char[length + 1];

	int wordIter = 0;
	while (isLetter(*str) && *str != '\0' && wordIter < length)
	{
		word[wordIter] = *str;
		wordIter++;
		str++;
	}

	word[wordIter] = '\0';

	return word;
}

char* combineWords(char** strs, int size)
{
	int wordsSize = 0;
	int spacesCount = 0;

	for (int i = 0; i < size; i++)
	{
		wordsSize += getWordLength(strs[i]);
		spacesCount++;
	}

	int overallSize = wordsSize + spacesCount;
	char* combinedSentence = new char[overallSize];

	int sentenceIter = 0;
	for (int i = 0; i < size; i++)
	{
		int currWordLength = getWordLength(strs[i]);
		for (int j = 0; j < currWordLength; j++)
		{
			combinedSentence[sentenceIter] = strs[i][j];
			sentenceIter++;
		}

		combinedSentence[sentenceIter] = ' ';
		sentenceIter++;
	}

	combinedSentence[sentenceIter - 1] = '\0';

	return combinedSentence;
}

int wordCounter(char* str)
{
	int counter = 0;
	while (*str != '\0')
	{
		skipToWord(str);
		counter++;
		skipToNextWord(str);
	}

	return counter;
}

char toLower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';

	return c;
}

char* combineSorted(char* first, char* second)
{
	int wordsCount = wordCounter(first) + wordCounter(second);
	char** words = new char*[wordsCount];

	for (int i = 0; i < wordsCount; i++)
	{
		skipToWord(first);
		skipToWord(second);

		if (toLower(*first) <= toLower(*second) && *first != '\0')
			words[i] = getWord(first);
		else
			words[i] = getWord(second);
	}

	char* sortedSentence = combineWords(words, wordsCount);

	for (int i = 0; i < wordsCount; i++)
	{
		delete words[i];
	}

	delete[] words;

	return sortedSentence;
}

int main()
{
	char firstSorted[] = "He is there";
	char secondSorted[] = "not yet";

	char* sortedSentence = combineSorted(firstSorted, secondSorted);

	std::cout << sortedSentence;

	delete[] sortedSentence;
}
```

</p>
</details>

## Задача 4
При въведено естествено число n > 0. 
Да се напише функция, която отпечатва всички “разбивания” на числата от 1 до n по следния начин:

> n = 3
```
1 2 3

1 2
3

1
2 3

1
2
3
```

> n = 4
```
1 2 3 4

1 2 3
4

1 2
3 4

1 2
3
4

1
2 3 4

1
2 3
4

1
2
3 4

1
2
3
4

```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void printer(int n, bool* binaryTable)
{
	for (int i = 1; i <= n; i++)
	{
		std::cout << i << " ";

		if (i < n)
		{
			if (binaryTable[i - 1])
				std::cout << "\n";
		}
	}
}

int powOfTwo(int n)
{
	int pow = 1;
	for (int i = 0; i < n; i++)
	{
		pow *= 2;
	}

	return pow;
}

void binaryAdvance(bool* binaryTable, int tableSize)
{
	if (binaryTable[tableSize - 1] == 1)
	{
		int j = tableSize - 1;
		while (j >= 1 && binaryTable[j] == 1)
		{
			binaryTable[j] = 0;
			j--;
		}

		binaryTable[j] = 1;

		return;
	}

	binaryTable[tableSize - 1] = 1;
}

void binaryPrint(int n)
{
	bool* binaryTable = new bool[n - 1];

	for (int i = 0; i < n-1; i++)
	{
		binaryTable[i] = 0;
	}

	int pow = powOfTwo(n);


	for (int i = 0; i < pow; i++)
	{
		printer(n, binaryTable);
		
		std::cout << "\n\n";

		binaryAdvance(binaryTable, n - 1);
	}

	delete[] binaryTable;
}

int main()
{
	binaryPrint(4);
}
```

</p>
</details>