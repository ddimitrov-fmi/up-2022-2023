#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/*
    Enter the coordinates (x,y) of a point (separated by interval).
    Write a program which checks if this point is inside a square
    with vertices (0,0), (2,0), (2,2) and (0,2).
    Print an appropriate message if it is inside, on the contour or outside of the square.
*/

int main()
{
    double x, y;
    cout << "Please, enter the coordinates of your point: ";
    cin >> x >> y;

    if ((x == 0 || x == 2) && (y >= 0 && y <= 2) || (y == 0 || y == 2) && (x > 0 && x < 2))
    {
        cout << "Your point lies on the contour of the square." << endl;
    }
    else
    {
        if (x > 0 && x < 2 && y > 0 && y < 2)
        {
            cout << "Your point lies in the square." << endl;
        }
        else
        {
            cout << "Your point is outside the square." << endl;
        }
    }

    return 0;
}