#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int numInRange(int lowerBound, int upperBound)
{
    int input;

    cout << "Number in range [" << lowerBound << ", " << upperBound << "]: ";
    cin >> input;

    while (input < lowerBound || input > upperBound)
    {
        cout << input << " is not in ["
             << lowerBound << ", "
             << upperBound << "]. Try again: ";
        cin >> input;
    }

    return input;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << numInRange(a, b);

    return 0;
}