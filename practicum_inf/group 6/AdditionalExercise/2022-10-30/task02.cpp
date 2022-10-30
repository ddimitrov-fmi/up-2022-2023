#include <iostream>

/*
Въведете година от конзолата. Отпечатайте на екрана дали годината е високосна. Една година е високосна, ако:

се дели на 4 и не се дели на 100
се дели на 400
*/

int main ()
{
    unsigned int year;
    std::cin >> year;

    bool firstCondition = (year % 4 == 0 && year % 100 != 0);
    bool secondCondition = (year % 400 == 0);
    bool isLeap = firstCondition || secondCondition;

    std::cout << "The year " << (isLeap ? "is" : "isn't") << " leap" << std::endl;

    return 0;
}