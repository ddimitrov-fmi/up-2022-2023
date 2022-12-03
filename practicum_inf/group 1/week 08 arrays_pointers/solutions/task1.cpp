#include <iostream>

const int *findMin(const int *arr, int size)
{
    if (size <= 0) {
        return nullptr;
    }

    const int *pMin = arr;

    for (int i = 1; i < size; i++)
    {
        /// Variant 1
        if (arr[i] < *pMin)
        {
            pMin = &arr[i];
        }

        /// Variant 2
        // if ( arr[ i ] < *pMin )
        //   pMin = arr + i;
    }

    // Note: arr[ i ] <=> *(arr + i)
    // &arr[ i ] <=> &*(arr + i) <=> arr + i

    return pMin;
}

int main()
{
    int arr[] = {1, 1, 7, 3, 5, -2, 3};
    const int* minElement = findMin(arr, sizeof(arr) / sizeof(int));
    std::cout << "Address of min element: "
              << minElement
              <<"\nValue: "
              << *minElement
              << std::endl;
}