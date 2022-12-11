#include <iostream>

const int MAX_SIZE = 1024;	// 2048 за втори вариант 2 задача

void checkNumberDivisorsAndDivisibles(bool* arr, unsigned n, int userNumber)
{
    if (userNumber == 0)
        return;

    for (unsigned i = 1; i <= n; i++)
    {
        if ((userNumber % i == 0 || i % userNumber == 0))
            arr[i] = true;
    }
}

int main()
{
    unsigned n;
    std::cout << "Insert n: \n";
    do
    {
        std::cin >> n;
    } while (n < 0 || MAX_SIZE <= n);

    //an array holding values for each number
    //      true - if it is a divisor or is divisible by one of the user numbers
    //      false - if it is not -> therefore should be printed at the end
    bool divisionNumbers[MAX_SIZE] = { false };

    int userNumber = -1;
    while (userNumber != 0)
    {
        std::cin >> userNumber;
        checkNumberDivisorsAndDivisibles(divisionNumbers, n, userNumber);
    }

    for (unsigned i = 1; i <= n; i++)
    {
        if (!divisionNumbers[i])
            std::cout << i << ' ';
    }

    return 0;
}