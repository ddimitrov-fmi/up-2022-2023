#include <iostream>

int* readArray(std::size_t size)
{
    int* array = new int[size];

    for (size_t i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    return array;
}


int main(int argc, char **argv)
{
    int* result = readArray(10);

    // Do stuff with array

    delete[] result;

    return 0;
}
