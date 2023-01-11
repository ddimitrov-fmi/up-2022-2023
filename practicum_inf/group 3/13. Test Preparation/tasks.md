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

## Задача 1
Напишете фунция, която обръща думите в даден низ. Под дума ще разбираме всяка последователност от малки или главни английски букви. Например "evil rats" да се преобразува в "live star".
Функцията да не променя подадения низ, а да връща нов, за който да заделя динамична памет.

```
Примерен вход: evil rats
Примерен изход: live star
```

```
Примерен вход: Step on no pets!
Примерен изход Pets no on step!
```

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