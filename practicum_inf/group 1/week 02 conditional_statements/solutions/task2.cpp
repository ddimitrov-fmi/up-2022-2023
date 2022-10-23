#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int firstSide, secondSide, thirdSide;

    std::cout << "Enter sides: ";
    std::cin >> firstSide >> secondSide >> thirdSide;

    bool isValid = firstSide + secondSide > thirdSide &&
                   firstSide + thirdSide > secondSide &&
                   secondSide + thirdSide > firstSide;

    if (!isValid)
    {
        cout << "The entered sides don't form a triangle" << endl;
    }
    else if (firstSide == secondSide && secondSide == thirdSide)
    {
        cout << "Triangle is equilateral" << endl;
    }
    else if (firstSide != secondSide && firstSide != thirdSide && secondSide != thirdSide)
    {
        cout << "Triangle is multifaceted" << endl;
    }
    else
    {
        cout << "Triangle is isosceles" << endl;
    }

    return 0;
}
