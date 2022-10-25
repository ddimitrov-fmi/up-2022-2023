# Switch. While

## :zero: Задача
Въведете цяло, неотрицателно число от клавиатурата. Спрямо остатъка му при деление на 7, изпишете съответния ден от седмицата :calendar:.

### Вход:
```C++
Number: 35
```

### Изход:
```C++
Sunday
```

### Вход:
```C++
Number: 12
```

### Изход:
```C++
Friday
```

## :one: Задача :cherry_blossom::cherry_blossom::cherry_blossom:
Пешо и Нели си купуват къща недалеч от Бургас. Нели толкова много обича цветята, че Ви убеждава да напишете програма, която да изчисли колко ще им струва, за да засадят определен брой цветя и дали наличния бюджет ще им бъде достатъчен. Различните цветя са на различни цени на бройка:
|    Вид цветя   | Рози :rose: |  Далии:bouquet:  |  Лалета:tulip: | Нарциси:hibiscus: | Слънчоглед:sunflower: |
|:--------------:|:-----------:|:----------------:|:--------------:|:-----------------:|:---------------------:|
| Цена на бройка | 5лв.        | 3.80лв.          | 2.80лв.        |             3лв.  |  2.50лв.              |
### Вход:
```C++
Please, enter the budget for their garden: 250
Please, enter the quantity of flowers Neli wants: 55
Please, enter the first letter of the type of flowers Neli wants (R, D, T, N, G): R
```

### Изход:
```C++
You don't have enough money. :(
You need 25.00 more leva.
```

### Вход:
```C++
Please, enter the budget for their garden: 260
Please, enter the quantity of flowers Neli wants: 88
Please, enter the first letter of the type of flowers Neli wants (R, D, T, N, G): T
```

### Изход:
```C++
You have enough money! Let's start working on it!
You are left with 50.56 leva.
```

### Вход:
```C++
Please, enter the budget for their garden: 360
Please, enter the quantity of flowers Neli wants: 119
Please, enter the first letter of the type of flowers Neli wants (R, D, T, N, G): N
```

### Изход:
```C++
You don't have enough money. :(
You need 50.55 more leva.
```

## :two: Задача :trophy:
Колегите на Пешо скоро започнаха да играят лига, по-долу е дадена актуална информация за level-a на всеки от тях. Пешо тайно е започнал също да играе и иска да провери от кои от колегите си е по-силен(има ≥ level). Напишете програма, която прочита level-a на Пешо и му казва от кои колеги е по-силен. (Използвайте switch).
| Име             | Павел | Петър  | Стела  | Иван  | Мария | Анна  |
| :-------------: | :---: | :---:  | :---:  |:---:  | :---: | :---: |
| Level           | 19    | 17     | 14     | 13    | 12    | 10    |

### Вход:
```C++
Level: 16
```

### Изход:
```C++
You are stronger than Stella
You are stronger than Ivan
You are stronger than Maria
You are stronger than Anna.
```

### Вход:
```C++
Level: 3
```

### Изход:
```C++
You are the weakest ;(
```

## :three: Задача :hash:
Въведете число и изведете броя на цифрите му.

### Вход:
```C++
Number: 123456
```

### Изход:
```C++
The number of digits of 123456 is 6
```

## :four: Задача :leftwards_arrow_with_hook:
Въведете число и изведете цифрите му в обратен ред

### Вход:
```C++
Number: 123456
```

### Изход:
```C++
Reversed number: 654321
```

## :five: Задача :1234:
Напишете програма, която чете цели числа до въвеждане на 0. 
Изведете сборът на всички въведени числа

### Вход:
```C++
Enter numbers to sum. To stop enter 0:
1 2 3 4 5 0
```

### Изход:
```C++
The sum of the numbers is 15.
```

### Вход:
```C++
Enter numbers to sum. To stop enter 0:
3 6 0
```

### Изход:
```C++
The sum of the numbers is 9.
```

## :six: Задача :arrows_counterclockwise:
Създайте калкулатор, който превръща число, въведено от потребителя в десетична система, в двоична бройна система.

### Вход:
```C++
Number: 73
```

### Изход:
```C++
1001001
```

### Вход:
```C++
Number: 16
```

### Изход:
```C++
10000
```