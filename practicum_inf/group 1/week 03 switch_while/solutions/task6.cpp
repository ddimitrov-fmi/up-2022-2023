#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number;
    int converted_number = 0;
    int power_of_ten = 1;
    int remainder;

    cout << "Number: ";
    cin >> number;

    while (number != 0)
    {
        remainder = number % 2;
        converted_number += remainder * power_of_ten;
        power_of_ten *= 10;
        number /= 2;
    }

    cout << converted_number;
    return 0;
}