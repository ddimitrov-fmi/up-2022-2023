# Week 04. For loop

## :warning: Насоки :boom: 

- Давайте смислени имена на променливите си
- Целете се към максимално спазване на чист код 
- Правете валидация на входните си данни

## :zero: Задача :triangular_ruler:
Напишете програма, която прочита размер `size` и символ `ch`.
Изведете правоъгълен триъгълник с катети с размер `size` изрисуван със символа `ch`.


### Вход:
```C++
Size: 5
Character: ~
```

### Изход:
```C++
~
~ ~
~ ~ ~
~ ~ ~ ~
~ ~ ~ ~ ~
```

## :one: Задача :video_game::dart:
Напишете игра за познаване на тайно число, която се играе от двама играчи.

Първият въвежда естествено число, след което на екрана се принтират 50 празни реда, за да се скрие числото.
Вторият играч въвежда числа, докато не познае. При въвеждане на число да се извежда едно от следните съобщения:

- Ако числото е по-малко от тайното да се отпечата `The secret number is bigger than <current_guess>`.
- Ако числото е по-голямо от тайното да се отпечата `The secret number is smaller than <current_guess>`.
- Ако играчът познае тайното число да се отпечата:
```C++
Congratulations! You guessed that <secret_number> is the secret number. 
It took you <number_of_guesses> tries.
```
Където `<secret_number>` е тайното число, а `<number_of_guesses>` е броя опити. 
След като игргачът е познал числото, играта приключва.
## :two: Задача :office:
Напишете програма, която извежда на конзолата номерата на стаите в една сграда (в низходящ ред), като са изпълнени следните условия:

- На всеки четен етаж има само офиси;

- На всеки нечетен етаж има само апартаменти;

- Всеки апартамент се означава по следния начин : `А{номер на етажа}{номер на апартамента}`, номерата на апартаментите започват от 0;

- Всеки офис се означава по следния начин : `О{номер на етажа}{номер на офиса}`, номерата на офисите също започват от 0;

- На последният етаж винаги има апартаменти и те са по-големи от останалите, затова пред номера им пише `L`, вместо `А`. Ако има само един етаж, то има само големи апартаменти!

От конзолата се прочитат две цели числа - броят на етажите и броят на стаите за един етаж.

### Вход:
```C++
Floors: 6
Number of appartments for each floor: 4
```

### Изход:
```C++
L60 L61 L62 L63 
A50 A51 A52 A53 
O40 O41 O42 O43 
A30 A31 A32 A33 
O20 O21 O22 O23 
A10 A11 A12 A13
```
## :three: Задача :top:
Въведете естествено число и отпечатайте коя е най-голямата му цифра и колко пъти се среща.

### Вход:
```C++
Number: 1242063817
```

### Изход:
```C++
Biggest digit: 8
Count: 1
```

### Вход:
```C++
Number: 555
```

### Изход:
```C++
Biggest digit: 5
Count: 3
```
## :four: Задача :koko:
Да се напише програма, която проверява дали всички цифри в едно естествено число са еднакви и да изведе подходящо съобщение на екрана.

### Вход:
```C++
Number: 515
```

### Изход:
```C++
No
```

### Вход:
```C++
Number: 7777
```

### Изход:
```C++
Yes
```

## :five: Задача :1234:
Да се напише програма, която изпечатва всички четирицифрени числа, съдържащи само четни цифри.


## :six: Задача :signal_strength:
Дадени са целите числа `a` и `b` (0 <= а <= b). 
Да се напише програма, която извежда на екрана всички цели числа от интервала [a, b], 
цифрите на които образуват монотонно растяща редица. Да се валидира входът 
(да се четат `a` и `b` докато не се въведат коректно).

### Вход
```C++
a = 5
b = 4
a = 5
b = 9
```

### Изход
```C++
5 6 7 8 9
```

### Вход
```C++
a = 2650
b = 3000
```

### Изход
```C++
2666 2667 2668 2669 2677 2678 2679 2688 2689 2699 2777 2778 2779 2788 2789 2799 2888 2889 2899 2999
```

## :seven: Задача :black_square_button:
Да се напише програма, която чертае квадрат от `*` с размер на страната въведен от клавиатурата. Нека квадратът е изпълнен само под главния диагонал.


### Вход:
```C++
Size: 8
```

### Изход:
```C++
* * * * * * * * 
*             *
* *           *
* * *         *
* * * *       *
* * * * *     *
* * * * * *   *
* * * * * * * *
```