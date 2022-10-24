#include <iostream>
using namespace std;

int main()
{
    /*
    //task1

    int x,y;
    cin >> x>>y;
    cout <<(bool) (x > y);
    */

    /*
    //task2

    int x;
    cin >> x;
    bool isEven = x % 2 == 0;
    cout << isEven;
    */

    /*
    //task3

    int x;
    cin >> x;
    cout << (bool)(x % 2 == 0 && x % 3 == 0 && x % 5 != 0);
    */

    /*
    //task4

    int x, y;
    cin >> x >> y;
    cout << (bool)(y == 2 * x + 5);
    */

    /*
    //task5

    int x;
    cin >> x;
    cout << (bool)(x % 10 == x / 1000 % 10 && x / 10 % 10 == x / 100 % 10);
    */

    /*
    //task6

    int x, y;
    cin >> x >> y;
    cout << (bool)(x * x + y * y <= 36);
    */

    /*
    //task7

    int x;
    cin >> x;
    cout << (bool)(x != 0 && !(x & (x - 1)));
    */

    /*
    //task 8

    int a, b;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << "  " << b;
    return 0;
    */

    /*
    //task 9
    int number;
    cin >> number;

    if (number < 1000 || number > 9999) //if its not a 4 digit number we end the program
    {
        return 0;
    }

    int digit1, digit2, digit3, digit4;

    //separating the digits of the number
    digit4 = number % 10;
    digit3 = (number / 10) % 10;
    digit2 = (number / 100) % 10;
    digit1 = number / 1000;

    bool allUnique = (digit1 != digit2 && digit1 != digit3 && digit1 != digit4) &&
                     (digit2 != digit3 && digit2 != digit4) &&
                     (digit3 != digit4);

    if (allUnique)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    */

    /*
    //task10
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << "Leap";
    }
    else
    {
        cout << "Not leap";
    }
    */
    

    /*
    //task 11
    int x, y;

    cout << "X = ";
    cin >> x;
    
    cout << "Y = ";
    cin >> y;

    if (x == 0 || y == 0) //if any of the cooradinates are 0 it means we are between quadrants
    {
        cout << "On axis";
        return 0;
    }

    if (y > 0) //top half (first and second quadrants)
    {
        if (x > 0)
        {
            cout << "First";
        }
        else
        {
            cout << "Second";
        }
    }
    else //bottom half (third and fourth quadrants)
    {
        if (x > 0)
        {
            cout << "Fourth";
        }
        else
        {
            cout << "Third";
        }
    }
    */

    /*
    //task12

	double a, b, c;
	cin >> a >> b >> c;

	if (a == 0)
	{
		cout << "x1->" << -c / b << endl;
	}
	else if (b * b - 4 * a * c >= 0)
	{
		double D = sqrt(b * b - 4 * a * c);
		if (D != 0)
		{
			cout << "x1->" << (-b - D) / 2 * a << endl;
			cout << "x2->" << (-b + D) / 2 * a;
		}
		else cout << "x1,x2->" << b / 2 * a;
	}
	else
	{
		cout << "No solution!";
		return 0;
	}
    */

    /*
    //task 13
    char symbol;
    cin >> symbol;

    if (symbol >= '0' && symbol <= '9')
    {
        cout << symbol << " is a digit";
    }
    else if (symbol >= 'a' && symbol <= 'z')
    {
        cout << symbol << " is a lowercase letter";
    }
    else if (symbol >= 'A' && symbol <= 'Z')
    {
        cout << symbol << " is an uppercase letter";
    }
    */

    /*
    //task 14
    char symbol;
    cin >> symbol;

    if (symbol >= 'a' && symbol <= 'z')
    {
        cout << (char) (symbol - 'a' + 'A');
    }
    else if (symbol >= 'A' && symbol <= 'Z')
    {
        cout << (char) (symbol - 'A' + 'a');
    }
    */

    return 0;
}