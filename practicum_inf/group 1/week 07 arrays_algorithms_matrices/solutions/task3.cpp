#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int findPos(const int arr[], int size, int element)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] >= element)
        {
            return i;
        }
    }
    return size;
}

void shiftElementsToRight(int arr[], int size, int from)
{
    for (int i = size; i >= from; i--)
    {
        arr[i] = arr[i - 1];
    }
}

// returns new size
int insertInSortedArray(int arr[], int size, int element)
{
    int insertionPos = findPos(arr, size, element);
    shiftElementsToRight(arr, size, insertionPos);

    arr[insertionPos] = element;

    return size + 1;
}

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// returns the new size
int insertAndPrint(int arr[], int size, int element)
{
    cout << "Insert " << element << " in ";
    printArray(arr, size);

    size = insertInSortedArray(arr, size, element);

    cout << "Result:\n";
    printArray(arr, size);
    cout << endl;

    return size;
}

int main()
{
    int arr[10] = {2, 4};
    int size = 2;

    size = insertAndPrint(arr, size, 1);
    size = insertAndPrint(arr, size, 3);
    size = insertAndPrint(arr, size, 5);
    size = insertAndPrint(arr, size, 2);
}