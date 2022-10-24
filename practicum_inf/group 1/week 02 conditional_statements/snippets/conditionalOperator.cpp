// C++ code demonstrating the syntax of if and if - else if - else operators
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/*
if (statement)
{
    // This will execute if statement is true
}
else if (other_statement)
{
    // This will execute if statement is false and other_statement is true
}
else
{
    // This will execute if both statement and other_statement are false
}
*/

int main()
{
    int x, y;
    cin >> x >> y;

    if (x > 0)
    {
        if (y > 0)
        {
            cout << "First quadrant";
        }
        else if (y < 0)
        {
            cout << "Fourth quadrant";
        }
        else
        {
            cout << "Ox";
        }
    }
    else if (x < 0)
    {
        if (y > 0)
        {
            cout << "Second quadrant";
        }
        else if (y < 0)
        {
            cout << "Third quadrant";
        }
        else
            cout << "Oy";
    }
    else // x is 0
    {
        if (y != 0)
        {
            cout << "Ox";
        }
        else
        {
            cout << "O(0, 0)";
        }
    }

    return 0;
}