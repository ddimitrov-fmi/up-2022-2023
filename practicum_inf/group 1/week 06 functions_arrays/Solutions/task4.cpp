#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void read(int array[], int length)
{
    for (size_t i = 0; i < length; i++)
    {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }
}

void printOddPositions(int array[], int length)
{
    for (int i = 1; i < length; i += 2)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10];
    int len = sizeof(arr) / sizeof(int);

    read(arr, len);
    printOddPositions(arr, len);

    return 0;
}