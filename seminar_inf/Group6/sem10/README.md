## Задача 1

Да се имплементират следните функции:<br>
-strlen()<br>
-strcpy()<br>
-strcmp()<br>
-strcat()<br>
-функция, която по подадени низ, индекс за начало и брой елементи, връща съответната част от масива

## Задача 2

Да се напише функция, която извежда на стандартния изход всички думи на низ.

## Задача 3

Да се напише функция, която разширява динамично заделен масив с n на брой клетки.

## Задача 4

Да се дефинира функцията __bool commonel (int \*arrays[],int npointers, int arrlengths[])__. Масивът arrays съдържа npointers на брой указатели към масиви от цели числа. i-тият масив има големина arrlengths[i].
Функцията да връща истина, ако има поне едно число x, което е елемент
на всички масиви.

## Задача от второ контролно по УП-практикум на ИС 2020/2021

Задачата е проста - ще получите списък с песни под формата на текст, който да прочетете.
Създайте масив от низове, в който да запишете песните поотделно. Разделяйте по ;<br>
Изведете песните в обратен ред, а на тази с най-дълго заглавие, сортирайте буквите азбучно.<br>
Пример 1:<br>
Du hast - Rammstein; Wind of change - Scorpions; Az iskam - Revoluciq Z; Hipnoza - Divna;
Habibi - Мohombi Costi Shaggy Faydee; Can't let you go - Rainbow; Dneven red - RDMK; Cvete moe - Ku ku band<br>
Ще изкара песните в обратен ред , а Can't let you go ще бъде сортирана:<br>
аaаbcegilnnooorttuwy<br>
Пример 2:<br>
Toccata and fugue in D minor - Bach; Lazha e – Preslava; Chernova – Ogi 23 Dicho; Fira – Wosh MC;
Fireball – Pitbull; Girls like you – Maroon 5; This summer's gonna hurt like a motherfucker – Maroon 5<br>
Ще изкара песните в обратен ред , а This summer's gonna hurt like a motherfucker ще бъде сортирана: <br>
aaceeeefghhhiiklmmmnnorrrrsstttuuu<br>
**Премахнато е условието, в което извеждането на песните в обратен ред да е рекурсивно**
