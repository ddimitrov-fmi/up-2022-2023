#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int first, second, third;
    cin >> first >> second >> third;

    int max, mid, min;
    if (first >= second && first >= third)
    {
        max = first;
        if (second >= third)
        {
            mid = second;
            min = third;
        }
        else
        {
            mid = third;
            min = second;
        }
    }
    else if (second >= third)
    {
        max = second;
        if (first >= third)
        {
            mid = first;
            min = third;
        }
        else
        {
            mid = third;
            min = first;
        }
    }
    else
    {
        max = third;
        if (first >= second)
        {
            mid = first;
            min = second;
        }
        else
        {
            mid = second;
            min = first;
        }
    }

    cout << "Ordered: "
         << min << ", "
         << mid << ", "
         << max << endl;

    return 0;
}