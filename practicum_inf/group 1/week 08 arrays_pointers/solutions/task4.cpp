#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void merge(const int arr1[], const int arr2[], int result[], int size1, int size2)
{
    int curr1 = 0, curr2 = 0, currRes = 0;

    while (curr1 < size1 && curr2 < size2)
    {

        if (arr1[curr1] < arr2[curr2])
        {
            result[currRes] = arr1[curr1];
            ++curr1;
        }
        else
        {
            result[currRes] = arr2[curr2];
            ++curr2;
        }
        ++currRes;
    }

    while (curr1 < size1)
    {
        result[currRes] = arr1[curr1];
        ++curr1;
        ++currRes;
    }
    
    while (curr2 < size2)
    {
        result[currRes] = arr2[curr2];
        ++curr2;
        ++currRes;
    }
}


/* Same as:
void merge(const int arr1[], const int arr2[], int result[], int size1, int size2)
{
    int curr1 = 0, curr2 = 0, currRes = 0;

    while (curr1 < size1 && curr2 < size2)
    {
        result[currRes++] = arr1[curr1] < arr2[curr2] ? arr1[curr1++] : arr2[curr2++];
    }

    while (curr1 < size1)
    {
        result[currRes++] = arr1[curr1++];
    }
    while (curr2 < size2)
    {
        result[currRes++] = arr1[curr2++];
    }
}

*/


void printArray(const int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[] = { 1, 3, 5 ,9, 11, 13};
    int arr2[] = { 0, 2, 4, 6, 7, 8, 10, 12};
    const int size1 = sizeof(arr1)/sizeof(int);
    const int size2 = sizeof(arr2)/sizeof(int);
    int result[size1 + size2];
    
    merge(arr1, arr2, result, size1, size2);
    printArray(result, size1 + size2);
}