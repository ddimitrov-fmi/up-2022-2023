#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>

using std::cout;
using std::cin;
using std::endl;

/* 
Task 7:
    Write a program that reads the radius of a circle.
    Find the circumference(perimeter) and area of the circle.
    Round them to two places(for example 12.5664 should become 12.57)
    Print the results on the console.
*/

int main()
{
    double radius;
	cout << "Radius: ";
	cin >> radius;

	double circumference = radius * radius * M_PI;
    double area = 2 * radius * M_PI;

    //Adding 0.5 to round to the nearest integer
    circumference = ((int)(circumference * 100 + 0.5)) / 100.0;
    area = ((int)(area * 100 + 0.5)) / 100.0;
    
	cout << "circumference = "<< circumference << "\n";
	cout << "Area = " << area << endl;
    return 0;
}