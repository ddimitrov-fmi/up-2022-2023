#include <iostream>
using namespace std;

int setAndReturn(int *number1, const int *number2)
{
    int temp = *number1;
    *number1 = *number2;
    return temp;
}

int main(int argc, char **argv)
{
    int number1 = 0;
    int number2 = 0;
    cin >> number1 >> number2;
    cout << setAndReturn(&number1, &number2) << endl;
    cout << number1 << " " << number2 << endl;
}
