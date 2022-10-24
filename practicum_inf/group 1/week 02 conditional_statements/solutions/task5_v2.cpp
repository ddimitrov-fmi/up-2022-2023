#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/*
    Read a positive integer from the console.
    Check if it is divisible by all of the following numbers: 2,3 and 5
    or by any 2 of them at the same time.
    Print an appropriate message on the screen.
*/

int main()
{
    unsigned int num;
    cout << "Please, enter a positive integer. ";
    cin >> num;

    bool isDivisibleBy2 = num % 2 == 0;
    bool isDivisibleBy3 = num % 3 == 0;
    bool isDivisibleBy5 = num % 5 == 0;

    cout << num;
    if (isDivisibleBy2 && isDivisibleBy3 && isDivisibleBy5)
    {
        cout << " is divisible by 2,3 and 5 at the same time." << endl;
    }
    else if (isDivisibleBy2 + isDivisibleBy2 + isDivisibleBy2 == 2)
    {
        cout << " is divisible by two of 2,3 and 5 at the same time." << endl;
    }
    else
    {
        cout << " is divisible by one or none of the following numbers: 2,3 or 5." << endl;
    }

    return 0;
}