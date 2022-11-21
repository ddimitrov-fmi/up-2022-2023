#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int EXIT_CODE = 0;
const int FRIES_CODE = 1;
const int PIZZA_CODE = 2;
const int BURGER_CODE = 3;
const int BEER_CODE = 4;

const double FRIES_PRICE = 2;
const double PIZZA_PRICE = 3;
const double BURGER_PRICE = 3.5;
const double BEER_PRICE = 6.66;

double multiplierForNewPrice(int dayOfTheWeek, int product)
{
    if (dayOfTheWeek >= 1 && dayOfTheWeek <= 3 && product == FRIES_CODE)
    {
        return 0.9;
    }
    if (dayOfTheWeek == 4 || dayOfTheWeek == 5)
    {
        return 0.75;
    }
    if (dayOfTheWeek == 6 || dayOfTheWeek == 7)
    {
        return 1.3;
    }
    return 1;
}

int readItem()
{
    int product;
    do
    {
        cin >> product;
    } while (product < 0 || product > 4);
    return product;
}

double getPrice(int& product, double& moneyProduct, double productPrice, double percent)
{
    double price = productPrice * percent;
    ++product;
    moneyProduct += price;
    return price;
}

void checkMcDonalds(int day, double money)
{
    int productCode;

    int fries = 0, beer = 0, pizza = 0, burgers = 0;
    double moneyFries = 0, moneyBeer = 0, moneyPizza = 0, moneyBurgers = 0;
    int countProblems = 0;

    double price;

    do
    {
        productCode = readItem();

        if (productCode == EXIT_CODE)
        {
            break;
        }

        double percent = multiplierForNewPrice(day, productCode);
        switch (productCode)
        {
        case FRIES_CODE:
            price = getPrice(fries, moneyFries, FRIES_PRICE, percent);
            break;

        case PIZZA_CODE:
            price = getPrice(pizza, moneyPizza, PIZZA_PRICE, percent);
            break;

        case BURGER_CODE:
            price = getPrice(burgers, moneyBurgers, BURGER_PRICE, percent);
            break;

        case BEER_CODE:
            price = getPrice(beer, moneyBeer, BEER_PRICE, percent);
            break;
        }

        money -= price;
        if (money <= 0)
        {
            countProblems++;
            cout << "You have no money left." << endl;
        }
    } while (countProblems < 3);

    cout << "You have ordered: \n"
        << fries << " fries for " << moneyFries << " leva; \n"
        << pizza << " pizza for " << moneyPizza << " leva; \n"
        << burgers << " burgers for " << moneyBurgers << " leva; \n"
        << beer << " beer for " << moneyBeer << " leva; \n"
        << "Total spent money: " << moneyBeer + moneyPizza + moneyBurgers + moneyFries << '\n';
    cout << "You have " << money << " leva left." << endl;
}

int main()
{
    int day;
    cin >> day;

    double money;
    cin >> money;

    checkMcDonalds(day, money);
    return 0;
}