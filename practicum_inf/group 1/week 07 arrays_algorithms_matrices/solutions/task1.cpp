#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool isDescending(const int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            return false;
        }
    }

    return true;
}

void printArray(const int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void printIsSortedMessage(const int arr[], int size)
{
    cout << "The array ";
    printArray(arr, size);

    if (isDescending(arr, size))
    {
        cout << "is sorted in descending order.\n";
    }
    else
    {
        cout << "is NOT sorted in descending order.\n";
    }
}

int main()
{
    int example1[] = { 23, 20, 7, 5, 1 };
    int example2[] = { 23, 20, 7, 7, 1 };
    int example3[] = { 23, 29, 7, 5, 1 };

    printIsSortedMessage(example1, sizeof(example1)/sizeof(int));
    printIsSortedMessage(example2, sizeof(example2)/sizeof(int));
    printIsSortedMessage(example3, sizeof(example3)/sizeof(int));
}