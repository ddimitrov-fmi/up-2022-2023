#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char flower_type;
    double total_price;
    unsigned int quantity;
    double budget;

    cout << "Please, enter the budget for their garden: ";
    cin >> budget;

    cout << "Please, enter the quantity of flowers Neli wants: ";
    cin >> quantity;

    cout << "Please, enter the first letter of the type of flowers Neli wants (R, D, T, N, G): ";
    cin >> flower_type;

    switch (flower_type)
    {
    case 'R':
        total_price = quantity * 5;
        if (quantity > 80)
        {
            total_price *= 0.9;
        }
        break;

    case 'D':
        total_price = quantity * 3.8;
        if (quantity > 90)
        {
            total_price *= 0.85;
        }
        break;

    case 'T':
        total_price = quantity * 2.8;
        if (quantity > 80)
        {
            total_price *= 0.85;
        }
        break;

    case 'N':
        total_price = quantity * 3;
        if (quantity < 120)
        {
            total_price *= 1.15;
        }
        break;

    case 'G':
        total_price = quantity * 2.5;
        if (quantity < 80)
        {
            total_price *= 1.2;
        }
        break;

    default:
        cout << "In the shop there is no such flower." << endl;
    }

    if (budget >= total_price)
    {
        cout << "You have enough money! Let's start working on it! \n";
        cout << std::fixed << std::setprecision(2) << "You are left with "
             << (budget - total_price) << " leva. \n";
    }
    else
    {
        cout << "You don't have enough money. :( \n";
        cout << std::fixed << std::setprecision(2) << "You need "
             << (total_price - budget) << " more leva. \n";
    }

    return 0;
}