# Structures Tasks

## Задача 0
 За структурата Product(изделие), декларирана по следния начин:

 ```c++

 struct Product{
     char description[32];  // описание на изделие
     int partNum;           // номер на изделие
     double cost;           // цена на изделие
 };

 ```

Да се извършат следните действие:
<br>
* а) Да се създадат две изделия и да се инициализират чрез следните данни:

<br>

<table style="width:100%; border:1px solid white;">
  <tr>
    <th>description</th>
    <th>partNum</th>
    <th>cost</th>
  </tr>
  <tr>
    <td>screw-driver</td>
    <td>456</td>
    <td>5.50</td>
  </tr>
  <tr>
    <td>hammer</td>
    <td>324</td>
    <td>8.20</td>
  </tr>
</table>
<br>

* б) Да се изведат на екрана компонентите на двете изделия, дефинирани в а)
* в) Да се дефинира масив от 10 структури Product. Да не се инициализира масивът.
* г) Да се напише оператор за цикъл, който инициализира масива, дефиниран във в) чрез нулевите за съответните типове на полетата на Product стойности.
* д) Да се дефинира масив от 5 структури Product и да се инициализира чрез стойностите:

<br>

<table style="width:100%; border:1px solid white;">
  <tr>
    <th>description</th>
    <th>partNum</th>
    <th>cost</th>
  </tr>
  <tr>
    <td>screw-driver</td>
    <td>456</td>
    <td>5.50</td>
  </tr>
  <tr>
    <td>hammer</td>
    <td>324</td>
    <td>8.20</td>
  </tr>
   <tr>
    <td>socket</td>
    <td>458</td>
    <td>5.75</td>
  </tr>
   <tr>
    <td>plier</td>
    <td>929</td>
    <td>10.50</td>
  </tr>
   <tr>
    <td>hand-saw</td>
    <td>536</td>
    <td>7.45</td>
  </tr>
</table>

<br>

* е) Да се изведе на екрана масивът, дефиниран в д).

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

struct Product {
	char description[32];  // описание на изделие
	int partNum;           // номер на изделие
	double cost;           // цена на изделие
};

void printProduct(const Product& p)
{
	std::cout << p.description << " " << p.partNum << " " << p.cost << "\n";
}

int main()
{
	// а)
	Product screwDriver{ "screw-driver", 456, 5.50 };
	Product hammer{ "hammer", 324, 8.20 };

	// б)
	printProduct(screwDriver);
	printProduct(hammer);
	std::cout << "\n";

	// в)
	const int PRODUCTS_SIZE = 10;
	Product manyProducts[PRODUCTS_SIZE] = {};

	// г)
	for (int i = 0; i < PRODUCTS_SIZE; i++)
	{
		manyProducts[i].description[0] = '\0';
		manyProducts[i].partNum = 0;
		manyProducts[i].cost = 0;
	}

	// д)
	Product moreProducts[5] =
	{
		{ "screw-driver", 456, 5.50 },
		{ "hammer", 324, 8.20 },
		{ "socket", 458, 5.75 },
		{ "piler", 929, 10.50 },
		{ "hand-saw", 536, 7.45 }
	};

	// е)
	for (int i = 0; i < 5; i++)
	{
		printProduct(moreProducts[i]);
	}
}
```

</p>
</details>

## Задача 1
Да се дефинират структурите: Person, определяща лице по собствено име и фамилия и Client, определяща клиент като лице, притежаващо банкова сметка с дадена сума. Да се дефинират функции, които въвеждат и извеждат данни за лице и клиент. Да се напише програма, която:
* а) въвежда имената и банковите сметки на множеството от клиенти, зададено чрез едномерен масив;
* б) извежда имената и банковите сметки на клиентите от множеството;
* в) намира сумата от задълженията на клиентите от множеството.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

struct Person
{
	char name[32];
	char surname[32];
};

struct Client
{
	Person user;
	double balance;
};

void printPerson(const Person& p)
{
	std::cout << p.name << " " << p.surname << "\n";
}

// а)
void printClient(const Client& c)
{
	printPerson(c.user);
	std::cout << "Balance: " << c.balance << "\n";
}

// б)
void enterClient(Client& c)
{
	std::cin >> c.user.name;
	std::cin >> c.user.surname;
	std::cin >> c.balance;
}

// в)
int getBalanceSum(const Client* c, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += c[i].balance;
	}

	return sum;
}

int main()
{
	Client c;

	enterClient(c);
	printClient(c);
}
```

</p>
</details>

## Задача 2
Да се напише функция, която сортира динамично заделен масив по подаден предикат.

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

void swap(int& x, int& y)
{
	x ^= y;
	y ^= x;
	x ^= y;
}

void sort(int* arr, int size, bool (*pred)(int x, int y))
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (pred(arr[i], arr[j]))
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

bool isDescending(int a, int b)
{
	return a > b;
}

int main()
{
	int arr[10] = { 2, 5, -2, 3, 19, 22, 32, 99, 7, -99 };

	// Sorts in ascending order
	sort(arr, 10, isDescending);

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	// Puts the even numbers first then the others
	sort(arr, 10, [](int x, int y) -> bool { return x % 2 != 0; });

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
}
```

</p>
</details>

## Задача 3
Да се напише програма, която по подадено число намира колко броя единици има в двоичното му представяне.

> Внимания: Не преобразувайте числото в двоично!

<details><summary><b>Solution</b></summary> 
<p>

```cpp
#include <iostream>

int howManyOnesInBinary(int x)
{
	int count = 0;

	while (x != 0)
	{
		count += (x & 1);
		x = x >> 1;
	}

	return count;
}

int main()
{
	int userInput;
	std::cin >> userInput;

	std::cout << howManyOnesInBinary(userInput);
}
```

</p>
</details>