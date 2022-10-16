#include<iostream>

using std::cout;
using std::cin;
using std::endl;

/* 
Task 6:
    Write a program that reads width and height of a rectangle from the console.
    Print the perimeter and area of the rectangle.
*/

int main()
{
    double width;
    double height;

    cout << "Enter width and height: ";
    cin >> width >> height;

    double perimeter = 2 * (width + height);
    double area = width * height;

    cout << "Perimeter = " << perimeter << "\n";
    cout << "Area = " << area << endl;
    return 0;
}