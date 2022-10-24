#include <iostream>

int main()
{
    // Example 1 -----------------------------------------------------------------------------------------------------------------------

    int age;
    std::cin >> age;

    if (age >= 18) // 1
    {
        std::cout << "Adult\n";
    }
    else
    {
        std::cout << "Minor\n";
    }

    std::cout << (age >= 18 ? "He is adult!\n" : "He is minor!\n"); // 2
    std::cout << (age >= 18) << std::endl;                          // 3

    // Example 2 -----------------------------------------------------------------------------------------------------------------------

    int number;
    std::cin >> number;

    if ((number % 2 == 0) && (number % 3 == 0) && (number % 5 == 0))
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }

    // Example 3 -----------------------------------------------------------------------------------------------------------------------

    char symbol;
    std::cin >> symbol;
    bool isDigit = (symbol >= '0' && symbol <= '9');
    std::cout << std::boolalpha << isDigit;

    // Example 4 -----------------------------------------------------------------------------------------------------------------------

    int dayOfWeek;
    std::cin >> dayOfWeek;

    switch (dayOfWeek)
    {
    case 1:
        std::cout << "It's Monday!\n";
        break;
    case 2:
        std::cout << "It's Tuesday!\n";
        break;
    case 3:
        std::cout << "It's Wednesday!\n";
        break;
    case 4:
        std::cout << "It's Thursday!\n";
        break;
    case 5:
        std::cout << "It's Friday!\n";
        break;
    case 6:
        std::cout << "It's Saturday!\n";
        break;
    case 7:
        std::cout << "It's Sunday!\n";
        break;
    default:
        std::cout << "Wrong day of week!\n";
        break;
    }

    return 0;
}