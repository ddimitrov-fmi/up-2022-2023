#include <iostream>

int addOne(int value)
{
    return value + 1;
}

void someOtherFunction(int value)
{
    return;
}

void map(int arr[], std::size_t size, int (*thisIsAFuncPointer)(int))
{
    for (size_t i = 0; i < size; ++i)
    {
        arr[i] = thisIsAFuncPointer(arr[i]);
    }
}

int printAndAdd(int valueOne, int valueTwo)
{
    std::cout << valueOne << std::endl;
    return valueTwo + 1;
}

void multipleParams(int arr[], std::size_t size, int (*thisIsAFuncPointer)(int, int))
{
    for (size_t i = 0; i < size; ++i)
    {
        arr[i] = thisIsAFuncPointer(i, arr[i]);
    }
}

int main(int argc, char **argv)
{
    int a[] = {1, 2, 3, 4};
    map(a, 4, addOne);
    // map(a, 4, someOtherFunction); // Compile error
    multipleParams(a, 4, printAndAdd);

    std::cout << "-------------------" << std::endl;
    for (size_t i = 0; i < 4; i++)
    {
        std::cout << a[i] << std::endl;
    }

    return 0;
}
