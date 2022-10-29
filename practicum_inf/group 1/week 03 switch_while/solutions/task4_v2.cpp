#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number;
    int reversed_number = 0;

    cout << "Number: ";
    cin >> number;

    cout << "Reversed number: ";

    while (number > 0)
    {
        reversed_number *= 10;
        reversed_number += (number % 10);
        number /= 10;
    }

    cout << reversed_number << endl;
    return 0;
}