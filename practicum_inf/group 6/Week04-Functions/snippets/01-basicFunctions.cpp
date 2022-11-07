#include <iostream>

bool isPalindrom(int number); // declaration

int factorial(int number);

void printDate(int day, int month, int year);

void printWithLeadingZero(int number);

int max(int number1, int number2);

int max(int number1, int number2, int number3);

int main ()
{
    std::cout << std::boolalpha << isPalindrom(2345432) << std::endl;
    std::cout << std::boolalpha << isPalindrom(1111222) << std::endl;

    std::cout << factorial(5) << std::endl;

    printDate(11, 6, 2001);

    std::cout << max(2, 5) << std::endl;
    std::cout << max(2, 5, 8) << std::endl;
    
    return 0;
}

bool isPalindrom(int number) // definition
{
    int opposite = 0;
    int temp = number;

    while (temp) 
    {
        int lastDigit = temp % 10;

        opposite *= 10;
        opposite += lastDigit;

        temp /= 10;
    }

    return number == opposite;
}

int factorial(int number)
{
    int result = 1;

    for (int i = 1; i <= number; ++i)
    {
        result *= i;
    }

    return result;
}

void printDate(int day, int month, int year)
{
    printWithLeadingZero(day);
    std::cout << ".";
    printWithLeadingZero(month);
    std::cout << "." << year << std::endl;
}

void printWithLeadingZero(int number)
{
    std::cout << (number < 10 ? "0" : "") << number;
}

int max(int number1, int number2)
{
    return (number1 > number2 ? number1 : number2);
}

int max(int number1, int number2, int number3)
{
    return max(max(number1, number2), number3);
}