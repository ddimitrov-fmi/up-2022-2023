#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int findPos(const int arr[], int size, int element)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

void shiftElementsToLeft(int arr[], int size, int from)
{
    for (size_t i = from; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

// returns new size
int deleteInSortedArray(int arr[], int size, int element)
{
    int elementPos = findPos(arr, size, element);

    //element is not in the array
    if (elementPos < 0)
    {
        return size;
    }

    shiftElementsToLeft(arr, size, elementPos);
    return size - 1;
}

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// returns the new size
int deleteAndPrint(int arr[], int size, int element)
{
    cout << "Delete " << element << " from ";
    printArray(arr, size);

    size = deleteInSortedArray(arr, size, element);

    cout << "Result:\n";
    printArray(arr, size);
    cout << endl;

    return size;
}

int main()
{
    int arr[10] = {1, 2, 2, 3, 4, 5};
    int size = 6;

    size = deleteAndPrint(arr, size, 2);
    size = deleteAndPrint(arr, size, 5);
    size = deleteAndPrint(arr, size, 3);
    size = deleteAndPrint(arr, size, 1);
}