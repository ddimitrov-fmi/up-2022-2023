# Week 05. Функции

### Синтаксис:
```C++
<returnType> <name> (<parameter1>, <parameter2>, ..., <parameterN>)
{
	//...
}
```
Ако искаме една функция да не връща нищо, то слагаме `<returnType>` да е `void`.

### Разделна декларация и имплементация:
Можем да декларираме функцията и по-късно да я имплементираме. Имаме право да използваме функция само ако е декларирана преди реда, на който искаме да я използваме.
```C++
void print(int number);

int main()
{
    //...
}

void print(int number)
{

}
```

### Оператор return:
Прекратява изпълнението на функцията:
- Връща стойността на израза, указан след 
return, на този, който е извикал функцията
- Ако функцията е void, за прекратяване на изпълнението може да се използва return; (без израз)
- Ако функцията е от тип, различен от void, 
задължително трябва да има return

### Function overloading:
Можем да създадем функции с еднакво име, но с параметри различаващи се по брой и/или тип.
Пример:
```C++
void print(int number)
{
    cout << "The number is: " << number << endl;
}

void print(char symbol)
{
    cout << "The symbol is: " << symbol << endl;
}

void print(int first, int second)
{
    cout << "First number: " << first << '\n'
         << "Second number: " << second << endl;
}
```

### Default arguments:
Можем да зададем стойност по подразбиране на параметри във функция. 
Ако даден параметър има стойност по подразбиране, то и всички следващи трябва да имат.

Примери:
```C++
void printNumbers(int from = 0, int to = 10, int step = 1)
{
    for (int i = from; i <= to; i += step)
    {
        cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    printNumbers();         // prints: 0 1 2 3 4 5 6 7 8 9 10
    printNumbers(5);        // prints: 5 6 7 8 9 10
    printNumbers(3, 5);     // prints: 3 4 5
    printNumbers(1, 10, 2); // prints: 1 3 5 7 9
}
```
### Някои по-сложни примери:
```C++
int x(int = 1, int); // Error: only the trailing arguments can have default values

void f(int n, int k = 1);
void f(int n = 0, int k); // OK: k's default supplied by previous decl in the same scope
void f(int n, int k = 0); // Error: k alredy has a default value.
 
void g(int, int = 7);
```

# Задачи

## :zero: Задача :heavy_check_mark:
Напишете функция, която има за цел да връща прочетено от клавиатурата цяло число.


### Пример:
```C++
Number: 5
Your function has returned the value: 5
```

## :one: Задача :vs:
Напишете функция `max`, която връща по-голямото от две числа.


### Пример:
```C++
Вход: -10 -2
Изход: -2
```

## :two: Задача :abcd::capital_abcd:
Напишете функция, която приема малка буква и връща главна.

### Пример:
```C++
Вход: a
Изход: A
```

## :three: Задача :arrows_clockwise:
Напишете функции `a`, `b`, `c`, като:
- `а` принтира "Enter a", извиква `b` и накрая принтира "Exit a"
- `b` принтира "Enter b", извиква `c` и накрая принтира "Exit b"
- `c` принтира "Best wishes from c < 3"

От main викнете `a`.

## :four: Задача :arrow_up_small:
Напишете две функции `pow`, които приемат като параметри число и неотрицателна целочислена степен и връщат числото повдигнато на степента.
Едната функция да приема число от тип `int`, а другата - от тип `double`

Направете стойността на степента по подразбиране да е `2`.

### Пример
```C++
pow(2); // returns 4
pow(10, 4); // returns 10000
pow(0.5, 3); // returns something equal to 0.125
```

## :five: Задача :left_right_arrow:
Напишете функция, която прочита число в интервал. 
Функцията трябва да чете, докато не се въведе число в посочения интервал.


### Пример:
```C++
Number in range [3,5]: 7
7 is not in [3,5]. Try again: 1
1 is not in [3,5]. Try again: 3
```

## :six: Задача  :triangular_ruler:
Да се напише програма, която извежда върху екрана следния триъгълник по предварително посочен размер:

```C++
Вход: 7
Изход:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
```

## :seven: Задача :1234:
Напишете функция, която приема две числа n и m и връща цифрата на m-та позиция в числото n. 


### Пример:
```C++
Вход: 4210 3
Изход: 4
```

## :eight: Задача :top:
Да се напише програма, която намира най-голямата цифра в дадено число и я повдига на степен броя на срещанията й в това число.

### Пример
```C++
Вход: 1245883
Изход: 64
```

## :nine: Задача :hash:
Да се напише програма, която изтрива от дадено цяло число цифрата на посочена предварително позиция.

### Пример
```C++
Вход: 1245883 4
Изход: 125883
```

## :star: Бонус задача
В МакДоналдс:fries: сте! Тъй като е Black Friday седмицата, всеки ден има различни намаления:
- От понеделник до сряда - картофки са намалени с 10%
- Четвъртък и петък - 25% намаление на всичко
- Събота и неделя - всичко е по-скъпо с 30%

Ценоразписът е следният:
|    Храна       | Картофки:fries: |  Пица:pizza:  |  Бургер:hamburger: | Бира:beer:    |
|:--------------:|:---------------:|:-------------:|:------------------:|:-------------:|
| Цена на бройка | 2 лв.           | 3 лв.         | 3.5 лв.            |     6.66 лв.  |
| Код за поръчка | 1               | 2             | 3                  | 4             |

Програмата трябва да прочете парите с които разполагате и денят от седмицата.
След това програмата трябва да чете поръчки, като за всяка поръчка се въвежда съответния код на поръчка от таблицата.
Трябва да четете вход, докато не се въведе 0.
Ако се въведе друго число се приема за невалидна команда.

Ако са ви свършили парите, но продължавате да поръчвате, програмата ви предупреждава.
На третото предупреждение, програмата спира! (Изхвърлен сте от МакДоналдс)

След приключване на поръчката, програмата ще отпечата касова бележка включваща:
- брой поръчки от всеки вид храна
- обща цена за даден вид храна
- обща платена цена
- останали пари
