# Assignments

## Task 1
Намерете всички пермутации на думата `"rat"`.
*Бонус да се намерят пермутациите на произволна дума с максимална дължина 10*

## Task 2
Дадена e матрица от `char`-ове с размер 10х10, начална точка `start` с координати `x1, y1` и крайна точка `end` с координати `x2, y2`. Намерете има ли път от точка `start` до точка `end`.

### Примерна матрица:   
```
1 1 o o o 1 1 1 o o   
S 1 o o 1 o o o o E   
o 1 1 o o o 1 o o 1   
o o 1 o o 1 1 1 o 1   
o o o o 1 1 o 1 o o   
o 1 o o o 1 1 1 o 1   
o o o 1 o o o o o 1   
1 1 o 1 o o o 1 o 1   
1 o o o o 1 1 1 1 1   
1 1 1 o o o 1 o o o
```
- o - път
- 1 - стена

## Task 2.1
Изведете на конзолата пътя от `start` до `end` като последователност от координати.

## Task 2.2 
Намерете броя на "островите" в матрицата. Остров ще наричаме всяка свързана последователност от 1-ци. **Могат да са свързани и по диагонал.**

## Task 3
По подадено число **N** да се намери валидно разположение на **N** на брой царици върху шахматна дъска с размери **NxN** така, че нито една от тях да не *атакува* друга царица. Да се изведе на екрана резултатната матрица **АКО съществува такава**. В противен случай изведете подходящо съобщение.

# Additional Assignments

## Task 1. 
Дадена е квадратна матрица с размери nxn, n която описва лабиринт. Стойност 0 в дадена клетка означава „стена“, стойност 1 означа „свободно място за движение“. Даден е низ съдържащ само буквите E(east), W(west), N(north) и S(south), които указват едностъпкови придвижвания в съответните географски посоки. Да се напише функция, която проверява дали даденият низ е валиден път от някоя проходима клетка в лабиринта до долния десен ъгъл в лабиринта.

## Task 2. 
Дадена е мрежа Gr от 𝑚 × 𝑛 (𝑚,𝑛 ∈ [2;20]) квадратчета. Във всяко квадратче на мрежата е записано естествено число. Дадени са също две произволни квадратчета k1 и k2 в мрежата. Ацикличен път между две квадратчета е всяка редица от различни съседни във вертикано или хоризонтално направление квадратчета, започваща от началното и завършваща в крайното квадратче. Да се дефинира рекурсивна функция, която проверява, дали съществува ацикличен път от K1 до K2 в Gr, който представлява аритметична прогресия с разлика d.
``` 
Пример. Ако Gr има вида:
12 1.  19  2  10  11
4  3.  11  8  8   19
9  5.  7.  9. 11. 13.
14 16  8   10 11  19
k1 = Gr[0][1], k2 = Gr[2][5], съществува ацикличен път, който е аритметична прогресия с разлика 2.
```

## Task 3. 
Дадена е квадратна матрица A от 𝑛 × 𝑛 символи, 𝑛 ∈ [2;20]. Да напише функция, която сортира редовете на матрицата във възходящ ред според числата, които могат да се прочетат в тях. Числото е последователност от цифри, възможно е да има водещ знак. Ако не може да бъде прочетено число, да се подразбира 0.
> Числата и техните знаци винаги са в началото на реда.

Пример:
| s | + | 1 | 2 | (0)  |
|---|---|---|---|------|
| + | 3 | f | o | (3)  |
| 1 | t | h | 3 | (1)  |
| - | 2 | f | i | (-2) |

Изход:
| - | 2 | f | i | (-2) |
|---|---|---|---|------|
| s | + | 1 | 2 | (0)  |
| 1 | t | h | 3 | (1)  |
| + | 3 | f | o | (3)  |

## Task 4.** Разходката на Коня
Представяме си шахматна дъска 𝑛 × 𝑛, коня е поставен на квадратчето с позиция (0,0) и може да се мести само на позициите позволени в шаха, посещавайки всяко квадратче **точно** веднъж. Напишете програма, която намира такава разходка и слага на мястото на съответното квадратче, поредния номер на текущия ход (валиден такъв). 
<img allign="center" src="https://i1.wp.com/algorithms.tutorialhorizon.com/files/2015/05/Path-follwed-by-Knight-to-cover-all-the-cells-1.png">