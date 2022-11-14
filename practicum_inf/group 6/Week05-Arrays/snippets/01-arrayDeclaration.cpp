#include <iostream>

int main ()
{
    int arr1[3];
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;

    int arr2[] = {1, 2, 3};

    int arr3[5] = {1, 2, 3,}; // 1 2 3 0 0

    for (std::size_t i = 0; i < 3; ++i)
    {
        std::cout << arr1[i] << " " << arr2[i] << " " << arr3[i] << std::endl;
    }

    std::cout << arr1[-4] << " " << arr1[9] << std::endl;

    return 0;
}