#include <iostream>

int min(int number1, int number2);

int min(int number1, int number2, int number3, int number4);

int main ()
{
    std::cout << min(5, 6) << std::endl;
    std::cout << min(2, 1, 8, 5) << std::endl;

    return 0;
}

int min(int number1, int number2)
{
    return (number1 < number2 ? number1 : number2);
}

int min(int number1, int number2, int number3, int number4)
{
    return min(min(number1, number2), min(number3, number4));
}