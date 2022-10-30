#include <iostream>

const unsigned int DAILY_LIMIT = 15;

int main ()
{
    double moneyForBreakfastAndLunch;
    
    std::cin >> moneyForBreakfastAndLunch;

    if (moneyForBreakfastAndLunch < 0 || moneyForBreakfastAndLunch > DAILY_LIMIT)
    {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    double moneyForDinner = DAILY_LIMIT - moneyForBreakfastAndLunch;

    if (moneyForDinner <= 15 && moneyForDinner >= 10)
    {
        std::cout << "Pizza";
    }
    else if (moneyForDinner > 5)
    {
        std::cout << "Doner";
    }
    else if (moneyForDinner > 3)
    {
        std::cout << "University cafeteria";
    }
    else
    {
        std::cout << "Hungry Gosho";
    }

    std::cout << std::endl;

    return 0;
}