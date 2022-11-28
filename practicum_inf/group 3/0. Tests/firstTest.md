# Test 1

## Задача 1, Вариант 1
Нощта е завладяла Gotham City и в небето свети известният на всички бат-сигнал. Обаче има проблем! Батман не може да намери своя бат-мобил. Той притежава джаджа, която показва неговите координати и тези на бат-мобила, но не знае на коя посока да тръгне! Вашата задача е да направите програма в която да въведете координатите (двойка реални числа) на Батман и координатите на бат-мобила. По въведените координати изкарайте на екрана на коя посока Батман трябва да тръгне: N(север), W(запад), E(изток), S(юг), NW(северозапад), NE(североизток), SW(югозапад) или SE(югоизток).

В случай, че координатите на Батман и бат-мобила съвпадат, изкарайте на екрана: "You're there already!"

>Забележка: Ако разликата между координатите на Батман и неговия бат-мобил не е по-голямa от 0.1, то координатите им съвпадат!

>Пояснение 1: Може да си представите координатите като координати в една двумерна декартова координатна система.

>Пояснение 2: Първо се въвеждат координатите на Батман и след това координатите на бат-мобила!


```
Примерен вход: 2 5 6 8
Примерен изход: NE

Примерен вход: 5 -2 5 -8
Примерен изход: S

Примерен вход: 2.5 4 2.55 3.92
Примерен изход: You're there already!

Примерен вход: -2.5 12.3 8.1 -4.9
Примерен изход: SE
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	double batmanX, batmanY;
	double carX, carY;

	std::cin >> batmanX >> batmanY >> carX >> carY;

	double diffX = batmanX - carX;
	double diffY = batmanY - carY;

	diffX = diffX > 0 ? diffX : -diffX;
	diffY = diffY > 0 ? diffY : -diffY;

	if (diffX <= 0.1 && diffY <= 0.1)
	{
		std::cout << "You're already there!";
	}
	else if (diffX == 0 && diffY != 0)
	{
		std::cout << (batmanY < carY ? "N" : "S");
	}
	else if (diffY == 0 && diffX != 0)
	{
		std::cout << (batmanX < carX ? "E" : "W");
	}
	else
	{
		std::cout << (batmanY < carY ? "N" : "S");
		std::cout << (batmanX < carX ? "E" : "W");
	}
}
```

</p>
</details>

## Задача 1, Вариант 2
Iron Man трябва да отиде на спешна мисия за да спаси света, обаче има проблем! Той не може да намери своя костюм. Iron Man притежава джаджа, която показва неговите координати и тези на костюма, но не знае на коя посока да тръгне! Вашата задача е да направите програма в която да въведете координатите (двойка реални числа) на неговия костюм и координатите на Iron man. По въведените координати изкарайте на екрана на коя посока Iron Man трябва да тръгне: N(север), W(запад), E(изток), S(юг), NW(северозапад), NE(североизток), SW(югозапад), SE(югоизток).

В случай, че координатите на Iron Man и неговия костюм съвпадат, изкарайте на екрана: "You're next to the armor!"

>Забележка: Ако разликата между координатите на Iron Man и неговия костюм не е по-голямa от 0.1, то координатите им съвпадат!

>Пояснение 1: Може да си представите координатите като координати в една двумерна декартова координатна система.
>Пояснение 2: Първо се въвеждат координатите на костюма и след това координатите на Iron Man!

```
Примерен вход: 2 5 6 8
Примерен изход: SW

Примерен вход: 5 -2 5 -8
Примерен изход: N

Примерен вход: 2.5 4 2.55 3.92
Примерен изход: You're next to the armor!

Примерен вход: -2.5 12.3 8.1 -4.9
Примерен изход: NW
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	double ironManX, ironManY;
	double armorX, armorY;

	std::cin >> armorX >> armorY >> ironManX >> ironManY;

	double diffX = ironManX - armorX;
	double diffY = ironManY - armorY;

	diffX = diffX > 0 ? diffX : -diffX;
	diffY = diffY > 0 ? diffY : -diffY;

	if (diffX <= 0.1 && diffY <= 0.1)
	{
		std::cout << "You're next to the armor!";
	}
	else if (diffX == 0 && diffY != 0)
	{
		std::cout << (ironManY < armorY ? "N" : "S");
	}
	else if (diffY == 0 && diffX != 0)
	{
		std::cout << (ironManX < armorX ? "E" : "W");
	}
	else
	{
		std::cout << (ironManY < armorY ? "N" : "S");
		std::cout << (ironManX < armorX ? "E" : "W");
	}
}
```

</p>
</details>

## Задача 2, Вариант 1
Да се въведе едно естествено число от клавиатурата и да се провери коя е най-дългата поредица от последователни еднакви цифри в него. Вашата задача е да изкарате на екрана колко е дълга тази поредица и числото което съставя тази поредица. 

>Заблежка: Ако има две или повече поредици с еднаква дължина, то да се изведе информация само за една от поредиците.

