#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Using ternary operator
int max(int first, int second)
{
    return first > second ? first : second;
}

// Without using ternary operator
int maxNum(int first, int second)
{
    if (first > second)
    {
        return first;
    }
    return second;
}

int main()
{
    int first, second;
    cin >> first >> second;

    cout << max(first, second) << endl;

    return 0;
}