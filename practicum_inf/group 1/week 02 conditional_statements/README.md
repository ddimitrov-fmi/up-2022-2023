# Логически оператори. Условни оператори

## Логически оператори

### Оператор || (OR - дизюнкция)
Връща true, ако поне едната стойност е true.
```C++
false || false == false
false || true  == true
true  || false == true
true  || true  == true
```

### Оператор && (AND - конюнкция)
Връща true, ако и двете стойности са true.
```C++
false && false == false;
false && true  == false;
true  && false == false;
true  && true  == true;
```


### Оператор ! (NOT - отрицание)
Унарен оператор - приема само една стойност. Връща противоположната й.
```C++
!true  == false
!false == true
```

### Оператор ^ (XOR - изключващо или)
Връща true, когато двете стойности са различни.
```C++
true  ^ true  -> false
true  ^ false -> true
false ^ true  -> true
false ^ false -> false
```

## Условен оператор if

```c++
if (statement)
{
    // This will execute if statement is true
}
else if (other_statement)
{
    // This will execute if statement is false and other_statement is true
}
else
{
    // This will execute if both statement and other_statement are false
}
```

- else if must follow an if or an else if
- else must be the last thing in the chain

- You can nest ifs

```c++
if (statement1)
{
    // This will execute if statement1 is true
    if (statement2)
    {
        // This will execute if both statement1 and statement2 are true
    }
}
```

## :zero: Задача
Напишете програма, която прочита цяло число. Отпечатайте true, ако числото е 42 и false иначе

### Вход:
```C++
42
```

### Изход:
```C++
true
```

## :one: Задача
Напишете програма, която прочита скорост на превозно средство. Отпечатайте каква ще е глобата, която водачът би получил, при превишена скорост спрямо долната таблица:

| speed | 50 | 70 | 90 | 110 | 130 | 160  |
| :---: | :---: | :---: |:---:  | :---:  |:---:   |:---:    |
| fine:small_red_triangle:  | 0     | 20    | 50    | 150    | 350    | 700

### Вход:
```C++
140
```

### Изход:
```C++
Fine: 350
```


## :two: Задачa
Напишете програма, която прочита три цели числа - страните на триъгълник. Проверете дали съществува триъгълник с такива страни. Ако съществува отпечатайте типа му (равностранен, равнобедрен или разностранен).


### Вход:
```C++
1 1 5
```

### Изход:
````
The entered sides don't form a triangle
````

### Вход:
```C++
2 2 2
```

### Изход:
````C++
Triangle is equilateral
````


## :three: Задача
Напишете задача, която прочита положително число от конзолата. Ако числото е:

- четно, заместете последната му цифра с остатъка при делението на цифрата с 3
- нечетно, заместете последната му цифра с остатъка при делението на цифрата с 2

### Вход:
```C++
Enter a positive integer: 17
```

### Изход:
````
The new number is: 11
````

### Вход:
```C++
Enter a positive integer: 18
```

### Изход:
````
The new number is: 12
````

## :four: Задача
Въвеждане координатите на точка в декартова координатна система. Трябва да проверим дали точката лежи във вътрешността, на контура или извън квадрат с върхове (0,0) (0,2) (2,2) (2,0)

### Вход:
```C++
Enter a positive integer: 18
```

### Изход:
````
The new number is: 12
````

### Вход:
```C++
123
```

### Изход:
```C++
The sum of the digits of 123 is 6
```


## :five: Задача

Прочетете положително число от конзолата. Проверете дали се дели и на трите числа 2, 3, 5. Отпечатайте дали се дели:

- и на трите числа
- на две от тях
- на 1 или николко

### Вход:
```C++
30
```

### Изход:
```C++
30 is divisible by 2, 3 and 5 at the same time.
```

### Вход:
```C++
15
```

### Изход:
```C++
15 is divisible by two of 2, 3 and 5 at the same time.
```

### Вход:
```C++
3
```

### Изход:
```C++
3 is divisible by one or none of the following numbers: 2,3 or 5.
```

### Вход:
```C++
7
```

### Изход:
```C++
7 is divisible by one or none of the following numbers: 2,3 or 5.
```


## :six: Задача
Да се въведат три числа и да се изведат в нарастващ ред

### Вход:
```C++
Enter three numbers: 14 5 9
```

### Изход:
```C++
Ordered: 5, 9, 14
```


## :star: Бонус задача
Дадени са координатите на две шах фигури, проверете дали могат да се вземат една друга.
- 2 кралици
- 2 коня
- 2 топа
- 2 офицера