#include <iostream>

using namespace std;

int main() 
{
    int number;
    int sum = 0;

    do 
    { 
        cin >> number;
        sum += number;
    } while ( number != 0);

    cout << sum << endl;

    return 0;
}