```
Примерен вход: 326666688
Примерен изход: 5 (6)

Примерен вход: 1777444329
Примерен изход: 3 (4)

Примерен вход: 823456729
Примерен изход: 1 (9)
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	unsigned userInput;
	std::cin >> userInput;

	unsigned longestStreak = 1;
	unsigned longestStreakNum = userInput % 10;

	unsigned currStreak = 0;
	unsigned currNum = userInput % 10;

	while (userInput > 0)
	{
		if (currNum == userInput % 10)
		{
			currStreak++;
			userInput /= 10;
			continue;
		}

		if (longestStreak < currStreak)
		{
			longestStreak = currStreak;
			longestStreakNum = currNum;
		}

		currStreak = 1;
		currNum = userInput % 10;

		userInput /= 10;
	}

	std::cout << longestStreak << "(" << longestStreakNum << ")";
}
```

</p>
</details>

## Задача 2, Вариант 2
Да се въведе едно естествено число от клавиатурата и да се провери коя е най-късата поредица от последователни еднакви цифри в него. Вашата задача е да изкарате на екрана колко е дълга тази поредица и числото което съставя тази поредица.

>Заблежка: Ако има две или повече поредици с еднаква дължина, то да се изведе информация само за една от поредиците.

```
Примерен вход: 1116655555
Примерен изход: 2 (6)

Примерен вход: 666111555
Примерен изход: 3 (5)

Примерен вход: 823456729
Примерен изход: 1 (9)
```


<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	unsigned userInput;
	std::cin >> userInput;

	unsigned shortestStreak = INT_MAX; // 10 also works because (int)log10(2^32)
	unsigned shortestStreakNum = userInput % 10;

	unsigned currStreak = 0;
	unsigned currNum = userInput % 10;

	while (userInput > 0)
	{
		if (currNum == userInput % 10)
		{
			currStreak++;
			userInput /= 10;
			continue;
		}

		if (shortestStreak > currStreak)
		{
			shortestStreak = currStreak;
			shortestStreakNum = currNum;
		}

		currStreak = 1;
		currNum = userInput % 10;

		userInput /= 10;
	}

	std::cout << shortestStreak << "(" << shortestStreakNum << ")";
}
```

</p>
</details>

## Задача 3, Вариант 1
Конкатенация на две естествени числа A и B наричаме числото A ◦ B, което се получава като към цифрите на A "се долепят" цифрите на B.

Суфикс на естествено число k наричаме всяко число m, такова че k = n ◦ m за някое n.

>Забележка: Всяко число е суфикс на себе си!

Казваме, че естествено число е палиндром, ако прочетено от ляво надясно и от дясно наляво е едно и също.  

Въвежда се цяло положително число n. Да се напише програма, която отпечатва всички суфикси на n, които са палиндроми.  


```
Примерен вход: 12343
Примерен изход: 3 343

Примерен вход: 585
Примерен изход: 5 585

Примерен вход: 679
Примерен изход: 9
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	unsigned userValue;
	std::cin >> userValue;

	unsigned step = 1;
	unsigned currNum = 0;
	unsigned numCopy;
	unsigned reversedNum = 0;

	bool isPalindorm;

	while (userValue > 0)
	{
		currNum += (userValue % 10) * step;

		numCopy = currNum;
		while (numCopy > 0)
		{
			reversedNum = reversedNum * 10 + (numCopy % 10);
			numCopy /= 10;
		}

		isPalindorm = reversedNum == currNum;

		if (isPalindorm)
		{
			std::cout << currNum << " ";
		}

		reversedNum = 0;
		step *= 10;
		userValue /= 10;
	}
}
```

</p>
</details>

## Задача 3, Вариант 2
Конкатенация на две естествени числа A и B наричаме числото A ◦ B, което се получава като към цифрите на A "се долепят" цифрите на B.  

Префикс на естествено число k наричаме всяко число n, такова че k = n ◦ m за някое m.

>Забележка: Всяко число е префикс на себе си!  

Казваме, че естествено число е палиндром, ако прочетено от ляво надясно и от дясно наляво е едно и също.  

Въвежда се цяло положително число n. Да се напише програма, която отпечатва всички префикси на n, които са палиндроми.  


```
Примерен вход: 34321
Примерен изход: 343 3

Примерен вход: 585
Примерен изход: 585 5

Примерен вход: 679
Примерен изход: 6
```

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int main()
{
	unsigned userValue;
	std::cin >> userValue;

	unsigned currNum = 0;
	unsigned numCopy;
	unsigned reversedNum = 0;

	bool isPalindorm;

	while (userValue > 0)
	{
		currNum = userValue;

		numCopy = currNum;
		while (numCopy > 0)
		{
			reversedNum = reversedNum * 10 + (numCopy % 10);
			numCopy /= 10;
		}

		isPalindorm = reversedNum == currNum;

		if (isPalindorm)
		{
			std::cout << currNum << " ";
		}

		reversedNum = 0;
		userValue /= 10;
	}
}
```

</p>
</details>