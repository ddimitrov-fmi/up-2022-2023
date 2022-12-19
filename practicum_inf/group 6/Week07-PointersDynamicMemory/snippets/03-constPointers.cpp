#include <iostream>

int main ()
{
    int a = 5;

    int* aPtr = &a;

    ++(*aPtr);

    std::cout << *aPtr << std::endl; // 6

    const int* constAPtr = &a;

    // ++(*constAPtr);

    int arr[] = {1, 2, 3, 4 ,5};

    int* const arrConstPtr = arr;

    std::cout << *arrConstPtr << std::endl;

    ++(*arrConstPtr);

    std::cout << *arrConstPtr << std::endl;

    const int *const constArrConstPtr = arr;

    const int *const *const mazalo = &constArrConstPtr;

    const int *const *const *const BIG_MAZALO = &mazalo;

    return 0;
}