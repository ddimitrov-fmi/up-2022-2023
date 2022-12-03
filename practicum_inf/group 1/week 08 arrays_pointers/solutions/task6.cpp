#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int getSumOfElements(const int arr[], int size)
{
    int result = 0;

    for (size_t i = 0; i < size; i++)
    {
        result += arr[i];
    }

    return result;
}

void getArrWithSmallerSum(const int *&minPtr, const int arr1[], const int arr2[], int size1, int size2)
{
    int sum1 = getSumOfElements(arr1, size1);
    int sum2 = getSumOfElements(arr2, size2);

    minPtr = sum1 <= sum2 ? arr1 : arr2;
}


void printArray(const int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {0, 2, 1, 0, 3};

    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);

    const int *minPtr = nullptr;

    cout << "Address of first array: " << arr1
         << " with elements: ";
    printArray(arr1, size1);
    
    cout << "Address of second array: " << arr2
         << " with elements: ";
    printArray(arr2, size2);
    
    getArrWithSmallerSum(minPtr, arr1, arr2, size1, size2);

    cout << "Address of array with smaller sum of elements: " << minPtr << endl;
}