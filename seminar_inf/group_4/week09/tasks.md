# Увод в програмирането семинар

## Задача 1

Принтирайте на екрана ASCII таблицата до 255-тия символ.

## Задача 2

Да се имплементират безопасни версии на функциите `strlen`, `strcmp`, `strcpy`, `strcat` и `strstr` от библиотеката cstring.
Безопасните функции не трябва нито да четат, нито да пишат извън границите на масивите от символи, с които работят.
При записване на символни низове или целият низ трябва да бъде записан, или да не бъде записан изобщо.

**Забележка:** `strcpy` и `strcat` трябва да имат валидно поведение, когато дестинацията е с по-малък размер от първоначалните данни. (примерно да запишат само колкото могат, или да не записват изобщо нищо)

## Задача 3

Да се напише функция, която по даден символен низ заменя главните букви в него с малки и малките с главни.