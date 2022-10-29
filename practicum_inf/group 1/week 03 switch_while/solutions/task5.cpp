#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num;
    int sum = 0;

    cout << "Enter numbers to sum. To stop enter 0: ";
    cin >> num;

    while (num != 0)
    {
        sum += num;
        cin >> num;
    }

    cout << "The sum of the numbers is " << sum << endl;
    return 0;
}