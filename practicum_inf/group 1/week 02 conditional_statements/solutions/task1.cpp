#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int speed, fine = 0;
    cin >> speed;

    if (speed > 130)
    {
        fine = 700;
    }
    else if (speed > 110)
    {
        fine = 350;
    }
    else if (speed > 90)
    {
        fine = 150;
    }
    else if (speed > 70)
    {
        fine = 50;
    }
    else if (speed > 50)
    {
        fine = 20;
    }

    if (fine >= 160)
    {
        cout << "Driving license will be taken away!\n";
    }

    cout << "Fine: " << fine << endl;
    return 0;
}