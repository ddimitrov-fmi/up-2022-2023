#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//work smarter not harder

int main()
{
    int number;

    cout << "Number: ";
    cin >> number;

    cout << "Reversed number: ";

    while (number > 0)
    {
        cout << number % 10;
        number /= 10;
    }

    cout << endl;
}