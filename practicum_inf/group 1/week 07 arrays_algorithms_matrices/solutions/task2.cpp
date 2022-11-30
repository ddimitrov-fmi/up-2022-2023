#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool isSymetric(const int arr[], int size)
{
    int middle = size / 2;

    for (int i = 0; i < middle; i++)
    {
        if (arr[i] != arr[size - 1 - i])
        {
            return false;
        }
    }

    return true;
}

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void printMessage(const int arr[], int size)
{
    cout << "The array ";
    printArray(arr, size);

    if (isSymetric(arr, size))
    {
        cout << "is symetric.\n";
    }
    else
    {
        cout << "is NOT symetric.\n";
    }
}

int main()
{
    int example1[] = {1, 2, 2, 3};
    int example2[] = {3, 2, 1, 1, 2, 3};
    int example3[] = {1, 2, 1};

    printMessage(example1, sizeof(example1) / sizeof(int));
    printMessage(example2, sizeof(example2) / sizeof(int));
    printMessage(example3, sizeof(example3) / sizeof(int));
}