#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number;
    int remainder;

    cout << "Number: ";
    cin >> number;

    remainder = number % 7;

    switch (remainder)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 0:
        cout << "Sunday";
        break;
    default:
        cout << "Wrong input data.";
    }

    return 0;
}