#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int readNum()
{
    int number;

    cout << "Number: ";
    cin >> number;

    return number;
}

int main()
{
    cout << "Your function has returned the value: " << readNum();
    return 0;
}